#include<stdio.h>
#include<stdlib.h>
#include<math.h>	//fonction remplissage
int* remplissage_tableau(int n){
	int *t;
	t=(int*)malloc(n*sizeof(int*));
	for(int i=0;i<=n-1;i++){
		printf("veuillez saisir l'element %d \n",i+1);
		scanf("%d",(t+i));
	}
	return t;
}
 //fonction remplissage random 
int* remplissage_random(int n){
	int *t;
	t=(int*)malloc(n*sizeof(int*));
	for(int i=0;i<=n-1;i++){
	*(t+i)=rand();
	}
	return t;
}
//procédure affichage
void affichage(int* t,int n){
	for(int i=0;i<n;i++){
		printf("%d \n",*(t+i));
	}
}
//fonction recherche dicho
int dicho(int* t,int c,int n){
	int i;
	int d=0;
	int f=n-1;
	int trouve=0;
	while(trouve==0){
		i=floor((d+f)/2);
		if(*(t+i)==c){
			trouve=1;
		}
		else if (*(t+i)<c){
			d=i+1;
		}
		else{
			f=i-1;
		}	
	}
    return i;
}
//fonction main
int main(){
  int *r;
  r=remplissage_tableau(10);
  affichage(r,10);
  printf("la position de  la clé est %d",dicho(r,30,10)+1);
  
  /*int *b;
  b=remplissage_random(3);
  affichage(b,3);*/
  
}
	

