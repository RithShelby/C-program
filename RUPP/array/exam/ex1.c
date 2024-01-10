#include<stdio.h>
#include<string.h>
int main(){
    int id[10];
    float salary[10];
    char name[10][20];
    int i,n,j,search,op;
    do{
        printf("1.Input\t2.Output\t3.Search\t4.Update\t5.Delete\t6.Sort\t7.Exit\n");
        printf("Choose Option [1->8]  : ");scanf("%d",&op);
        switch (op){
        case 1:{
            printf("Input N : ");scanf("%d",&n);
                for(i=0;i<n;i++){
                printf("Input ID : ");scanf("%d",&id[i]);fflush(stdin);
                printf("Input name : ");gets(name[i]);
                printf("Input Salary : ");scanf("%f",&salary[i]);
            }
        }break;
        case 2:{
             printf("ID\tName\tSalary\n");
                for(i=0;i<n;i++){
                    printf("%d\t%s\t%g$\n",id[i],name[i],salary[i]);
            }
        }break;
        case 3:{
            printf("Input ID to Search ");scanf("%d",&search);
            for(i=0;i<n;i++){
                if(search==id[i]){
            printf("ID\tName\tSalary\n");
            printf("%d\t%s\t%g$\n",id[i],name[i],salary[i]);
        }
            }
        }break;
        case 4:{
            int update;
            printf("Input ID to Update : ");scanf("%d",&update);
                for(i=0;i<n;i++){
                    if(id[i] == update){
                printf("Input ID : ");scanf("%d",&id[i]);fflush(stdin);
                printf("Input name : ");gets(name[i]);
                printf("Input Salary : ");scanf("%f",&salary[i]);
                }
            }
        }break;
        case 5:{
            int Delete;
            printf("Input ID to Delete : ");scanf("%d",&Delete);
            for(i=0;i<n;i++){
                    if(Delete==id[i]){
                        for(j=i;j<n;j++){
                            id[j] = id[j+1]; 
                        }
                        n--;
                    }
                }
        }break;
        case 6:{
            int temp;
            char s[20];
            for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(salary [i] < salary [j]){
                        temp = id[i] ;
                        id[i] = id[j];
                        temp = id[j];
                        temp = salary[i] ;
                        salary[i] = salary[j];
                        temp = salary[j];
                        strcpy(s,name[i]);
                        strcpy(name[i],name[j]);
                        strcpy(name[j],s);
                    }
                }
            }
           
        }break;
        case 7 :{
           puts("Exit");
        }break;
        }
    }while (op!=7);
}  
