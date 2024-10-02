#include<stdio.h>
#include<stdlib.h>

void permuter(int *a,int *b){ //fonction de permutation
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

void trirapide(int T[],int debut,int fin){
	
	int pivot,i,j;
	if(debut<fin){
		pivot=debut;
		i=debut;
		j=fin;
		while(i<j) {
			while(T[j]<=T[pivot] && i<fin)
			i++;
			while(T[j]>T[pivot]) j--;
			if(i<j) permuter(&T[i],&T[j]);
		}
		permuter(&T[pivot],&T[j]);
		trirapide(T,j+1,fin);
	}
}
int main(){
	printf("\t\t Tri Rapide : Tri croissante\n\n");
	
	int T[11]={8,9,12,1,3,2,5,4,0,10,11};
	
	//Avant le TRi 
	int n=11;
	printf("Tableau Avant le Tri: ");
	for(int i=0;i<n;i++) printf("%d | ",T[i]);
	
	//Tri : algorithme de tri rapide
	trirapide(T,0,n-1);
	
	
	//affichage apres Tri 
	printf("\n\nTableau Apres le Tri: ");  for(int i=0;i<n;i++) printf("%d | ",T[i]);
	
	
	//recherche binaire
	int debut=0, fin=n-1,arret=0,post=-1,Milieu;
		int E;
	printf("Donner moi un nombre rechercher: "); scanf("%d",&E);
	while(debut<fin && arret==0){
		
		Milieu=(debut+fin)/2;
		if(E==T[Milieu]){
			post=Milieu;
			arret=1;
		}else{
			if(E>T[Milieu]) debut=Milieu+1;
			if(E<T[Milieu]) fin=Milieu-1;
		}
	}
	if(arret==1) printf("%d Trouver dans la position %d\n",E,post);
	else printf("Ce nombre n'existe pas");
	
	
	
	
	
	
	
	
}
