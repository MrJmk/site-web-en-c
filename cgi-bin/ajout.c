#include <stdlib.h>
#include <stdio.h>
#include <mysql/mysql.h>
#include <string.h>
#define TAILLE_NOM 45
#define TAILLE_NUMERO 12
#define TAILLE_LIGNE 100000


int main()
{
		char structure[TAILLE_NOM] = "";
		char pays[TAILLE_NOM] = "";
		char axeconv[TAILLE_NOM] = "";				
		char debcontrat[TAILLE_NOM] = "";		
		char fincontrat[TAILLE_NUMERO] = "";
		char observation[TAILLE_NOM] = "";
		char renouvelement[TAILLE_NOM]="";
		char finrenouv[TAILLE_NOM]="";
		char realisation[TAILLE_NOM]="";
		
		char ligne[TAILLE_LIGNE] = "";

		printf(
		"Content-type: text/html\n\n"
		"<html>\n"
			"<head>\n"
				"<title>AJOUT CGI</title>\n"
				"<meta http-equiv=\"refresh\" content=\"0; URL=mainhtml2\">\n"
			"</head>\n"
			"<body>\n");


		fgets(ligne, TAILLE_LIGNE, stdin);

	
		if(sscanf(ligne,"structure=%40[^&]&pays=%40[^&]&axeconv=%40[^&]&debcontrat=%100[^&]&fincontrat=%100[^&]&observation=%40[^&]&renouvelement=%40[^&]&finrenouv=%40[^&]&realisation=%40[^&]s", structure, pays, axeconv, debcontrat, fincontrat, observation, renouvelement, finrenouv, realisation) > 0 )
		{
			if(strlen(structure) != 0 || strlen(pays) != 0 || strlen(axeconv) != 0)
			{

				MYSQL mysql;
				mysql_init(&mysql);
					
				mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");

				if(mysql_real_connect(&mysql, "127.0.0.1","root","premier12","esatic",0,NULL,0))
				{
					char requete[1000] = "";

					sprintf(requete, "INSERT INTO partenariat(structure, pays, convention, datedebut, datefin, observation, renouvellement, finRenouvellement, realisation) VALUES ('%s', '%s','%s', '%s', '%s','%s', '%s', '%s','%s' )", structure, pays, axeconv, debcontrat, fincontrat, observation, renouvelement, finrenouv, realisation);
					if(mysql_query(&mysql,requete) != 0 )
					{
						printf("echec de l'insertion dû à  ( %s ) \n", mysql_error(&mysql) );
					}
					else
					{
						printf("INSCRIPTION REUSSIE \n");
					}

					
				}
				else
				{
					printf("<h1> impossible d'entrer dans bd</h1>");
				}
			
			}						

		}
		else
		{
				printf("<h1> C'est ici l'erreur</h1>");
		}




		return 0;
		
		printf("</body>\n");
		printf("</html>\n");

}

