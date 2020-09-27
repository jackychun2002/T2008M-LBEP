#include<stdio.h>
#include<math.h>

int U(int a,int b){
	while(a!=b){
		if(a>b)
		a-=b;
	else
		b-=a;
}
	return a;
}

int main(){
	int a,b;
	printf("nhap he so a:");
	scanf("%d",&a);
	printf("nhap he so b:");
	scanf("%d",&b);
	printf("UCLN cua 2 so la :%d",U(a,b));
	}
