int Sum(int a,int b){
    int sum;
    sum = a+b;
    printf("Sum = %d\n",sum);
}
int aver(int Cpro,int math){
    int avg;
    avg = (Cpro+math)/2;
    printf("Average : %d\n",avg);
}
int spend(int pay,int dis,int total){
    if (pay >= 500){
        dis = pay * 0.50;
        total = pay - dis;
            printf("dis applied: %d \n", dis);
        }else{
        dis = 0.0;
            total = pay;
    }
    printf("Total without discount: %d$\n", pay);
    printf("Total with discount: %d$\n", total);
}