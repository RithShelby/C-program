#include<stdio.h>
int class(float score,char grade){
    int i;
    if(score >=0 && score < 50){
        grade = 'F'; 
    }else if(score >=50 && score < 60){
        grade = 'E';
    }else if(score >=60 && score < 70){
        grade = 'D';
    }else if(score >=70 && score < 80){
        grade = 'C';
    }else if(score >=80 && score < 90){
        grade = 'B';
    }else{
        grade = 'A';
    }
    return i;

}

int main(){
    float score;
    char grade;
    printf("Input Score : ");scanf("%f",&score); 
    class(grade);
}