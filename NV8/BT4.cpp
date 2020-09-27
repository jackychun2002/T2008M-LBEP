#include<stdio.h>
#include<math.h>

float S(int a,int b,int c,float P,float C){
	float d=(a+b+c)/2;
	float e= sqrt((d-a)*(d-b)*(d-c));
	return d,e;
}

int main(){
	int a,b,c,P,C;
	printf("Nhap canh a:");
	scanf("%d",&a);
	printf("Nhap canh b:");
	scanf("%d",&b);
	printf("Nhap canh c:");
	scanf("%d",&c);
	printf("Dien tich cua tam giac la : %.2f",S(a,b,c,P,C));
}
