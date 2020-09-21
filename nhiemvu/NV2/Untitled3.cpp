#include<stdio.h>

int main(){
	int a,b;
	
	do{
		printf("nhap he so a:");
		scanf("%d",&a);
		printf("nhap he so b:");
		scanf("%d",&b);
	}while(a<=0 || b<=0);
	
	while(a!=b){
		if(a>b)
			a=a-b;
		else
		b=b-a;
}
		printf("\n Uoc chung lon nhat la %d",a);
}
