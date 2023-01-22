#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
typedef struct {
	int id;
	char nom_auteur[100];
		char titre[100];

int nombre_exe;
    
}livre;
typedef struct{
	int id_emprunteur;
	char nom_emprunteur[100];
	int nbr_livres_emprunt;
		
}emprunteur;
//page gestion des livres 
void html1()
{
	FILE *f;
	f=fopen("geslivre.html","w");
	if(f!=NULL){
 fputs("<!DOCTYPE html>\n",f);
fputs("<html>",f);
fputs("<head>",f);
fputs("<title> ma page </title>",f);
fputs("<body>",f);
fputs("<style>*{padding: 0;}\nbody{width:500px;\nheight: 100vh;\nbackground-image:url(\"library.jpg\");\nbackground-repeat: no-repeat;\nbackground-size:contain;\nbackground-color: bisque;\n}ul {list-style-type: none;\nmargin: 0;\npadding: 0;\n width: 300px;\nheight: 320px;\nbackground-color: #f1f1f1;\ntransform: translate(900px,20px);\n}li a {display: block;\n color: #000;\npadding: 16px 16px;\ntext-decoration: none;\n}li a:hover {background-color: #555;\ncolor: white;\n}h1{font-size: 30px;\nfont-family: Georgia;\n transform: translate(830px);\n}\n</style>\n</head>",f);
fputs("<h1> Gestion des livres </h1>\n",f);
fprintf(f,"<ul>\n<li><a href=\"#\"> Ajouter un livre</a></li>\n<li><a href=\"#\"> Supprimer un livre</a></li>\n<li><a href=\"lister0.html\"> Lister les livres</a></li>\n<li><a href=\"#\"> Rechercher un livre</a></li>\n<li><a href=\"login.html\"> Aller vers page d'authentification </a></li>\n<li><a href=\"gesemp.html\"> Aller vers gestion des emprunteurs  </a></li>\n</ul>\n</body>");


	}
	fclose(f);
}
//page gestion des emprunteurs :
void html2()
{

FILE *fich2;
	fich2=fopen("gesemp.html","w");
	if(fich2!=NULL){
 fputs("<!DOCTYPE html>\n",fich2);
fputs("<html>",fich2);
fputs("<head>",fich2);
fputs("<title>emprunteur</title>",fich2);
fputs("<body>",fich2);
fputs("<style>*{padding: 0;}\nbody{width:500px;\nheight: 100vh;\nbackground-image:url(\"library.jpg\");\nbackground-repeat: no-repeat;\nbackground-size:contain;\nbackground-color: bisque;\n}ul {list-style-type: none;\nmargin: 0;\npadding: 0;\n width: 300px;\nheight: 320px;\nbackground-color: #f1f1f1;\ntransform: translate(900px,20px);\n}li a {display: block;\n color: #000;\npadding: 16px 16px;\ntext-decoration: none;\n}li a:hover {background-color: #555;\ncolor: white;\n}h1{font-size: 30px;\nfont-family: Georgia;\n transform: translate(830px);\n}\n</style>\n</head>",fich2);
fputs("<h1> Gestion des emprunteurs </h1>\n",fich2);
fprintf(fich2,"<ul>\n<li><a href=\"#\"> Ajouter un emprunteur </a></li>\n<li><a href=\"#\"> Supprimer un emprunteur</a></li>\n<li><a href=\"lister2.html\"> Lister les emprunteurs</a></li>\n<li><a href=\"#\"> Rechercher un emprunteur</a></li>\n<li><a href=\"login.html\"> Aller vers page d'authentification </a></li>\n<li><a href=\"geslivre.html\"> Aller vers gestion des livres  </a></li>\n</ul>\n</body>");


}
fclose(fich2);}
//Fonction pour créer la page d'authentification
void login()
{
	FILE *fich3;
	fich3=fopen("login.html","w");
	if(fich3!=NULL){
 fputs("<!DOCTYPE html>\n<html>\n<head>\n\n<title>Login</title>\n",fich3);
fputs("<style>#bg {background-image: url(\"background.jpg\");\nposition: fixed;\nleft: 0;\n top: 0;width: 100%;\nheight: 100%;\nbackground-size: cover;\nfilter: blur(5px);\n}\nbody { font-family: 'Lato', sans-serif;\ncolor: #4A4A4A;\ndisplay: flex; justify-content: center;align-items: center; min-height: 100vh;overflow: hidden;margin: 0;padding: 0;}form { width: 350px;position: relative;}form .form-field::before {font-size: 20px; position: absolute;left: 15px;top: 17px;color: #888888;content: " ";display: block;background-size: cover;background-repeat: no-repeat;}form .form-field:nth-child(1)::before {background-image: url(img/user-icon.png);width: 20px;height: 20px;top: 15px;}form .form-field:nth-child(2)::before { background-image: url(img/lock-icon.png); width: 16px;height: 16px;}form .form-field {display: -webkit-box;display: -ms-flexbox; display: flex;-webkit-box-pack: justify;-ms-flex-pack: justify; justify-content: space-between;-webkit-box-align: center;-ms-flex-align: center;align-items: center;\n",fich3);
fputs("margin-bottom: 1rem;position: relative;}form input {font-family: inherit;width: 100%;outline: none;background-color: #fff;border-radius: 4px;border: none; display: block;padding: 0.9rem 0.7rem;box-shadow: 0px 3px 6px rgba(0, 0, 0, 0.16);font-size: 17px; color: #4A4A4A; text-indent: 40px;}form .btn {outline: none;border: none;cursor: pointer;display: inline-block; margin: 0 auto;padding: 0.9rem 2.5rem;text-align: center; background-color: #47AB11;color: #fff; border-radius: 4px;box-shadow: 0px 3px 6px rgba(0, 0, 0, 0.16);font-size: 17px;}</style>\n</head>",fich3);
fputs("<body>\n<div id=\"bg\"></div>\n<form>\n<div class=\"form-field\">\n<input type=\"email\" placeholder=\"Email / Username\" required/>\n</div>\n<div class=\"form-field\">\n<input type=\"password\" placeholder=\"Password\" required/>\n</div> <div class=\"form-field\">\n<button class=\"btn\" type=\"submit\">Log in</button>\n</div>\n</form>\n</body>\n</html>\n",fich3);


	}
	fclose(fich3);
}

