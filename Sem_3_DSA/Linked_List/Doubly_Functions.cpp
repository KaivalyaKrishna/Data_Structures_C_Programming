#include <iostream>
using namespace std;
#include <stdlib.h>
int pos, counter, c;
struct node
{
    int info;
    struct node *next;
};
struct node *start, *temp, *new_node1, *new_node, *ptr;
struct node *create(int item)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = item;
    new_node->next = NULL;
    return new_node;
}
void Display()
{
    temp = start;
    while (temp != NULL)
    {
        cout << temp->info << endl;
        temp = temp->next;
    }
    cout << "End" << endl;
}
int length()
{
    c = 0;
    temp = start;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
}
void ins_beg()
{
    if (new_node1 == NULL)
    {
        cout << "Failed Memory Allocation";
    }
    else if (start == NULL)
    {
        start = new_node1;
    }
    else
    {
        new_node1->next = start;
        start = new_node1;
    }
}
void ins_pos()
{
    cout << "Enter Position: ";
    cin >> pos;
    counter = 1;
    temp = start;
    while (counter < pos)
    {
        temp = temp->next;
        counter++;
    }
    new_node1->next = temp->next;
    temp->next = new_node1;
    cout << "Inserted\n";
}
void ins_last()
{
    temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node1;
}
void Insert()
{
    int k, ch, pos;
    cout << "Enter Value: ";
    cin >> k;
    new_node1 = create(k);
    cout << "1-To Insert in the Beginning \n2-To Insert after a Position \n3-To Insert at the Last \n0-To Exit - ";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        ins_beg();
        break;
    }
    case 2:
    {
        ins_pos();
        break;
    }
    case 3:
    {
        ins_last();
        break;
    }
    case 0:
    {
        exit(0);
    }
    }
}
void delbeg()
{
    temp = start;
    start = temp->next;
    temp->next = NULL;
    free(temp);
}
void delpos()
{
    cout << "Enter Position: ";
    cin >> pos;
    counter = 1;
    temp = start;
    while (counter < pos)
    {
        ptr = temp;
        temp = temp->next;
        counter++;
    }
    cout << "Deleted: " << temp->info << endl;
    ptr->next = temp->next;
    temp->next = NULL;
    free(temp);
}
void delast()
{
    temp = start;
    while (temp->next != NULL)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = NULL;
    cout << "Deleted: " << temp->info << endl;
    free(temp);
}
void Delete()
{
    int ch;
    cout << "1-To Delete from the Beginning \n2-To Delete after a Position \n3-To Delete at the Last \n0-To Exit: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        delbeg();
        break;
    }
    case 2:
    {
        delpos();
        break;
    }
    case 3:
    {
        delast();
        break;
    }
    case 4:
    {
        exit(0);
    }
    }
}

int main()
{
    int choice;
    while (1)
    {
        cout << "1-Display\n2-Insert\n3-Delete\n0-Exit: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Display();
            break;
        }
        case 2:
        {
            Insert();
            break;
        }
        case 3:
        {
            Delete();
            break;
        }
        case 0:
        {
            cout << "Exit" << endl;
            exit(0);
        }
        }
    }
    return 0;
}