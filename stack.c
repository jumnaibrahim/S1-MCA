#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = 7;

// PUSH operation
void PUSH(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Overflow\n");
    } else {
        top = top + 1;
        stack[top] = item;
    }
}

// POP operation
int POP() {
    if (top == -1) {
        printf("Underflow\n");
        return -1; // Indicate underflow
    } else {
        int item = stack[top];
        top = top - 1;
        return item;
    }
}

// Example main function
int main() 
{
    int stack[MAX_SIZE]={1,2,3,4,5,6,7,8};
    //PUSH(10);
    //PUSH(20);
    printf("Popped: %d\n", POP());
    printf("Popped: %d\n", POP());
    printf("Popped: %d\n", POP()); // Will show Underflow

    return 0;
}