//fonction d'encryption du mot de passe 
int  encryption(FILE*fpt){

    char fname[20]="passwords.txt", ch;
    FILE *fps;
    char fichtemp[20]="temp.txt";
    
    fps = fopen(fname, "r");
    if(fps == NULL)
        return 0;
    fpt = fopen("temp.txt", "w");
    if(fpt == NULL)
        return 0;
    ch = fgetc(fps);
    while(ch != EOF)
    {
        ch = ch+100;
        fputc(ch, fpt);
        ch = fgetc(fps);
    }
    fclose(fps);
    fclose(fpt);
    fps = fopen(fname, "w");
    if(fps == NULL)
        return 0;
    fpt = fopen("temp.txt", "r");
    if(fpt == NULL)
        return 0;
    ch = fgetc(fpt);
    while(ch != EOF)
    {
        ch = fputc(ch, fps);
        ch = fgetc(fpt);
    }
    fclose(fps);
    fclose(fpt);
    rename("temp.txt",fname);
    remove(fichtemp);
    
    
    printf("\nFile %s Encrypted Successfully!", fname);
    getch();
    return 0;
}
//saisir un livre
livre saisir(){
	livre l;
	printf(" id ?\n");
	scanf("%d",&l.id);
	printf("nom de l'auteur?\n");
	scanf("%s",l.nom_auteur);
	printf("Titre ?\n");
	scanf("%s",l.titre);
	printf("nombre d'exempliaires ?");
	scanf("%d",&l.nombre_exe);
	return l;
}
//ajouter un livre
void ajouter(char *nom_fichier,livre l){

	FILE *f;
	int i;
	int id;
	f=fopen("livre.txt","a");
	if (f!=NULL){
		
      fprintf(f,"%d %s %s %d \n",l.id,l.nom_auteur,l.titre,l.nombre_exe);

		}
	
	fclose(f);}
