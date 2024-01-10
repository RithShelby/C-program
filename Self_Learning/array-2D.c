#include<stdio.h>
int main(){
int i,j,n,n1;
char name[4][3][50] = { 
                {"1","Rith","PP"},
                {"2","Nita","PP"},
                {"3","Nha","PP"},
    };
    // [Row][Colum]
    for(i=0;i<4;i++){
        puts(""); 
        for(j=0;j<3;j++){
            printf("%s\t",name[i][j]);
        }
    }

}

