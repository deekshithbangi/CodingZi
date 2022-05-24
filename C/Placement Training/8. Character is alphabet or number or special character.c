#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	printf(ch>=97 && ch<=122 || ch>=65 && ch<=90 ? "Alphabet": ch>='0' && ch<='9' ? "Number": "Special charter");
	return 0;
}

#include <stdio.h>

int main(void) {
	char ch='%';
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') printf("Alphabet");
	else if (ch>='0' && ch<='9') printf("Digit");
	else printf("Special character");
	return 0;
} 
