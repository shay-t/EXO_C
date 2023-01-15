#include<stdio.h>
int main(){
printf("start.\n");
int i;
int c,k; //compteur d'iteration
int max;
int n=5;
int t[n];
printf("voici les valeurs du tableau \n");
for(i=0 ; i<n ;i++) //Remplissage et affichage du tableau
{
	 t[i]=rand();
	 printf("t[%d]= %d \n",i+1,t[i]);
}
printf("voici le maximum \n");//recherche du maximimun
max=t[0];
c=0; //initialisation du compteur de 0 +  compter pour la derniere valeur
for(i=1 ; i<n ;i++) //recherche du max
{
	if(t[i]>max)
		{
			max=t[i];
		}
c++;
}
printf("La valeur maximale du tableau est %d \n",max);//affichage du max
printf("Le nombre de comparaison est %d\n",(2*c +1));//affichage du nombre d'itération
printf("finshed.\n");
printf(" la valeur qu'occupe un int (en octet) est %d",sizeof(int));//espace qu'occupe int
}

