#include<stdio.h>
int main(){
    int i,j,k;
    int a[2][2][3] = {
        {{100,200,300},{10,20,30}},
        {{1,2,3},{1000,2000,3000}}
    };//[block][row][colum]
    for(k=0;k<2;k++){
        for(j=0;j<2;j++){
            for(i=0;i<3;i++){
                printf("%d\t",a[k][j][i]);
            }
            puts("");
        }
        puts("");
    }
    
}