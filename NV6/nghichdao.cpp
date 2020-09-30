#include<stdio.h>

int T(int n){
	int s=0;
	for(;n!=0;n/=10){
	s = s*10 + n%10;
	}
	return s;
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	printf("so nghich dao la : %d",T(n));
}
