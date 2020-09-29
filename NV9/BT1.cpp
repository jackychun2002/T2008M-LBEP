#include<stdio.h>
#include<string.h>

int main(){
	char s[20];
	printf("Nhap vao chuoi:");
	scanf("%s",s);
	int i=0;
	int v=0; 	//bien am
	int c=0;	//bien phu am
	
	while(s[i++] != '\0'){ 	//khi chuoi khac\0 ->true
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i]== 'u')
			v++;
		else
			c++;
	}
	printf("chuoi '%s' co chua:%d nguyen am va %d phu am",s,v,c);
}
