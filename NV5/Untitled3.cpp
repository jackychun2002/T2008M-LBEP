#include<stdio.h>

int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int ary[n];
	
	for(int i=0;i<=n;i++){
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&ary[i]);
	}
	int x,i;
	printf("nhap so can tim kiem:");
	scanf("%d",&x);
	bool c = false;
		for(;i<n;i++){
			if(x = ary[i]){
				printf("%d nam trong mang",x);
				c = true;
				break;
			}
		}
		if(!c){
			printf("khong co x trong mang");
		}
}
