#include<stdio.h>
#include<math.h>

int B(int a,int b){
	if (a==0 || b==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a=-b;
		}else{
			b-=a;
		}
	}
	return b;
}
int main(){
	int a,b;
	printf("Hay nhap he so a:");
	scanf("%d",&a);
	printf("Hay nhap he so b:");
	scanf("%d",&b);
	int I= a*b/ B(a,b);
	printf("BCNN cua 2 so la :%d",a,b,I);
}
