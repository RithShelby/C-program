#include <stdio.h>
#include <string.h>
int main(){
    int i,n;
    char status[20];
    for(i=0;i<n;i++){
    printf("Input N  :  ");scanf("%d",&n);
    printf("Input Your Crush word[Yes/No] :    ");scanf("%s",&status[i]);
    if(strcmp(status,"Yes")==0){
        printf("Your Crush have Comfirm ....\n");
        printf("I love you too\n");
    }else{
        printf("Sad you fall in love but fail in love\n");
    }
}

}
