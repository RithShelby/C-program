#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,row,col;
    printf("Input Row : ");scanf("%d",&row);
    printf("Input Colum : ");scanf("%d",&col);
    //Input
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        printf("A[%d][%d] : ",i+1,j+1);scanf("%d",&a[i][j]);
        }
    }
    //output
    puts("===Matrix===");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%4d",i+1,a[i][j]);  
        }
    puts("");
    }
    
}