#include<stdio.h>
#include<math.h>
float chuvi(int a,int b,int c){
	a +b +c;
	return 0;
}

int main(){
	float a,b,c;
	printf("Nhap canh thu nhat:");
	scanf("%f",&a);
	printf("Nhap canh thu hai:");
	scanf("%f",&b);
	printf("Nhap cnah thu ba:");
	scanf("%f",&c);	
	printf("chu vi cua tam giac la :%2.f",chuvi(a,b,c));
}
