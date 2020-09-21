#include<stdio.h>

int main(){
	int n;
	printf("nhap n :");
	scanf("%d",&n);
	for(int i=1; i<=(n-1);i++){
		if(i%2 == 0){
			printf(" %4d",i); 	
		}
	}
}
