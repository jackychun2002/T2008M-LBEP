#include<stdio.h>

int main(){
	int a,n;
	
	printf("nhap he so n:");
	scanf("%d",&n);
	
	int t[n];
	for(int i=0;i<=n ;i++ ){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&t[i]);
	}
	int le,S=0;
	float C;
	for(int i=0;i<=n;i++){
		if(t[i]%2 !=0){
			le=t[i];
			S=S+le;
			C=S/2;
			printf("So le la %d \n",le);
		}
	}
	printf("Tong cac so le la : %d \n",S);
	printf("Trung bnh cong cac so le la : %.f",C);
}
