#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	printf(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ? "vowel":"Alphabet");
	return 0;
}


