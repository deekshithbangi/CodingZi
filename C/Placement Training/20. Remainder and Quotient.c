#include <stdio.h>

int main(void) {
        int divident,divisor,remander,quoitent;
	    scanf("%d %d",&divident,&divisor);
	    
        remander=divident%divisor;
        quoitent=divident/divisor;
	printf("remainder:%d quoitent: %d",remander,quoitent);
	return 0;
}
