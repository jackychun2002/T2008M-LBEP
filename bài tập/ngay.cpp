#include <stdio.h>
#include <math.h>

int main(){
	int n;
	
	printf("nhap mot so bat ki :");
	scanf("%d",&n);
	
	if(n>=2){
		if(n<=7){
			printf(" day la thu :%d",n);
		}else{
			if(n==8){
				printf("day la chu nhat");
		 	}else{
			printf("day khong phai cac ngay trong tuan");
			}
		}
	}else{
		printf("day khong phai cac ngay trong tuan");
	}
}
