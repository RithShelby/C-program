#include<stdio.h>
#include<conio.h>
int main(){
    int a[10][10],b[10][10];
    int i,j,row,col,s[10][10];
    printf("Input Row : ");scanf("%d",&row);
    printf("Input Colum : ");scanf("%d",&col);
    puts("Matrix A");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("A[%d][%d] : ",i+1,j+1);scanf("%d",&a[i][j]);
        }
    }
    puts("matrix B ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("B[%d][%d] : ",i+1,j+1);scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            s[i][j] = a[i][j] + b[i][j];
        }
    }
    puts("Result Matrix");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%4d ",s[i][j]);
        }
        puts("");
    }
}