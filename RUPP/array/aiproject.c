#include <stdio.h>

#define MAX_SIZE 100

// Function to delete a number from the array
void deleteNumber(int arr[], int *size, int num) {
    int i, j;
    for (i = 0; i < *size; i++) {
        if (arr[i] == num) {
            for (j = i; j < *size - 1; j++) {
                arr[j] = arr[j+1];
            }
            (*size)--;
            break;
        }
    }
}

// Function to update a number in the array
void updateNumber(int arr[], int size, int oldNum, int newNum) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == oldNum) {
            arr[i] = newNum;
            break;
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size, choice, i, num, oldNum, newNum;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter your choice:\n");
    printf("1. Delete a number\n");
    printf("2. Update a number\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the number to delete: ");
            scanf("%d", &num);
            deleteNumber(arr, &size, num);
            
            printf("Array after deleting %d:\n", num);
            for (i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            break;
        
        case 2:
            printf("Enter the number to update: ");
            scanf("%d", &oldNum);
            
            printf("Enter the new number: ");
            scanf("%d", &newNum);
            updateNumber(arr, size, oldNum, newNum);
            
            printf("Array after updating %d to %d:\n", oldNum, newNum);
            for (i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            break;
        
        default:
            printf("Invalid choice!");
    }

    return 0;
}
