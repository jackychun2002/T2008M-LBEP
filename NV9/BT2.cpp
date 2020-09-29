#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
	printf("nhap vao chuoi:");
	scanf("%s",str);
	int i,j;
	int n=strlen(str);
	printf("Chuoi truoc khi sap xem la: %s \n",str);
	for(i=0;i<n-1;i++){
		for(j=0;j<n;j++){
			if(str[i]>str[j]){
				int temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("\nChuoi sau khi sap xep la :%s",str);
}
