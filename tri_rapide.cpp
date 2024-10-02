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
}
