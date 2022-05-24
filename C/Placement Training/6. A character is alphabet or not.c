#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	printf(ch>=97 && ch<=122 || ch>=65 && ch<=90 ? "Alphabet":"Not a Alphabet");
	return 0;
}

or simply printf(ch>='a' && ch<='z' || ch>='A' && ch<='Z' ? "Alphabet":"Not a Alphabet",scanf("%c",&ch));
