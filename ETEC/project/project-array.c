#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int arr[30];
    int i,j,n,op;
    do{
        printf("1.Input\n2.Output\n3.Search\n4.Uppdate\n5.Remove\n6.Insert\n7.Sort\n8.Add\n9.Clear\n10.Exit\n");
        printf("Please Choose Option :   ");scanf("%d",&op);
        switch(op){
            case 1:{
                printf("Input Size of Index :   ");scanf("%d",&n);
                for(i=0;i<n;i++){
                    printf("Input Value of Array  %d  :   ",i+1);scanf("%d",&arr[i]);
                }
            }break;
            case 2:{
                for(i=0;i<n;i++){
                    printf("Value of Array %d   :   %d\n",(i+1),arr[i]);
                }
            }break;
            case 3:{
                int search;
                bool check = true;
                printf("Input Value to search :   ");scanf("%d",&search);
                for(i=0;i<n;i++){
                    if(search==arr[i]){
                        check = false;
                        puts("Search Success");
                        printf("Value of array %d :  %d\n",(i+1),arr[i]);
                    }
                }if(check == true){
                    puts("Search False");
                }
            }break;
            case 4:{
                int update;
                bool check = true;
                printf("Input Value of Array to Update :   ");scanf("%d",&update);
                for(i=0;i<n;i++){
                    if(update==arr[i]){
                        puts("Input New Value :   ");scanf("%d",&arr[i]);
                        check = true;
                    }
                }(check == false)?puts("Search Fail"):printf("Update Success");
            }break;
            case 5:{
                int remove;
                bool check = true;
                printf("Input Value to Remove :   ");scanf("%d",&remove);
                for(i=0;i<n;i++){
                    if(remove==arr[i]){
                        for(j=i;j<n;j++){
                            arr[j] = arr[j+1];
                            check = true;
                        }
                        n--;
                    }
                }(check == false)?puts("Remove Fail"):puts("Remove Done");
            }break;
            case 6:{
                int insert;
                bool check = true;
                printf("Input Value to Insert   :   ");scanf("%d",&insert);
                for(i=0;i<n;i++){
                    if(insert == arr[i]){
                        for(j=n;j>=i;j--){
                            arr[j] = arr[j-1];
                        }
                        n++;
                        printf("Input New Value  :  ");scanf("%d",&arr[i]);
                        check =true;
                        break;
                    }
                }(check == false)?puts("Insert fail"):puts("Insert Success");
                
            }break;
            case 7:{
                int temp;
                bool check = true;
                for(i=0;i<n;i++){
                    for(j=i+1;j<n;j++){
                        if(arr[i] > arr[j]){ // (>) small to big // (<) big to small
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                            check = true;
                        }
                    }
                }(check == false)?puts("Sort Fail"):puts("Sort Success");
            }break;
            case 8:{
                 int add;
                 bool check = true;
                 printf("Input More Array :   ");scanf("%d",&add);
                 for(i=0;i<n+add;i++){
                    printf("Input New Value of Array :   ");scanf("%d",&arr[i]);
                    check = true;
                }if(check == false){
                    puts("Cannot Add");
                }else{
                    puts("Add Success");
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
    }while(op!=13);
}