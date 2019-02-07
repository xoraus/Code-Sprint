// A stack based c program to find the next greater element

#include<stdio.h>
#include<stdlib.h>

#define STACKSIZE 100;

struct stack {
    int top;
    int items[STACKSIZE];
};


// STACK Function used by printNGE
void push(struct stack *ps, int x) {
    if(ps->top == STACKSIZE-1) {
        printf("Error: stackover flow");
        getchar();
        exit(0);
    }
    else {
        ps->top += 1;
        int top = ps->top;
        ps->items[top] = x;
    }
}

bool isEmpty(struct stack *ps) {
    return (ps->top == -1) ? true : false;
    }

int pop(struct stack *ps) {
    int temp;
    if(ps->top == -1) {
        printf("Error: stack underflow \n");
        getchar();
        exit(0);
    }
    else    {
        int top = ps->top;
        temp = ps->items[top];
        ps->top -= 1;
        return temp;
    }
}

void printNGE(int arr[], int n) {
    int i = 0;
    struct stack s;
    s.top = -1;
    int element, next;

    // push the first element to the stack
    push(&s, arr[0]);

    // iterate for the rest of the elements to the stack
    for (i = 0; i < n;i++) {
        next = arr[i];

        if(isEmpty(&s) == false) {
            // if the stack is not empty then pop an element from stack
            element = pop(&s);

        // if the poppped element is smaller than the next , then
        //a: print the pair
        //b: keep popping while elements are smaller and stack is not
        // empty

        while(element < next) {
            printf("\n %d --> %d", element, next);
            if(isEmpty(&s) == true)
                break;
            element = pop(&s);
        }
        }
    }
}

int main() {
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    getchar();
    return 0;
}
