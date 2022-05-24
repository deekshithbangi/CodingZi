#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",a-(-b));
	return 0;
}

#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	while(b>0) {
	    a++;
	    b--;
	}
	printf("%d",a);
	return 0;
}
