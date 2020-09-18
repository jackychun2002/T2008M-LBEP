#include<stdio.h>

int main(){
	int n=0,s=0;
	
	for(;n<200;n++){
		if(n%2 != 0){
			s+= n;
		}
	}printf("tong cua 100 so le dau tien >0 la : %d",s);
}
