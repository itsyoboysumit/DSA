/*Write a menu driven program for Stack implementation (PUSH,POP,DISPLAY) using array.*/
#include <stdio.h>
#define MAX 10
void push(int item);
void pop();
void display();
int stack[MAX];
int top;

int main()
{
    top = -1;
    int k, n;
    
    do
    {
        printf("\n**************\nPRESS\n1 for PUSH\n2 for POP\n3 for DISPLAY\n4 for EXIT\n*************\n");
        printf("\nEnter choice:");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            printf("Enter the element to be pushed:");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }while(k!=4);
    return 0;
}
void push(int item)
{
    if (top == MAX - 1)
        printf("Overflow\n");
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}
void pop()
{
    if (top == -1)
        printf("Underflow\n");
    else
    {
        int item = stack[top];
        top = top - 1;
    }
}
void display()
{
    printf("CURRENT STACK : ");
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
}
