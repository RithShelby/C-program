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
    if(pos < 0 || pos > n){
        printf("Wrong Position\n");
        return;
    }
    for(i=n;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    printf("Insert Successfully\n");
}