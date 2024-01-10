#include <stdio.h>
#include <stdlib.h>
struct Employee{
    int id;
    char name[20], gender[20], position[20];
    float salary;
}*emp;
int main(){
    int i, j, n, op;
    void Input(){
        printf("Input ID    : ");scanf("%d", &(emp + i)->id);
        printf("Input Name  :");scanf("%s", &(emp + i)->name);
        printf("Input Gender:");scanf("%s", &(emp + i)->gender);
        printf("Input position:");scanf("%s", &(emp + i)->position);
        printf("Input Salary:");scanf("%f", &(emp + i)->salary);
    }
    void Output(){
        printf("\t%d\t%s\t%s\t%s\t\t%.2f\n", (emp + i)->id, (emp + i)->name, (emp + i)->gender, (emp + i)->position, (emp + i)->salary);
    }
    void Header(){
        printf("\tId\tName\tGender\tposition\tSalary\n");
    }
    do{
        printf("1. Input\t2. Output\t3. Search\t4. Update\t5. Delete\n6. Insert\t7. Add\t\t8. Sort\t\t9. Clear\t10. Exit\n");
        printf("Please choose case(1-10):");
        scanf("%d", &op);
        switch (op){
        case 1:{
            printf("Please Enter N:");
            scanf("%d", &n);
            emp = (struct Employee *)calloc(n, sizeof(struct Employee));
            for (i = 0; i < n; i++){
            Input();
            }
            break;
        }
        case 2:{
            Header();
            for (i = 0; i < n; i++){
            Output();
            }
            break;
            }
        }
    }while (op != 10);
}
