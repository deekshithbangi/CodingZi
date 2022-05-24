#include <stdio.h>

int main(void) {
	int weekNo;
	scanf("%d",&weekNo);
	switch(weekNo) {
	    case 1: 
	    printf("Sunday");
	    break;
	    
	    case 2: 
	    printf("Monday");
	    break;
	    
	    case 3: 
	    printf("Tuesday");
	    break;
	    
	    case 4: 
	    printf("Wedensday");
	    break;
	    
	    case 5: 
	    printf("Thursday");
	    break;
	    
	    case 6: 
	    printf("friday");
	    break;
	    
	    case 7: 
	    printf("saturday");
	    break;
	    
	    default: 
	    printf("wrong input");
	    break;
	}
	return 0;
}

or simply printf(a==1?"Sunday":a==2?"Monday":a==3?"Tuesday":a==4?"Wedensday"
	:a==5?"Thursday":a==6?"friday":a==7?"saturday":"wrong in input");
