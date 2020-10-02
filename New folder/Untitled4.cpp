#include<stdio.h>
#include<math.h>

int main(){
	float s,l;
	int n;
	printf("Hay nhap khoan von:");
	scanf("%f",&s);
	printf("Hay nhap lai xuat:");
	scanf("%f",&l);
	printf("Nhap so nam can gui:");
	scanf("%d",&n);
		printf("\t BANG LAI THEO NAM ");
		if( s>0 && l>0 && n>0){
		for(int i=1;i<n;i++){
		 	float tong=(s*l)/100;
		 	s+= tong;
		 	printf("\n Nam :%d \t Von:\t%.3f \t Tong:\t%.3f",i,tong,s);
		}
	}
}
