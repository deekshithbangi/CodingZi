#include <stdio.h>

int main(void) {
    int *arr,n;
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",(arr+i));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            if(*(arr+i)<*(arr+j)){
                int temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    printf("%d",*(arr+1));
	return 0;
}
