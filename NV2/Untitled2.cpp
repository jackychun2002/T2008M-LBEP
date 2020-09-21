#include<stdio.h>

int main(){
	int n,s=0;
	printf("nhap he so n :");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i ==0){
			printf("%4d",i);
			s=s+i;
		}
	}
	printf("\n tong cac uoc cua %d la : %ld ",n,s);
}
