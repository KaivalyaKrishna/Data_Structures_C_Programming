#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) 
{
    if (rear == MAX - 1) 
    {
        printf("Queue Overflow. Cannot add %d\n", value);
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    queue[++rear] = value;
    printf("%d added to the queue.\n", value);
}

void dequeue() 
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow. No elements to remove.\n");
        return;
    }

    printf("%d removed from the queue.\n", queue[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display() 
{
    if (front == -1 || front > rear) 
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() 
{
    int choice, value, n;

    while (1) 
    {
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Remove)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
            {
                printf("Enter value to add: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            }

            case 2:
            {
                dequeue();
                break;
            }

            case 3:
            {
                display();
                break;
            }

            case 4:
            {
                printf("Exiting program.\n");
                exit(0);
            }

            default:
            {
                printf("Invalid choice. Try again.\n");
            }
        }
    }

    return 0;
}
