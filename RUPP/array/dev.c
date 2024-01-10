#include<stdio.h>
#include<stdbool.h>
#include<allCase.h>
// Function with return value and parameter
int main(){
    int num,newnum,arr[20];
    int i,j,n,op;
    do{
        printf("\n1.Add New Element\n2.Show All Element\n3.Update\n4.Delete Element\n5.Sort\n6.Insert\n");
        printf("Choose Option [1->5]  : ");scanf("%d",&op);
        switch (op){
        case 1:{
            printf("Input Array Element : ");scanf("%d",&n);
            input(arr,n,num);
        }break;
        case 2:{
            puts("All Element");
           output(arr,n);
        }break;
        case 3:{
           printf("Input Number for Update : ");scanf("%d",&num);
           printf("Input New Number : ");scanf("%d",&newnum);
           update(arr,n,num,newnum);
        }break;
        case 4:{
            printf("Input Number for Delete : ");scanf("%d",&num);
            delete(arr,&n,num);
        }break;
        case 5:{
            sort(arr,n);
            // Small to big
            printf("After Sort\n");
            output(arr,n);
        }break;
        case 6:{
            int position,element;
            printf("Input Element to Insert : ");scanf("%d",&element);
            printf("Input Position of Insert : ");scanf("%d",&position);
            insertArray(arr,n,element,position);
            printf("Array after insert : ");
            output(arr,n);
        }break;
        }
    }while(op!=13);
}
