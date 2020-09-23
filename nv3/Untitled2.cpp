#include<stdio.h>

int main(){
	int n;
	printf("Hay nhap n:");
	scanf("%d",&n);
	
	
	int t[n],a;
	for(int i=0;i<=n;i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&t[i]);
	}
	for(int i=0;i<n;i++){
		if(t[i]>0){
			a=t[i];
		}
	}
	for(int i=0;i<=n;i++){
		if(t[i]>0 && t[i]<a){
			a=t[i];
		}
	}
	printf(" \n So duong nho nhat :%d",a);
}
