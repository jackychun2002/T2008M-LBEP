#include <stdio.h>
int main() {
	int s0 = 0;int s1 = 1;
	int s;
    printf(" Day so fibonaci tu 1=>100 la : \n");
    for ( int i = 0 ; i < 100 ; i++ ){
        if ( i <= 1 ){
           s = i;
        }else{
        	s = s0 + s1;
        	s0 = s1;
        	s1 = s;
        	if(s > 100){
            	break;
        	}
      	}
      		printf("%d  ",s);
	}
}

