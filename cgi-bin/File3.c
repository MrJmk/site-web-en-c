 
#include<stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include <string.h>

void page();
void affichage();
void bas();
  int main()
{

printf("Content-Type: text/html;\n\n");

page();
affichage();
bas();
return 0;
}
/* On sépare le squelette HTML du reste du code */
void page() {
printf("<!DOCTYPE html>\n");
printf("<html>\n");

printf("<head>\n");
printf("    <meta charset=\"utf-8\">\n");
printf("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
printf("    <title>Partenariat ESATIC</title>\n");
printf("    <link rel=\"stylesheet\" href=\"http://localhost/assets/bootstrap/css/bootstrap.min.css\">\n");
printf("    <link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Cookie\">");
printf("    <link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Permanent+Marker\">\n");
printf("    <link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Skranji\">\n");
printf("    <link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Skranji|UnifrakturMaguntia\">\n");
printf("    <link rel=\"stylesheet\" href=\"http://localhost/assets/fonts/font-awesome.min.css\">\n");
printf("    <link rel=\"stylesheet\" href=\"http://localhost/assets/css/styles.css\">\n");
printf("    <link rel=\"stylesheet\" href=\"http://localhost/assets/css/Pretty-Footer.css\">\n");
printf("    <link rel=\"stylesheet\" href=\"http://localhost/assets/css/styles_part.css\">\n");
printf("</head>\n");

printf("<body>\n");
printf("    <nav class=\"navbar navbar-default\">\n");
printf("        <div class=\"container-fluid\">\n");
printf("            <div class=\"navbar-header\">");
printf("<a class=\"navbar-brand navbar-link\" href=\"mainhtml1\">Partenariats ESATIC</a>\n");
printf("                <button class=\"navbar-toggle collapsed\" data-toggle=\"collapse\" data-target=\"#navcol-1\"><span class=\"sr-only\">Toggle navigation</span><span class=\"icon-bar\"></span><span class=\"icon-bar\"></span><span class=\"icon-bar\"></span></button>\n");
printf("            </div>\n");
printf("            <div class=\"collapse navbar-collapse\" id=\"navcol-1\">\n");
printf("                <ul class=\"nav navbar-nav navbar-right\">\n");
printf("                    <li role=\"presentation\"><a href=\"mainhtml1\">Acceuil </a></li>\n");
printf("                    <li class=\"active\" role=\"presentation\"><a href=\"mainhtml2\">Les partenariats</a></li>\n");
printf("                    <li role=\"presentation\"><a href=\"mainhtml1\">Déconnexion</a></li>\n");

printf("                </ul>\n");
printf("            </div>\n");
printf("        </div>\n");
printf("    </nav>\n");

printf("<ul class=\"dropdown-menu\">\n");
printf("        <li> <a href=\"#\">Déconnexion </a></li>\n");
printf("    </ul>\n");
printf("    <div id=\"img_part_admin\">\n");
printf("        <div class=\"jumbotron\">\n");
printf("            <h1><strong></strong> </h1>\n");
printf("            <p>.</p>\n");
printf("            <p></p>\n");
printf("        </div>\n");
printf("    </div>\n");

printf("    <div class=\"modal fade\" role=\"dialog\" tabindex=\"-1\" id=\"ajout\">\n");
printf("        <div class=\"modal-dialog\" role=\"document\">\n");
printf("            <div class=\"modal-content\">\n");
printf("                <div class=\"modal-header\">\n");
printf("                    <button type=\"button\" class=\"close\" data-dismiss=\"modal\" aria-label=\"Close\"><span aria-hidden=\"true\">×</span></button>\n");
printf("                    <h4 class=\"text-center modal-title\"><strong><em>AJOUT</em></strong> </h4></div>\n");
printf("                <div class=\"modal-body\">\n");
printf("                    <form method='POST' action='ajouter.cgi'>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>STRUCTURE </span></div>\n");
printf("                            <input name='structure' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>PAYS </span></div>\n");
printf("                            <input name='pays' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>CONVENTION </span></div>\n");
printf("                            <input name='axeconv' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>DATE DEBUT</span></div>\n");
printf("                            <input name='debcontrat' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>DATE FIN</span></div>\n");
printf("                            <input name='fincontrat' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>OBSERVATION </span></div>\n");
printf("                            <input name='observation' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>RENOUVELLEMENT </span></div>\n");
printf("                            <input name='renouvelement' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>FinRENOUVELLEMENT </span></div>\n");
printf("                            <input name='finrenouv' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>REALISATIONATION </span></div>\n");
printf("                            <input name='realisation' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                	<div class=\"modal-footer\">\n");
printf("                    		<button class=\"btn btn-default\" type=\"button\" data-dismiss=\"modal\">Close</button>\n");
printf("                    		<button class=\"btn btn-primary\" type=\"submit\">Save</button>\n");
printf("                	</div>\n");
printf("                    </form>\n");
printf("                </div>\n");
printf("            </div>\n");
printf("        </div>\n");
printf("    </div>\n");
printf("    </div>\n");

printf("    <div class=\"modal fade\" role=\"dialog\" tabindex=\"-1\" id=\"modification\">\n");
printf("        <div class=\"modal-dialog\" role=\"document\">\n");
printf("            <div class=\"modal-content\">\n");
printf("                <div class=\"modal-header\">\n");
printf("                    <button type=\"button\" class=\"close\" data-dismiss=\"modal\" aria-label=\"Close\"><span aria-hidden=\"true\">×</span></button>\n");
printf("                    <h4 class=\"text-center modal-title\"><strong><em>MODIFICATION</em></strong> </h4></div>\n");
printf("                <div class=\"modal-body\">\n");
printf("                    <form method='POST' action='modifier.cgi'>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>STRUCTURE </span></div>\n");
printf("                            <input name='structure' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>PAYS </span></div>\n");
printf("                            <input name='pays' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>CONVENTION </span></div>\n");
printf("                            <input name='axeconv' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>DATE DEBUT</span></div>\n");
printf("                            <input name='debcontrat' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>DATE FIN</span></div>\n");
printf("                            <input name='fincontrat' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>OBSERVATION </span></div>\n");
printf("                            <input name='observation' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>RENOUVELLEMENT </span></div>\n");
printf("                            <input name='renouvelement' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>FinRENOUVELLEMENT </span></div>\n");
printf("                            <input name='finrenouv' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>REALISATIONATION </span></div>\n");
printf("                            <input name='realisation' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                	<div class=\"modal-footer\">\n");
printf("                    		<button class=\"btn btn-default\" type=\"button\" data-dismiss=\"modal\">Close</button>\n");
printf("                    		<button class=\"btn btn-primary\" type=\"submit\">Save</button>\n");
printf("                	</div>\n");
printf("                    </form>\n");
printf("                </div>\n");
printf("            </div>\n");
printf("        </div>\n");
printf("    </div>\n");
printf("    </div>\n");

printf("    <div class=\"modal fade\" role=\"dialog\" tabindex=\"-1\" id=\"suppression\">\n");
printf("        <div class=\"modal-dialog\" role=\"document\">\n");
printf("            <div class=\"modal-content\">\n");
printf("                <div class=\"modal-header\">\n");
printf("                    <button type=\"button\" class=\"close\" data-dismiss=\"modal\" aria-label=\"Close\"><span aria-hidden=\"true\">×</span></button>\n");
printf("                    <h4 class=\"text-center modal-title\"><strong><em>SUPPRESSION</em></strong> </h4></div>\n");
printf("                <div class=\"modal-body\">\n");
printf("                    <form method='POST' action='supprimer.cgi'>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>STRUCTURE </span></div>\n");
printf("                            <input name='structure' class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");   
printf("                	<div class=\"modal-footer\">\n");
printf("                    		<button class=\"btn btn-default\" type=\"button\" data-dismiss=\"modal\">Close</button>\n");
printf("                    		<button class=\"btn btn-primary\" type=\"submit\">supprimer</button>\n");
printf("                	</div>\n");
printf("                    </form>\n");
printf("                </div>\n");
printf("            </div>\n");
printf("        </div>\n");
printf("    </div>\n");
printf("    </div>\n");
printf("    <div>\n");
printf("        <div>\n");
printf("            <ul class=\"nav nav-tabs\">\n");
printf("                <li><a href=\"#tab-1\" class=\"info\" role=\"tab\" data-toggle=\"tab\">Partenariats </a></li>\n");
printf("            </ul>\n");
printf("            <div class=\"tab-content\">\n");
printf("                <div class=\"tab-pane active\" role=\"tabpanel\" id=\"tab-1\">\n");
printf("                    <div class=\"table-responsive\">\n");
printf("                        <table class=\"table\">\n");
printf("                           <form class=\"form-inline\">\n");
printf("                            <thead>\n");
printf("                                <tr>\n");
printf("                                    <th class=\"info\">N°</th>\n");
printf("                                    <th class=\"info\">STRUCTURES</th>\n");
printf("                                    <th class=\"info\">PAYS</th>\n");
printf("                                    <th class=\"info\">CONVENTION</th>\n");
printf("                                    <th class=\"info\">DEBUT</th>\n");
printf("                                    <th class=\"info\">FIN CONTRAT</th>\n");
printf("                                    <th class=\"info\">OBSERVATION</th>\n");
printf("                                    <th class=\"info\">RENOUVELLEMENT</th>\n");
printf("                                    <th class=\"info\">FIN RENOUVELLEMENT</th>\n");
printf("                                    <th class=\"info\">REALISATION</th>\n");
printf("                                </tr>\n");
printf("                            </thead>\n");
printf("                            <tbody>\n");

}
void bas() {
printf("                            </tbody>\n");
printf("                           </form>\n");
printf("                        </table>\n");
printf("                    </div>\n");
printf("                </div>\n");
printf("            </div>\n");
printf("        </div>\n");
printf("    </div>\n");
printf("    <footer>\n");
printf("        <div class=\"row\">\n");
printf("            <div class=\"col-md-4 col-sm-6 footer-navigation\">\n");
printf("                <h3><a href=\"#\">ESATIC<span> partenariat</span></a></h3>\n");
printf("                <p class=\"links\"><a href=\"#\">Home</a><strong> ·  · </strong><a href=\"#\">About</a><strong> ·  · </strong></p>\n");
printf("                <p class=\"company-name\">Jmk Company © 2018 </p>\n");
printf("            </div>\n");
printf("            <div class=\"col-md-4 col-sm-6 footer-contacts\">\n");
printf("                <div><span class=\"fa fa-map-marker footer-contacts-icon\"> </span>\n");
printf("                    <p><span class=\"new-line-span\">Treichville, Boulevard de marseille,</span> Abidjan, Côte d'Ivoire</p>\n");
printf("                </div>\n");
printf("                <div><i class=\"fa fa-phone footer-contacts-icon\"></i>\n");
printf("                    <p class=\"footer-center-info email text-left\"> +225 48045822</p>\n");
printf("                </div>\n");
printf("                <div><i class=\"fa fa-envelope footer-contacts-icon\"></i>\n");
printf("                    <p> <a href=\"#\" target=\"_blank\">support@company.com</a></p>\n");
printf("                </div>\n");
printf("            </div>\n");
printf("            <div class=\"clearfix visible-sm-block\"></div>\n");
printf("            <div class=\"col-md-4 footer-about\">\n");
printf("                <h4>A propos de l'ESATIC</h4>\n");
printf("                <p> l'ESATIC est la meilleur école dans le domaine du numérique en Côte d'Ivoire </p>\n");
printf("                <div class=\"social-links social-icons\"><a href=\"#\"><i class=\"fa fa-facebook\"></i></a><a href=\"#\"><i class=\"fa fa-twitter\"></i></a><a href=\"#\"><i class=\"fa fa-linkedin\"></i></a><a href=\"#\"><i class=\"fa fa-github\"></i></a></div>\n");
printf("            </div>\n");
printf("        </div>\n");
printf("    </footer>\n");
printf("    <script src=\"http://localhost/assets/js/jquery.min.js\"></script>\n");
printf("    <script src=\"http://localhost/assets/bootstrap/js/bootstrap.min.js\"></script>\n");
printf("</body>\n");

printf("</html>\n");
}


void affichage()
	{
		MYSQL objMysql;
		//char *chaine[100] ;
		//chaine = "";
		//chaine = strcat("SELECT * FROM", table);

		//déclaration des objets pour la fonction d'affichage
		mysql_init(&objMysql);
					
		mysql_options(&objMysql, MYSQL_READ_DEFAULT_GROUP, "option");

		if(mysql_real_connect(&objMysql, "127.0.0.1","root","premier12","esatic",0,NULL,0))
		{
			MYSQL_RES *res = NULL;
			MYSQL_ROW row2 = NULL;
				
			unsigned int nbre_champs = 0;
			
			//le switch pour les différentes options d'affichage		
			
			mysql_query(&objMysql, "SELECT * FROM partenariat");

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
					printf("<tr>\n");
					for(i = 0; i < nbre_champs; ++i)
					{
						 printf("<td>");
						 //On ecrit toutes les valeurs
		      				 printf("%.*s\t\t", (int) lengths[i], row2[i] ? row2[i] : "NULL");
						printf("</td>\n");
					}
					printf("</tr>\n");	
			}	
		}else{
			printf("Erreur");
		}
	}
