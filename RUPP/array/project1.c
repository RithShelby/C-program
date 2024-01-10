#include<stdio.h>
// Function with return value and parameter
void input(int arr[],int n,int num){
    int i;
    for(i=0;i<n;i++){
        printf("Number %d : ",i+1);scanf("%d",&arr[i]);
        }
}
void output(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
            printf("%d\t",arr[i]);
            }
}
void update(int arr[],int n,int num,int newnum){
    int i;
    for(i=0;i<n;i++){
            if(arr[i]==num){
                arr[i] = newnum;
            }
           }
}
void delete(int arr[],int *n,int num){
    int i,j;
    // this is pointer
    for(i=0;i<*n;i++){
        if(arr[i]==num){
            *n = *n-1;
            for(j=i;j<*n;j++){
                arr[j]=arr[j+1];     
            }
            i--; 
        }
    }
}
void sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void insertArray(int arr[],int n,int pos,int element){
    int i;
    for(i=n;i>=pos;i--){
        arr[i] = arr[i-1];
    arr[pos] = element;
    n = n+1;
    printf("Insert Successfully\n");
    }
}
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