#include <stdio.h>

int main(void) {
	char ch;
	scanf("%d",&ch);
	if(ch>='a' && ch<='z') printf("lower case");
	else printf("Uppercase");
	return 0;
}
