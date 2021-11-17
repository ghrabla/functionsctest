#include <stdio.h>
void search(){
	 int nume, i, s, t[30];
 
   printf(" Entrez le nombre des elements  : ");
   scanf("%d", &nume);
 
   printf(" Entrez les elements du tableau : \n");
   for (i = 0; i < nume; i++) {
   	  printf("entrer l'element %d: ",i+1);
      scanf("%d", &t[i]);
   }
 
   printf(" Entrez l'element a rechercher: ");
   scanf("%d", &s);
 
   //La recherche commence à partir de zéro
   i = 0;
   while (i < nume && s != t[i]) {
      i++;
   }
 
   if (i < nume && s == t[i]) {
      printf("L'element se trouve dans la position = %d", i + 1);
   } else {
      printf("Element non trouve");
   }
 
} 
int main() {
   search();
   return 0;
}
