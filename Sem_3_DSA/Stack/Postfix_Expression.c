#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack is full! Can't push more values.\n");
        exit(1);
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack is empty! Nothing to remove.\n");
        exit(1);
    }
    return stack[top--];
}

int evaluatePostfix(char exp[]) {
    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            int val2 = pop();
            int val1 = pop();
            int result;

            switch (ch) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
                case '^': result = pow(val1, val2); break;
                default:
                    printf("Invalid operator: %c\n", ch);
                    exit(1);
            }

            push(result);
        }
    }

    return pop();
}

int main() {
    char exp[MAX];

    printf("Enter a postfix expression (use single-digit numbers): ");
    scanf("%s", exp);

    int result = evaluatePostfix(exp);
    printf("Result of the expression = %d\n", result);

    return 0;
}
