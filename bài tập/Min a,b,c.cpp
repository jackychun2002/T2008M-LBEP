#include<stdio.h>

int main(){
 	int a,b,c;
 	printf("nhap a =");
 	scanf("%d",&a);
 	
 	printf("nhap b = ");
 	scanf("%d",&b);
 	
	printf("nhap c = ");
	scanf("%d",&c);
	
	if(a<b){
		if(b<c){
			printf("min: %d",a);
			}else{
				printf("min: %d",c);
			}	
			
		}else{
			if(b<c){
				printf("min: %d",b);
			}else{
				printf("min: %d",c);
				
			}
			}
		}	
			

