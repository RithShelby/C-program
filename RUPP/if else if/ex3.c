#include<stdio.h>
// student grade information
int main(){
    int i,n;
    float score;
    char grade;
    printf("Input N : ");scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Input Score : ");scanf("%f",&score);
    if(score >=0 && score < 50){
        grade = 'F';
        printf("Grade : %c\n",grade);
    }else if(score >=50 && score < 60){
        grade = 'E';
        printf("Grade : %c\n",grade);
    }else if(score >=60 && score < 70){
        grade = 'D';
        printf("Grade : %c\n",grade);
    }else if(score >=70 && score < 80){
        grade = 'C';
        printf("Grade : %c\n",grade);
    }else if(score >=80 && score < 90){
        grade = 'B';
        printf("Grade : %c\n",grade);
    }else{
        grade = 'A';
        printf("Grade : %c\n",grade);
    }
    }
}