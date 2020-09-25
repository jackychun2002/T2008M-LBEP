#include<stdio.h>

int main(){
	int t[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("t[%d][%d] =",i,j);
			scanf("%d",&t[i][j]);
		}
	}
	printf("\n Ma tran A :\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%4d",t[i][j]);
		}printf("\n");
	}
}
