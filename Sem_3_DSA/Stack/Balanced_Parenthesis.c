#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int main() {
    char exp[MAX];
    char *e;
    char ch;
    int flag = 1;

    printf("Enter an expression: ");
    scanf("%s", exp);

    e = exp;

    while (*e != '\0') {
        if (*e == '(' || *e == '{' || *e == '[')
            push(*e);
        else if (*e == ')' || *e == '}' || *e == ']') {
            ch = pop();
            if ((ch == '(' && *e != ')') ||
                (ch == '{' && *e != '}') ||
                (ch == '[' && *e != ']')) {
                flag = 0;
                break;
            }
        }
        e++;
    }

    if (top != -1)
        flag = 0;

    if (flag == 1)
        printf("Expression is Balanced\n");
    else
        printf("Expression is NOT Balanced\n");

    return 0;
}
