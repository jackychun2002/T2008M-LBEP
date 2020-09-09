#include <stdio.h>
#include <math.h>

int main(){
	float a ,b ,c ,p ,C ,s=0;
	printf("nhap canh thu nhat :");
	scanf("%f", &a);
	printf("nhap canh thu hai :");
	scanf("%f", &b);
	printf("nhap canh thu ba :");
	scanf("%f", &c);
	if((a*a<= b*b + c*c)&&(b*b <= a*a + c*c)&&(c*c <= a*a + b*b)){
		printf("\n Dung la ba canh cua tam giac");
		p=(a+b+c)/2;
		s= sqrt(p*(p-a)*(p-b)*(p-c));
		C= p*2;
		printf("\n Dien tich cua tam giac la %0.2f",s);
		printf("\n Chu vi cua tma giac la 0%.2f",C);}else	
		printf("\n Day khong phai la ba canh cua tam giac");
}
