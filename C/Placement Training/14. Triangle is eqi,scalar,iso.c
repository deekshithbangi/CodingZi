#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int sum=a+b+c;
	if(sum==180) {
	    if(a==b && a==c) printf("Equilateral");
	    
	    else if(a==b||a==c||b==c)  printf("Isosescle");
	       
	    else printf("Scalar triangle");
	}
	else printf("not a vaild triangle");
	return 0;
}


#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int sum=a+b+c;
	printf(sum==180 ? (a==b && c==a ? "Equilateral" : a==b||a==c||b==c ? "isos" :"scalar") :"Not a valid triangle");
	return 0;
}
