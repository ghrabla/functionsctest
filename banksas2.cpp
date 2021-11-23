#include<stdio.h>
#include<windows.h>
  int choice,nume,i,j;
  float num[25],add,max,numa;
  char name[25][50],cin[25][50],s[25];
  void affichage(){
  	for(i=0; i<nume; i++){                            //printing all users to choose which one to log in as
        printf("\t%d--nom:  %s",i+1, name[i]);
        printf("\t%d--CIN:  %s",i+1, cin[i]);
        printf("\t%d--montant:  %f\n",i+1, num[i]);
    }
  }
  void search(){
 		    printf("Donner cin de client: ");
	        scanf("%s", &s);
   //La recherche initailiser par zero
   i = 0;
   while (i < nume && strcmp(s,cin[i])!=0) {
      i++;
   }
 
   if (strcmp(s,cin[i])==0) {
      printf("L'element se trouve dans la position = %d", i + 1);
   } 
   else {
      printf("Element non trouve");
   }
 }
 void selection(){
		

//premier case	
	for ( i=0;i<nume;i++){
//		comparer avec le premier case
		for ( j=i+1;j<nume;j++){
			if (num[i]<num[j]){
//				permutation
 			max = num[i];
			num[i] = num[j];
			num[j] = max;
			}
		}
	}

}
void selection2(){
		

//premier case	
	for ( i=0;i<nume;i++){
//		comparer avec le premier case
		for ( j=i+1;j<nume;j++){
			if (num[i]>num[j]){
//				permutation
 			max = num[i];
			num[i] = num[j];
			num[j] = max;
			}
		}
	}

}
void selection3(){
		
            printf("donner le montant: ");
			scanf("%f",&numa);
            for(int i = 0;i<nume;i++){
            if(num[i]>=numa ){
            printf("\t%d--nom:  %s",i+1, name[i]);
            printf("\t%d--CIN:  %s",i+1, cin[i]);
            printf("\t%d--montant:  %f\n",i+1, num[i]);	
             }
}
   }
   void selection4(){
		
            printf("donner le montant: ");
			scanf("%f",&numa);
            for(int i = 0;i<nume;i++){
            if(num[i]<=numa ){
            printf("\t%d--nom:  %s",i+1, name[i]);
            printf("\t%d--CIN:  %s",i+1, cin[i]);
            printf("\t%d--montant:  %f\n",i+1, num[i]);	
   }
}
}
 void menu(void)
{  
    system("cls");
    system("color 3");
    
    menu:
    
    printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BIENVENUE AU MENU PRINCIPAL \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Creer un compte\n\t\t2.creer plusieurs comptes\n\t\t3.autre operation \n\t\t4.affichage des comptes\n\t\t5.recherche par cin \n\t\t6.Fidelisation\n\t\t7.Quitter application\n\n\n\n\n\t\t Donner votre choix:");
    scanf("%d",&choice);
    if(choice==1){
    	printf("Donner votre nom: ");
    	scanf("%s",&name[i]);
    	printf("Donner votre cin: ");
    	scanf("%s",&cin[i]);
    	printf("Donner votre montant:  ");
    	scanf("%f",&num[i]);
    	printf("\t--nom:  %s",name[i]);
        printf("\t--CIN:  %s",cin[i]);
        printf("\t--montant:  %f\n",num[i]);
    	printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Compte cree \xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");
    	goto menu;
	}
	else if(choice==2){
        printf("combien de compte tu veux faire : ");
    	scanf("%d",&nume);
//scan element 
    for ( i=0;i<nume;i++){
    	printf("\nDonner client %d nom : ",i+1);
    	scanf("%s",&name[i]);
    	printf("\nDonner client %d CIN : ",i+1);
    	scanf("%s",&cin[i]);
    	printf("\nDonner client %d montant: ",i+1);
    	scanf("%f",&num[i]);
    	}
    	affichage();  
    
    goto menu;
	}
	else if(choice==3){
		search();
		printf("\n1.Retrait \n2.Depot \nDonner votre choix:");
		scanf("%d",&choice);
		if (choice==1){
			printf("donner montant tu veux retrait: ");
			scanf("%f",&add);
			if(num[i]>add){
		        printf("%f est votre solde maitenant",num[i]=num[i]-add);
			}
			else{
				printf("montant tu veux retrait est Plus grand par votre solde");
			}
		    } 
		else if (choice==2){
			printf("donner montant tu veux depot: ");
			scanf("%f",&add);
		    printf("%f est votre solde maitenant",num[i]=num[i]+add);
		}
		
		goto menu;
	}
	    

	
	else if(choice==4){
	    affichage();
	    printf("1.Par Ordre Ascendant \n2.Par Ordre Descendant \n3.le plus grand par votre montant \n4.le plus petit par votre montant \nDonner votre choix:");
	    scanf("%d",&choice);
	    if(choice==1){
	    	selection();
	    	affichage();
		}
		else if(choice==2){
			selection2();
	    	affichage();
		}
		else if(choice==3){
			selection3();

		}
		else if (choice==4){
			selection4();
		}
	}
	else if(choice==5){
     search();
	}
	else if(choice==7){

	}
}
int main(){
    
   menu();

    return 0;
}
