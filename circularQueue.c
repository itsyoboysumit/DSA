#include <stdio.h>
#include <stdlib.h>
#define max 4

int cq[max];
int f = max - 1;
int r = max - 1;
int flag = 0;
void enque(int ele);
void deque();
void display();

int main()
{
    int n, ele;
    printf("\tPRESS\n****************\n1 for insertion\n2 for deletion\n3 for display\n4 for exit\n****************");
    do
    {
        printf("\nEnter choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("enter the element to be inseted:");
            scanf("%d", &ele);
            enque(ele);
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("EXITED");
            break;
        default:
            printf("Wrong Input.Try again");
            break;
        }
    } while (n != 4);
}

void enque(int ele)
{
    if ((r + 1) % max == f &&flag == 1)
    {
        printf("Overflow");
    }
    else
    {
        r = (r + 1) % max;
        cq[r] = ele;
        flag = 1;
    }
}
void deque()
{
    if (f == r &&flag == 0)
    {
        printf("Underflow");
    }
    else
    {
        f = (f + 1) % max;
        int item = cq[f];
        printf("Element deleted:%d", item);
        flag = 0;
    }
}
void display()
{
    if (f == r && flag == 0)
    {
        printf("Queue is empty");
    }
    else
    {
        int i = (f + 1) % max;
        printf("current queue is:");
        while (i != (r + 1) % max)
        {
            printf("[%d] ", cq[i]);
            i = (i + 1) % max;
        }
    }
}
