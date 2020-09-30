#include<stdio.h>

int main(){
	int n,A;
	printf("Nhap he so n:");
	scanf("%d",&n);
	int B =0;
	while(n>0){
		A = n%10;
		B=B*10+A;
		n =n/10;
	}
	printf("So nghich dao la : %d",B);
}
