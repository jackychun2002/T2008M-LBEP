	#include <stdio.h>
int main(){
	int n;
	printf("Nhap n :");
	scanf("%d",&n);
	int ary [n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d : ",i);
		scanf("%d",&ary[i]);
	}
	int count = 0;
	float S = 0;
	for (int i=0; i<n; i=i+2){
		if(ary[i] % 2 != 0 && i%2==0){
			S += ary[i];
			count++;
		}
	}
	if(count > 0)
		printf("\nTrung binh cong các so le o vi tri chan trong mang n so : %0.2f ",S/count);
	else
		printf("khong co so le nao ca");
}
