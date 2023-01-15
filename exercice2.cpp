#include<stdio.h>
int main()
{
	printf("start.\n");
	int i,n,j,aux,c1,c2;
	printf("veuillez donner la taille du tableau \n");
	scanf("%d",&n);
	int t[n];
	for( i=0;i<n;i++)//remplissage du tableau 
		{ 
		  printf("veuillez saisir le contenu de lelement %d \n",i+1);
		  scanf("%d",&t[i]); 
		}
	printf("Le tableau non trie\n");
	for( i=0;i<n;i++)//affichage  du tableau 
		{ 
		  printf(" t[%d]:%d\n",i+1,t[i]); 
		}
	i=0;
	c1=0;
	c2=0;
	int c3=0;
	while(i<n-1){
		j=n-1;
		while(j>i){
			if (t[j]<t[j-1])
			{
				aux=t[j];
				t[j]=t[j-1];
				t[j-1]=aux;
			}
		    j=j-1;
			c2++;
			c3++;
		}
		c3++;//pour chaque i ca depasse
		i=i+1;
		c1++;
	}
	printf("le tableau trie \n");
	for( i=0;i<n;i++)//affichage  du tableau 
		{ 
		  printf(" t[%d]:%d\n",i+1,t[i]); 
		}
	printf("end\n");
	printf("le nombre diteration est :%d",c2+c1+1+c3);
return 0;	
}

