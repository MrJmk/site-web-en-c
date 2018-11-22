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
		char ligne[TAILLE_LIGNE] = "";
		printf(
		"Content-type: text/html\n\n"
		"<html>\n"
			"<head>\n"
				"<title>SUPPRESSION CGI</title>\n"
				"<meta http-equiv=\"refresh\" content=\"0; URL=mainhtml2\">\n"
			"</head>\n"
			"<body>\n");


		fgets(ligne, TAILLE_LIGNE, stdin);

	
		if(sscanf(ligne,"structure=%40[^&]s",structure)> 0 )
		{
			

				MYSQL mysql;
				mysql_init(&mysql);
					
				mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "option");

				if(mysql_real_connect(&mysql, "127.0.0.1","root","premier12","esatic",0,NULL,0))
				{
					char requete[1000] = "";

					sprintf(requete, "DELETE FROM partenariat WHERE structure='%s';", structure);
					if(mysql_query(&mysql,requete) != 0 )
					{
						printf("echec de la suppression  ( %s ) \n", mysql_error(&mysql) );
					}
					else
					{
						printf("SUPPRESSION REUSSIE \n");
					}

					
				}
				else
				{
					printf("<h1> impossible d'entrer dans bd</h1>");
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

