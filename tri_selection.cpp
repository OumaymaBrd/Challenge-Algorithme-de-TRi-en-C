#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Tri Par Selection : Tri croissante\n\n");
	
	int T[11]={8,9,12,1,3,2,5,4,0,10,11};
	
	//Avant le TRi 
	int n=11;
	printf("Tableau Avant le Tri: ");
	for(int i=0;i<n;i++) printf("%d | ",T[i]);
	
	//Tri : algorithme de tri par selection
	
	for(int i = 0; i < n - 1; i++) {
    int min = i;
    for(int j = i + 1; j < n; j++) {
        if(T[j] < T[min]) {
            min = j;
        }
    }
   
    int tmp = T[min];
    T[min] = T[i];
    T[i] = tmp;
}

	
	//affichage apres Tri 
	printf("\n\nTableau Apres le Tri: ");  for(int i=0;i<n;i++) printf("%d | ",T[i]);
}
