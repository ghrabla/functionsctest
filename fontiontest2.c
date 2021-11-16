#include <stdio.h>
 int nume,T[100],max,i,j;
void lire(){
	
    printf("____________MEIN KAMPF____________ \n");
	printf("donner le nombre des elements: ");
	scanf("%d",&nume);
//scan element 
    for ( i=0;i<nume;i++){
    	scanf("%d",&T[i]);
   }	
}
void selection(){
		

//premier case	
	for ( i=0;i<nume;i++){
//		comparer avec le premier case
		for ( j=i+1;j<nume;j++){
			if (T[i]<T[j]){
//				permutation
 			max = T[i];
			T[i] = T[j];
			T[j] = max;
			}
		}
	}

}
void ecrire(){
    printf("resultat est: \n");
	for (i=0;i<nume;i++){
	printf("%d\n",T[i]);
	}
}

int main(){
  lire();
  selection();
  ecrire();
  return 0;
}





