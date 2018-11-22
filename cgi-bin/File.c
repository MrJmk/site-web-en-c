 
#include<stdio.h>
#include <stdlib.h>

void page();

int main()
{
int visites = 1;

     FILE *fichier = NULL;

     fichier = fopen("compteur.txt", "r+");

     if(fichier != NULL)

     {

          fscanf(fichier, "%d", &visites);

          fseek(fichier, 0, SEEK_SET);

          fprintf(fichier, "%d", visites+1);

          fclose(fichier);

     }


printf("Content-Type: text/html;\n\n");

page(visites);
return 0;
}

/* On sépare le squelette HTML du reste du code */
void page(int visites) {
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
printf("                    <li class=\"active\" role=\"presentation\"><a href=\"mainhtml1\">Acceuil </a></li>\n");
printf("                    <li role=\"presentation\"><a href=\"esatic.ci\">A propos</a></li>\n");
printf("                    <li role=\"presentation\" class=\"btn-success\"><a href=\"#connexion\" data-toggle=\"modal\">Connexion </a></li>\n");
printf("            </div>\n");
printf("        </div>\n");
printf("    </nav>\n");
printf("    <div class=\"modal fade\" role=\"dialog\" tabindex=\"-1\" id=\"connexion\">\n");
printf("        <div class=\"modal-dialog\" role=\"document\">\n");
printf("            <div class=\"modal-content\">\n");
printf("                <div class=\"modal-header\">\n");
printf("                    <button type=\"button\" class=\"close\" data-dismiss=\"modal\" aria-label=\"Close\"><span aria-hidden=\"true\">×</span></button>\n");
printf("                    <h4 class=\"text-center modal-title\"><strong><em>Connexion</em></strong> </h4></div>\n");
printf("                <div class=\"modal-body\">\n");
printf("                    <form method=\"POST\" action=\"compte.cgi\">\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div class=\"input-group-addon\"><span>USER</span></div>\n");
printf("                            <input name=\"log\" class=\"form-control\" type=\"text\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                        <div class=\"input-group\">\n");
printf("                            <div  class=\"input-group-addon\"><span>PASSWORD </span></div>\n");
printf("                            <input name=\"pwd\" class=\"form-control\" type=\"password\">\n");
printf("                            <div class=\"input-group-addon\"></div>\n");
printf("                        </div>\n");
printf("                <div class=\"modal-footer\">\n");
printf("                    <button class=\"btn btn-success\" type=\"submit\">Connexion </button>\n");
printf("                    <button class=\"btn btn-default\" type=\"button\" data-dismiss=\"modal\">Fermer </button>\n");
printf("                </div>\n");
printf("                    </form>\n");
printf("                </div>\n");

printf("            </div>\n");
printf("        </div>\n");
printf("    </div>\n");
printf("    <div id=\"img_backg\">");
printf("        <div class=\"jumbotron\">\n");
printf("            <h1><strong>LA FAMILLE ESATIC</strong></h1>\n");
printf("            <p><strong><em>C'est une trentaine de partenariat avec des universités et des grandes écoles, des entreprises, des organismes,..</em></strong>.</p>\n");
printf("            <p><a class=\"btn btn-info btn-lg\" role=\"button\" data-toggle=\"tooltip\" title=\"nombres de visites de la plateforme!\">Nombre de visite(s): <span class='badge'>%d</span></a></p>\n",visites);
printf("        </div>\n");
printf("    </div>\n");
printf("    <div class=\"container\">\n");
printf("        <h1 class=\"text-center\">Nos partenaires</h1>\n");
printf("        <div class=\"carousel slide\" data-ride=\"carousel\" id=\"carousel-1\">\n");
printf("            <div class=\"carousel-inner\" role=\"listbox\">\n");
printf("                <div class=\"item active\"><img src=\"../assets/img/Part.jpg\" alt=\"Slide Image\" class=\"image\"></div>\n");
printf("                <div class=\"item\"><img src=\"../assets/img/PartUGE.jpg\" alt=\"Slide Image\" class=\"image\"></div>\n");
printf("            </div>\n");
printf("            <div><a class=\"left carousel-control\" href=\"#carousel-1\" role=\"button\" data-slide=\"prev\"><i class=\"glyphicon glyphicon-chevron-left\"></i><span class=\"sr-only\">Previous</span></a><a class=\"right carousel-control\" href=\"#carousel-1\" role=\"button\" data-slide=\"next\"><i class=\"glyphicon glyphicon-chevron-right\"></i><span class=\"sr-only\">Next</span></a></div>\n");
printf("            <ol class=\"carousel-indicators\">\n");
printf("                <li data-target=\"#carousel-1\" data-slide-to=\"0\" class=\"active\"></li>\n");
printf("                <li data-target=\"#carousel-1\" data-slide-to=\"1\"></li>\n");
printf("            </ol>\n");
printf("        </div>\n");
printf("    </div>\n");
printf("    <div class=\"container\">\n");
printf("        <h1 class=\"text-center\">Diversité dans les relations :</h1>\n");
printf("        <div class=\"row\">\n");
printf("            <div class=\"col-md-4\">\n");
printf("                <h4 class=\"text-center\"><strong>Universités &amp; Grande écoles</strong></h4>\n");
printf("                <p class=\"text-justify\">Des partenariats ont été signé avec les meilleurs Uinversités/Grandes écoles de Côtes d'Ivoire, de Tunisie, du Maroc et de France,.</p>\n");
printf("                <button class=\"btn btn-info\" type=\"submit\">Voir <i class=\"glyphicon glyphicon-plus-sign\"></i> </button>\n");
printf("            </div>\n");
printf("            <div class=\"col-md-4\">\n");
printf("                <h4 class=\"text-center\"><strong><em>Entreprises</em></strong> </h4>\n");
printf("                <p class=\"text-justify\">De nombreuses entreprise de TIC ont signés des partenariats avec l'ESATIC pour la formation de leurs agents, ainsi que pour offrir des formations et des stages aux étudiants de l'ESATIC.</p>\n");
printf("                <button class=\"btn btn-info\" type=\"button\">Voir <i class=\"glyphicon glyphicon-plus-sign\"></i> </button>\n");
printf("            </div>\n");
printf("            <div class=\"col-md-4\">\n");
printf("                <h4 class=\"text-center\"><strong><em>Organismes &amp; Associations</em></strong></h4>\n");
printf("                <p class=\"text-justify\">Afin de créer un réseau pour faciliter l'insertion professionnelle des étudiants plusieurs partenariats ont été signés dans cet optique</p>\n");
printf("                <button class=\"btn btn-info\" type=\"button\">Voir <i class=\"glyphicon glyphicon-plus-sign\"></i> </button>\n");
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
printf("<script>\n");
printf("$(document).ready(function(){\n");
printf("    $('[data-toggle=\"tooltip\"]').tooltip();\n");
printf("});\n");
printf("</script>\n");
printf("</body>\n");

printf("</html>\n");
};
