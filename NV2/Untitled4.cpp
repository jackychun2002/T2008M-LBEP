#include<stdio.h>

int main(){
	int n,t=0;
	printf("nhap he so n:");
	scanf("%d",&n);
	
	for(int i = 1; i<=n ; i++){
		for(int j=1 ;j<=i;j++){
			if(i%j == 0)
			t++;
		}
		if(t == 2)
		printf(" \t %d",i);
		t=0;
	}
}
