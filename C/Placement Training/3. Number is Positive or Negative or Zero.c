#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    if (a>=0){
        if (a==0) printf("zero");
        else printf("+ve number");
    }
    else printf("-ve number");
    return 0;
}

#include <stdio.h>

int main(void) {
	int a;
    scanf("%d",&a);
	printf(a>=0?a==0?"zero":"+ve":"-ve");
	return 0;
}

