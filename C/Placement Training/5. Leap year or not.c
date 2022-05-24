#include <stdio.h>

int main(void) {
	int a;
	printf((a%4==0 && a%100!=0) | a%400==0 ? "leap":"not leap",scanf("%d",&a));
	return 0;
}
