#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,d;
	printf("nhap he so a=");
	scanf("%d",&a);
	printf("nhap he so b=");
	scanf("%d",&b);
	if(a>=b){
		if(b!=0){
			c = a /b;
			printf("ket qua c = a/b %d",c);
		}else{
			printf("khong thuc hien duoc phep tinh");
			}
	}else{
	 	d = a*b ;
	 	printf("ket qua la d = a * b = %d",d);
	}
}

