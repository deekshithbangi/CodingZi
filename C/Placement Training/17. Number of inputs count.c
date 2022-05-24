#include <stdio.h>

int main(void) {
	int count=0,a;
    while(EOF!=scanf("%d",&a)) count++; //while(scanf("%d",&n)==1)
	printf("%d",count);
	return 0;
}
