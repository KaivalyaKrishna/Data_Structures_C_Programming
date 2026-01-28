#include <iostream>
using namespace std;

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;


int isEmpty() {
    return (top == -1);
}

int isFull() {
    return (top == MAX_SIZE - 1);
}

void push(int data) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push " << data << endl;
        return;
    }
    stack[++top] = data;
    cout << "Pushed " << data << " onto the stack." << endl;
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Cannot pop." << endl;
        return;
    }
    cout << "Popped " << stack[top--] << " from the stack." << endl;
}

void peek() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Top element: " << stack[top] << endl;
}


void display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

void exitProgram() {
    cout << "Exiting the program." << endl;
    exit(0);
}

void menu() {
    cout << "Stack Operations Menu:" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice, data;

    while (true) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to push: ";
                cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exitProgram();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}