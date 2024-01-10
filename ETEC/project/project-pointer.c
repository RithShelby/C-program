#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int *ptr;
    int i,j,n,op;
    do{
        printf("1.Input\n2.Output\n3.Search\n4.Uppdate\n5.Remove\n6.Insert\n7.Sort\n8.Add\n9.Clear\n10.Exit\n");
        printf("Please Choose Option :   ");scanf("%d", &op);
        switch (op){
        case 1:{
            printf("Input N :  ");scanf("%d",&n);
            ptr = (int *)malloc(n*sizeof(int));
            for(i=0;i<n;i++){
                printf("Input Value of (ptr + %d)  :   ",i);scanf("%d",(ptr+i));
            }
        }break;
        case 2:{ 
            printf("Value of Ptr :  ",(ptr+i));
            for(i=0;i<n;i++){
                printf(" %d",*(ptr+i));  
            }puts("");
        }break;
        case 3:{
            int search ;
            bool check = false;
            printf("Input Value of ptr to search  :  ");scanf("%d",&search);
            for(i=0;i<n;i++){
                if(search == *(ptr+i)){
                    printf("Value of Ptr that you Search :  %d\n",*(ptr+i));
                    check = true;
                }
            }(check == false)?puts("Search False"):puts("Search Success");
        }break;
        case 4:{
            int update;
            bool check = false;
            printf("Input Value of ptr to Update :  ");scanf("%d",&update);
            for(i=0;i<n;i++){
                if(update == *(ptr+i)){
                printf("Input new Value of (ptr+%d) :  ",i);scanf("%d",(ptr+i));
                check = true;
                }
            }(check == false)?puts("Update False"):puts("Update Success");
        }break;
        case 5:{
            int remove;
            bool check = true;
            printf("Input Value to Delete :  ");scanf("%d",&remove);
            for(i=0;i<n;i++){
                if(remove == *(ptr+i)){
                    for(j=i;j<n;j++){
                        *(ptr+j) = *(ptr+j+1);
                    }
                    n--;
                    check = true;                
                }(check==false)?puts("Remove False"):puts("Remove Success");
            }
        }break;
        case 6:{
            int insert;
            bool check = true;
            printf("Input Value of Ptr to Insert :   ");scanf("%d",&insert);
            for(i=0;i<n;i++){
                if(insert == *(ptr+i)){
                    for(j=n;j>=i;j--){
                        *(ptr+j) = *(ptr+j-1);
                    }
                    n++;
                    printf("Input New Value :   ");scanf("%d",(ptr+i));
                    check = true;
                }
            }(check == false)?puts("Insert False"):puts("Insert Success");
        }break;
        case 7:{
            int temp,choose;
            bool check = true;
            printf("Input What you Want :  ");scanf("%d",&choose);
            if(choose == 1){
                for(i=0;i<n;i++){
                   for(j=i+1;j<n;j++){
                    if(*(ptr+i) > *(ptr+j)){
                        temp = *(ptr+i);
                        *(ptr+i) = *(ptr+j);
                        *(ptr+j) = temp;
                        check = true;
                    }
                 }
              }(check == false)?puts("Sort false"):puts("Sort Done");
           }if(choose == 2){
                for(i=0;i<n;i++){
                    for(j=i+1;j<n;j++){
                        if(*(ptr+i) < *(ptr+j)){
                        temp = *(ptr + i);
                        *(ptr + i) = *(ptr + j);
                        *(ptr + j) = temp;
                        check = true;
                        }
                    }
                }(check == false)?puts("Sort False"):puts("Sort Done");
           }
        }break;
        case 8:{
            int add;
            bool check = true;
            printf("Input More :   ");scanf("%d",&add);
            ptr = (int *)realloc(ptr,add*sizeof(int));
            for(i=0;i<n;i++){
                printf("Input Value of (ptr+%d) :   ",i);scanf("%d",(ptr+i));
                check = true;
            }if(check==false){
                puts("Can't Add");
            }else{
                puts("Add Done");
                n+=add;
            }
        }break;
        case 9:{
            system("cls");
        }break;
        case 10:{
            puts("Exit");
        }break;
      }
    }while(op!=10);
}