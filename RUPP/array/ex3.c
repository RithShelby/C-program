#include<stdio.h>
#include<conio.h>
int main(){
    int id[20],op,n,i;
    char gender[20];
    char name[20];
    float s1[20],s2[20],s3[20],avg[20],total[20];
   do{
    puts("1. Add New Score\n2.Passed Student\n3.Failed Student\n4.Show all Student\n5.Exit\n");
    printf("Choose Option Below[1->5] : ") ;scanf("%d",&op);
    switch (op){
    case 1:{ 
        printf("Input N for Number of Student : ");scanf("%d",&n);
        for(i=0;i<n;i++){
        printf("====Student %d====\n",i+1);
        printf("Input ID     : ");scanf("%d",&id[i]);
        printf("Input Name   : ");scanf("%s",&name[i]);fflush(stdin);
        printf("Input Gender : ");scanf("%c",&gender[i]);
        printf("Input Score1 : ");scanf("%f",&s1[i]);
        printf("Input Score2 : ");scanf("%f",&s2[i]);
        printf("Input Score3 : ");scanf("%f",&s3[i]);
        total[i]=s1[i]+s2[i]+s3[i];
        avg[i] = total[i]/3.00;
    }
    }break;
    case 2 :{
    printf("=====Passed Student List=====\n");
    printf("ID\tName\tGender\tScore1\tScore2\tScore3\tTotal\tAverage\n");
    for(i=0;i<n;i++){
        if(avg[i]>=50){
            printf("%d\t%s\t",id[i],name[i]);
            printf("%c\t%g\t",gender[i],s1[i]);
            printf("%g\t%g\t",s2[i],s3[i]);
            printf("%g\t%g\n",total[i],avg[i]);
        }
    }
    }break;
    }
    }while (op!=13);
}