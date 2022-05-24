#include <stdio.h>
#include<math.h>

int main(void) {
    int n,digit,i,sum=0;
    scanf("%d",&n);

    while(n!=0){
       digit=n%10;
       if(digit==1)
           sum=sum+pow(2,i);
        n/=10;
        i++;
    }
    printf("%d",sum);

	return 0;
}
