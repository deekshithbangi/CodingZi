#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	printf("%d",a==1?31:a==2?28:a==3?31:a==4?30:a==5?31:a==6?30:a==7?31:a==8?31:a==9?30:a==10?31:a==11?30:a==12?31:-1);
	return 0;
}