//rechercher un livre
 int rechercher_livre(int idr){
		livre l;
		FILE*f=fopen("livre.txt","r");
		 bool trouve=0;
		do
		{
			fscanf(f,"%d %s %s %d\n",&l.id,&l.nom_auteur,&l.titre,&l.nombre_exe);
			fflush(stdin);
			if(l.id==idr){
			
			   printf("Id du livre est :%d\t\t\n",l.id);
			   printf("AUTEUR est :%s\t\t\n",l.nom_auteur);
			   printf("TITRE est :%s\t\t\n",l.titre);
			    printf("NOMBRE EXE est :%d\t\t\n",l.nombre_exe);

			   trouve=1;	
			}
		
			
		}while(!feof(f));
		if(trouve==0){
		
		printf("\t\tnot found\n\n\n");}
			
		
		fclose(f);
		
	}
//afficher la liste des livres 
	void lister_livre(){
		livre l;
	
		FILE*F=fopen("livre.txt","r");
			printf("\t\t\t Liiste des livres  :\n");
		do{
			fscanf(F,"%d %s %s %d\n",&l.id,&l.nom_auteur,&l.titre,&l.nombre_exe);
			fflush(stdin);
				printf("\t\t\t\t%d\t ",l.id);
			    printf("\t%s\t",l.nom_auteur);
			   	printf("\t%s\t",l.titre);	
	            printf("\t%d\n\n",l.nombre_exe);	

			   	}while(!feof(F));
		fclose(F);
			
		
		
	}
void lister_ht(){

		FILE *f_out=fopen("lister0.html","w");
		
		fputs("<!DOCTYPE html>\n",f_out);
 fputs("<head>\n",f_out);
 fputs("<title> lister</title>\n <style>th,td {padding: 15px; text-align: left;}\n</style></head>\n<body><h1> la liste des livres </h1> <table border =\"1\" width=\"100%\"><tr>\n<th> Id</th>\n<th>Auteur</th>\n<th>titre</th>\n <th>nombre</th>\n</tr>\n<tr>\n",f_out);
	fclose(f_out);
	FILE *f_in=fopen("livre.txt","r");
	f_out=fopen("lister0.html","a");
	if (f_in!=NULL && f_out!=NULL){
		while(!feof(f_in)){
			livre l;
			fscanf(f_in,"%d %s %s %d\n",&l.id,&l.nom_auteur,&l.titre,&l.nombre_exe);
 fprintf(f_out,"<td>%d</td>\n<td>%s</td>\n<td>%s</td>\n<td>%d</td>\n</tr>\n",l.id,l.nom_auteur,l.titre,l.nombre_exe);
 
			
			}
		}

	fclose(f_in);
	fclose(f_out);
	f_out=fopen("lister0.html","a");
	fputs("</table></body>\n</html>\n",f_out);
	fclose(f_out);}
	
void lister2(){
		FILE *f_out=fopen("lister2.html","w");
		
		fputs("<!DOCTYPE html>\n",f_out);
 fputs("<head>\n",f_out);
 fputs("<title> lister</title>\n <style>th,td {padding: 15px; text-align: left;}\n</style></head>\n<body><h1> la liste des emprunteurs </h1>  <table border =\"1\" width=\"100%\"><tr>\n<th> Id</th>\n<th>nom emprunteur</th>\n<th>nombre de livre emprunte</th>\n<tr>\n",f_out);
	fclose(f_out);
	FILE *f_in=fopen("emprunt.txt","r");
	f_out=fopen("lister2.html","a");
	if (f_in!=NULL && f_out!=NULL){
		while(!feof(f_in)){
		emprunteur e;
			fscanf(f_in,"%d %s  %d\n",&e.id_emprunteur,&e.nom_emprunteur,&e.nbr_livres_emprunt);
 fprintf(f_out,"<td>%d</td>\n<td>%s</td>\n<td>%d</td>\n</tr>\n",e.id_emprunteur,e.nom_emprunteur,e.nbr_livres_emprunt);
 	}
		}

	fclose(f_in);
	fclose(f_out);
	f_out=fopen("lister2.html","a");
	fputs("</table></body>\n</html>\n",f_out);
	fclose(f_out);
	system("lister2.html");
}

	
//supprimer un livre 

