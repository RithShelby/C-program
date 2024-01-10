#include <stdio.h>
#include <stdlib.h>
int main(){
	int* ptr;
	int n, i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n",n);
	ptr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        ptr[i] = i+1;
    }
    printf("The Element of Array is ");
    for(i=0;i<n;i++){
    printf("%d,",ptr[i]);
    }
}
