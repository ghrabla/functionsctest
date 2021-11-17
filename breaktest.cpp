#include <stdio.h>
void negative(){
	  int i,t[30],n=0;
  for(i=0;i<30;i++){
  	printf("entrer le nombre : ");
  	scanf("%d",&t[i]);
  	if(t[i]<0){
  		break;
	  }n++;
	  
  }
  printf("resultat est: ");
  for (i=0;i<n;i++){
  	printf("%d ",t[i]);
  }
}
int main(){

  negative();
  return 0;
}
