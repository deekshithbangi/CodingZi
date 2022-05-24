#include <stdio.h>

int main(void) {
	int a,b,c,check1,check2;
	
	 scanf("%d %d %d",&a,&b,&c);
	 check1=((a>b)&&(a>c)?a:b&c);
         check2=((b>c)&&(b>a)?b:c);
         printf("%d",check1>check2?check1:check2);
	return 0;
}

or simply      printf("%d",a>b && a>c ? a : b>a && b>c ? b:c);
