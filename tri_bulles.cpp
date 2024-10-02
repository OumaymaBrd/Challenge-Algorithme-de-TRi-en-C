#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Tri a bulles : Tri croissante\n\n");
	
	int T[11]={8,9,12,1,3,2,5,4,0,10,11};
	
	//Avant le TRi 
	int n=11;
	printf("Tableau Avant le Tri: ");
	for(int i=0;i<n;i++) printf("%d | ",T[i]);
	
	//Tri : algorithme de trie
	int tmp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(T[j]>T[j+1]){
				tmp=T[j];
				T[j]=T[j+1];
				T[j+1]=tmp;
			}
		}
	}
	
	//affichage apres Tri 
	printf("\n\nTableau Apres le Tri: ");  for(int i=0;i<n;i++) printf("%d | ",T[i]);
}
