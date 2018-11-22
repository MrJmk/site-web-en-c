#include <stdlib.h>
#include <stdio.h>
#include <mysql/mysql.h>
#include <string.h>
#define TAILLE_NOM 45
#define TAILLE_NUMERO 12
#define TAILLE_LIGNE 100000
MYSQL objMysql;


void main()
{	

		printf(
		"Content-type: text/html\n\n"
		"<html>\n"
			"<head>\n"
				"<title>CGI EN C TUTORIAL</title>\n"
			"</head>\n"
			"<body>\n");


		
	
	
		affichage();


		

		printf("</body>\n" "</html>\n");
	
	

}

void affichage()
	{
		//char *chaine[100] ;
		//chaine = "";
		//chaine = strcat("SELECT * FROM", table);

		//déclaration des objets pour la fonction d'affichage
		MYSQL_RES *res = NULL;
		MYSQL_ROW row2 = NULL;
			
		unsigned int nbre_champs = 0;
		
		//le switch pour les différentes options d'affichage		
		
		mysql_query(&objMysql, "SELECT * FROM ");

		//on met le jeu de résultat dans le pointeur
		res = mysql_use_result(&objMysql);

		//on récupère le nombre de champs
		nbre_champs = mysql_num_fields(res);
			
		unsigned int i=0;
		
		//tant qu'il y a encore un résultat...		
		while((row2 = mysql_fetch_row(res)))
		{
		
				//On déclare un pointeur long non signé pour y stocker la taille des valeurs
				unsigned long *lengths;

				//on stocke ces tailles dans le pointeur
				lengths = mysql_fetch_lengths(res);

				//On fait une boucle pour avoir la valeur de chaque champs
				printf("<tr>");
				for(i = 0; i < nbre_champs; ++i)
				{
					 printf("<td>");
					 //On ecrit toutes les valeurs
              				 printf("%.*s\t\t", (int) lengths[i], row2[i] ? row2[i] : "NULL");
					printf("</td>");
				}
				printf("</tr>");	
		}	
	}
