#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	
	int sayac=0,alinan,c,rastgele;
	srand(time(NULL));
	printf(" oyun başladı");
	
	for(int c=0;c==0; ){
		if(sayac==0){
			
			rastgele= rand()%100;
			printf("tahmininzi giriniz:");
		scanf("%d",&alinan);	
		}
			
			
		if (alinan==rastgele){
			printf("kazandiniz\nbaska oyun oynamak ister misiniz?(evetse 0 hayirsa herhangi bir sayiya  basin.)");
			scanf("%d",&c);
			sayac=0;
			if(c!=0){
				printf("gule gule:)");
				break;
			}
		}
		    else{
		    	if(rastgele<alinan){
		    		printf("asagiya inin:");
		    		scanf("%d",&alinan);
		    		sayac++;
				}
				    else{
				    	printf("yukariya cikin:");
				    	scanf("%d",&alinan);
				    	sayac++;
					}
				
				
			}
		
		
	}  
	
	return 0;
}