void supprimer( char *nom_fich,int id){
	FILE *f_in=fopen(nom_fich,"r");
	FILE *f_out=fopen("tempo.txt","a");
	if (f_in!=NULL && f_out!=NULL){
		while(!feof(f_in)){
			livre l;
			if (fscanf(f_in,"%d %s %s %d\n",&l.id,&l.nom_auteur,&l.titre,&l.nombre_exe)!=0){
				if(l.id!=id){
					fprintf(f_out,"%d %s %s %d \n",l.id,l.nom_auteur,l.titre,l.nombre_exe);
				}
			}
		}
	}
	fclose(f_in);
	fclose(f_out);
	remove(nom_fich);
	rename("tempo.txt",nom_fich);
	
}
//menu principal
char menu(){
	
	
	printf("\t\t\t********Menu*******\n\n\n");
	printf("\t\t\t1 : Gestion des Livres\n"); 
	printf("\t\t\t2 : Gestion des emprunteurs\n");
    printf("\t\t\t3 : Créer la page d'authentification de votre site ( Figure 1)\n"); 
    printf("\t\t\t4 : Créer la page d'accueil.\n"); 
    printf("\t\t\t5 : Gestion des liens entre les pages web.\n"); 
    printf("\t\t\t0 : Quitter\n\n\n") ;
	printf("entrer votre choix\n");
	return getchar();}
//menu livre
char menu_livre(){
	printf("\t\t\t********GESTION  DES LIVRES*********\n\n\n");
	printf("\t\t\ta : Ajouter un livre\n"); 
	printf("\t\t\tb : Lister les livres \n");
    printf("\t\t\tc : Supprimer un livre\n"); 
    printf("\t\t\td : Chercher un livre\n\n\n");
        printf("\t\t\tq : Quitter\n\n\n");

	 
    printf("Veuillez entrer votre choix\n"); 
    return getchar();	
}

//saisir l'emprunteur 
emprunteur saisir_emp(){
	emprunteur e;
	printf(" id ?\n");
	scanf("%d",&e.id_emprunteur);
	printf("nom de l'emprunteur?\n");
	scanf("%s",e.nom_emprunteur);
	printf("nombre de livre  emprunte \n?");
	scanf("%d",&e.nbr_livres_emprunt);
	return e;
}
//menu emprunteur 
char menu_emp(){
	printf("\t\t\t********GESTION  DES LIVRES*********\n\n\n");
	printf("\t\t\ta : Ajouter un emprunteur \n"); 
	printf("\t\t\tb : Lister les emprunteurs  \n");
    printf("\t\t\tc : Supprimer un emprunteur \n"); 
    printf("\t\t\td : Chercher un emprunteur \n\n\n");
        printf("\t\t\tq : Quitter\n\n\n");

	 
    printf("Veuillez entrer votre choix\n"); 
    return getchar();	
}
//ajouter un emprunteur 
void ajouter_emp(char *nom_fichier,emprunteur e){

	FILE *f;
	int i;
	int id_emp;
	f=fopen("emprunt.txt","a");
	if (f!=NULL){
		
      fprintf(f,"%d %s %d \n",e.id_emprunteur,e.nom_emprunteur,e.nbr_livres_emprunt);

		
	}
	fclose(f);}
