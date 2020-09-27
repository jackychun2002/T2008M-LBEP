#include<stdio.h>

int t(int n,int s=0){
	if(n<2)
		return false;
	for(int i=2;i<=(n-1);i++){
		if(n%i ==0){
			return false;
		}
		return true;
	}
}
void C(int n){
	int i=n+1;
	while(t(i)==false){
		i++;
	}
	printf("%d",i);
}
int main(){
	int n;
	do{
		printf("nhap n :");
		scanf("%d",&n);
	}while(n<=0);
		printf("So nguyen to lon hon n va gan n nhat: ");
		C(n);
		return 0;
}

