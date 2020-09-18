#include<stdio.h>

int main(){
	int n;
	float s=0,i=1;
	do{
		printf("nhap n >0:");
		scanf("%d",&n);
		
	}while(n<=0);
	
	for(;i<=n;i++){
		s+=1/i;
	}
	printf("s = %f ",s);
}