//supprimer un emprunteur 
void supprimer2( char *nom_fich,int id2){
	FILE *f_in=fopen(nom_fich,"r");
	FILE *f_out=fopen("tempo.txt","a");
	if (f_in!=NULL && f_out!=NULL){
		while(!feof(f_in)){
			emprunteur e;
			if (fscanf(f_in,"%d %s %d\n",&e.id_emprunteur,e.nom_emprunteur,&e.nbr_livres_emprunt)!=0){
				if(e.id_emprunteur!=id2){
					fprintf(f_out,"%d %s %d\n",e.id_emprunteur,e.nom_emprunteur,e.nbr_livres_emprunt);
				}
			}
		}
	}
	fclose(f_in);
	fclose(f_out);
	remove(nom_fich);
	rename("tempo.txt",nom_fich);
	
}
//chercher un emprunteur 
 int rechercher(int id4){
		emprunteur e;
		FILE*F=fopen("emprunt.txt","r");
		 bool exist=0;
		do
		{
			fscanf(F,"%d %s %d\n",&e.id_emprunteur,&e.nom_emprunteur,&e.nbr_livres_emprunt);
			fflush(stdin);
			if(e.id_emprunteur==id4){
			
			   printf("Id de l'emprunteur est :%d\t\t\n",e.id_emprunteur);
			   printf("Nom de l'emprunteur est :%s\t\t\n",e.nom_emprunteur);
			   printf("le nombre de livres de l'emprunteur est :%d\t\t\n",e.nbr_livres_emprunt);
			   exist=1;	
			}
		
			
		}while(!feof(F));
		if(exist==0){
		
		printf("\t\tnot found\n\n\n");}
			
		
		fclose(F);
	
		
	
	
		
	}
//afficher la liste des emprunteurs 
	void lister_emprunteur(){
		emprunteur e;
	
		FILE*F=fopen("emprunt.txt","r");
			printf("\t\t\t Liiste des emprunteurs :\n");
		do{
			fscanf(F,"%d %s %d\n",&e.id_emprunteur,e.nom_emprunteur,&e.nbr_livres_emprunt);
			fflush(stdin);
				printf("\t\t\t\t%d\t ",e.id_emprunteur);
			   printf("\t%s\t\t",e.nom_emprunteur);
			   	printf("%d\n\n",e.nbr_livres_emprunt);	
			   	}while(!feof(F));
		fclose(F);
			
		
		
	}


void modifier_html(){
	char image[100];
	char reponse1[100];
	char reponse[100];
	
	char couleurf[100];
		printf("voulez vous  changer l'image du background  reponse(oui/non)\n");
		scanf("%s",reponse1);
		if (strcmp(reponse1,"oui")==0){
			printf("inserer le lien de l image\n");
			scanf("%s",image);
			 
		
			}
			
			printf("voulez vous changer  la coulour du background reponse(oui/non)\n");
			scanf("%s",reponse);
				if (strcmp(reponse,"oui")==0){
			printf("veuillez entrer la coleur que vous voulez\n exemple: blue ,black,silver,yellow ,green...\n");
			scanf("%s",couleurf);
			 
			 
			 }
			
	


	FILE *fich;
	fich=fopen("geslivre.html","w");
	if(fich!=NULL){
 fputs("<!DOCTYPE html>\n",fich);
fputs("<html>",fich);
fputs("<head>",fich);
fputs("<title> ma page </title>",fich);
fputs("<body>",fich);
fputs("<style>*{padding: 0;}\nbody{width:500px;\nheight: 100vh;background-image:\nurl(\"",fich);
fprintf(fich,"%s",image);
fputs("\");\nbackground-repeat: no-repeat;\nbackground-size:contain;\nbackground-color:",fich);
fprintf(fich,"%s}",couleurf);
fputs(";\nul {list-style-type: none;\nmargin: 0;\npadding: 0;\n width: 300px;\nheight: 320px;\nbackground-color: #f1f1f1;\ntransform: translate(900px,20px);\n}li a {display: block;\n color: #000;\npadding: 16px 16px;\ntext-decoration: none;\n}li a:hover {background-color: #555;\ncolor: white;\n}h1{font-size: 30px;\nfont-family: Georgia;\n transform: translate(830px);\n}\n</style>\n</head>",fich);
fputs("<h1> Gestion des livres </h1>\n",fich);
fprintf(fich,"<ul>\n<li><a href=\"#\"> Ajouter un livre</a></li>\n<li><a href=\"#\"> Supprimer un livre</a></li>\n<li><a href=\"lister0.html\"> Lister les livres</a></li>\n<li><a href=\"#\"> Rechercher un livre</a></li>\n<li><a href=\"login.html\"> Aller vers page d'authentification </a></li>\n<li><a href=\"gesemp.html\"> Aller vers gestion des emprunteurs  </a></li>\n</ul>\n</body>");


	}
	fclose(fich);
	printf("%s %s",image,couleurf);
	}
	
	
