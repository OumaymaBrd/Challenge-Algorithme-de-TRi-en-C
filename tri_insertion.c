#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Tri Par insertion : Tri croissante\n\n");
	
	int T[11]={8,9,12,1,3,2,5,4,0,10,11};
	
	//Avant le TRi 
	int n=11;
	printf("Tableau Avant le Tri: ");
	for(int i=0;i<n;i++) printf("%d | ",T[i]);
	
	//Tri : algorithme de tri par insertion
	
	for(int i=1;i<n;i++){
		
		int tmp=T[i];
		int j=i-1;
		while(T[j]>tmp && j>=0){
			T[j+1]=T[j];
			j--;
		}
		T[j+1]=tmp;
	}
	
	//affichage apres Tri 
	printf("\n\nTableau Apres le Tri: ");  for(int i=0;i<n;i++) printf("%d | \n",T[i]);
	int E;
	printf("Donner moi un nombre rechercher: "); scanf("%d",&E);
	
	//Methode dichotomique
	
	int debut=0, fin=n-1,arret=0,post=-1,Milieu;
	
	while(debut<fin && arrer=0){
		
		Milieu=(debut+fin)/2;
		if(E==T[Milieu]){
			post=Milieu;
			arret=1;
		}else{
			if(E>T[Milieu]) debut=Milieu+1;
			if(E<T[Milieu]) fin=Milieu-1;
		}
		if(arret==1) printf("%d Trouver dans la position %d\n",E,post);
		else printf("Rien n'existe");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
