#include<stdio.h>
int main(){
    int i,j,rull_num,r,c;
    int id[5][5];
    char name[5][5][30],sex[5][5][10],add[5][5][50];
    printf("Input Row   :  ");scanf("%d",&r);
    printf("Input Colum :  ");scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("----------------Person%d--------------------\n",rull_num+=1);
        printf("Input ID      :  ");scanf("%d",&id[i][j]);
        printf("Input Name    :  ");scanf("%s",&name[i][j]);
        printf("Input Gender  :  ");scanf("%s",&sex[i][j]);
        printf("Input Address :  ");scanf("%s",&add[i][j]);
        }
    }
    for(i=0;i<r;i++){
        puts("");
        for(j=0;j<c;j++){
            printf("\t%d\t%s\t%s\t%s\n",id[i][j],name[i][j],sex[i][j],add[i][j]);
        }
    }
}