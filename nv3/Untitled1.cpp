#include<stdio.h>

int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	
	int t[n],le;
	for(int i=0;i<=n;i++){
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&t[i]);
	}
	printf("Gia tri le cuoi cung :");
	
	for(int i=0;i<=n;i++){
		if(t[i]%2 !=0){
			le=t[i];
		}
	}
	printf("%d",le);
}