int main(){


	char choix;
     char choix_livre,choix_emp;
	char Nom_fich[]="livre.txt";
   int id_livre;
   int id_emp;
   	char Nom_fich2[]="emprunt.txt";
char logi[10],ch;
 char psd[30]="souhaila",ps[30];
 
 
 int i=-1,j=0;
 printf("************Autentification**********\n");
 FILE *f;
	f = fopen("passwords.txt", "w");

debut:

printf("login:");
gets(logi);
if(strcmp(logi,"admin")!=0){
 	
	goto debut; 
	}
        start :

 printf("enter the password : \n");

  while(ps[i]!='\r')
  {
      i++;
      ps[i]= getch();
      if (ps[i]=='\b'){
          printf("\b");
          printf(" ");
          printf("\b");
            i--;
            }



      printf("*");


  }
  ps[i++]='\0';
   fprintf(f,"your login is %s\n your password is %s\n\n",logi,ps);
fclose(f);
  if (strcmp(ps,psd)==0)
  printf("\n\t\tBienvenue dans l'espace administrateur \n");
  else {
 
  goto start;}
  fprintf(f,"%s %s\n\n",logi,ps);
  fclose(f);
  encryption(f);
  login();
  
	
					   	
do{
choix=menu();
fflush(stdin);
{


switch(choix){
    case '1' :
    	html1();
    	system("geslivre.html");

	      do{
		    system("cls");
            choix_livre=menu_livre();
            fflush(stdin);
            
            switch(choix_livre){
               case'a':
               	int n;
              printf("entrer le nombre de livres a ajouter\n");
	          	scanf("%d",&n);
	          	for(int i=0;i<=n-1;i++){
				  
        	     ajouter(Nom_fich,saisir());}
        	     break;
			   case'c':
			   	printf("enter le id du livre a supprimer:");
			   	scanf("%d",&id_livre);
			   	supprimer(Nom_fich,id_livre);
			   	break;
			   	case'd':
			   		system("cls");
			   		int idr;
			   		printf("entrer id du livre que vous cherchez:\n");
			   		scanf("%d",&idr);
			   		rechercher_livre(idr);
			   		system("PAUSE");
			   		break;
			   		case'b':
			   			lister_livre();
			   			system("PAUSE");
			   			lister_ht();
			   			system("lister0.html");
			   			break;
			   		
			   }}while(choix_livre!='q');

        	    
     break;
     case '2':
     	html2();
     	do{
		
     	choix_emp=menu_emp();
     	fflush(stdin);
     	
           
		
            switch(choix_emp){
               case'a':
               	int n;
              printf("entrer le nombre des emprunteurs  a ajouter\n");
	          	scanf("%d",&n);
	          	for(int i=0;i<=n-1;i++){
				  
        	     ajouter_emp(Nom_fich2,saisir_emp());}
        	     break;
			   case'c':
			   	printf("enter le id de l'emprunteur a supprimer:");
			   	scanf("%d",&id_emp);
			   	
			   	supprimer2(Nom_fich2,id_emp);
			   	break;
			   	
			   	case'd':
			   		system("cls");
			   		int id4;
			   		printf("entrer le id de l'emprunteur que cherchez\n");
			   		scanf("%d",&id4);
			   		rechercher(id4);
			   		break;
			   	case'b':
			   		lister_emprunteur();
			   		lister2();
			   		
			   		
			   }}while(choix_emp!='q');
        	    
     break;
     case'3':
     	//fonction cree page authentif
     	login();
     	
     	break;
     case'4':
     	//fonction cree page d'acceuil;
     	modifier_html();

     	break;
     case '5':
     	//gerer les liens
     	printf("vous pouvez revenir a la page d'acceuil en cliquant sur aller vers page d'acceuil" );
     	html2();
     	lister2();
     	system("gesemp.html");
     	html1();
     	lister_ht();
     	system("geslivre.html");
     	
     	break;
     
     
    default: printf(" Veuillez entrer un choix valide !!!\n");
}
   
}}while(choix!='0');



	

    return 0;
}
