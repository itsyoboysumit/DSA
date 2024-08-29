// link list as stack//

#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

typedef struct abc
{
    int data;
    struct abc *next;
} node;

node *top;

int main()
{
    top = NULL;
    int n;
    printf("\tPRESS\n******************\n1.for push\n2.for pop\n3.for trasverse\n4.for exit\n******************\n");
    do
    {
        printf("\nEnter choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            break;
        }
    } while (n < 4);
}
void push()
{
    node *temp = (node *)malloc(sizeof(node));
    printf("Enter the element to be inserted:");
    scanf("%d", &temp->data);
    temp->next = top;
    top = temp;
}
void pop(){
    node *temp;
    if(top==NULL){
        printf("Underflow");
    }else{
        temp=top;
        top=top->next;
    }
    free(temp);
    return;
}
void display(){
    node *dh=top;
    if(dh==NULL){
        printf("Stack is empty.");
    }else{
    printf("Current Stack:\n");
    while(dh!=NULL){
        printf("[%d]\n",dh->data);
        dh=dh->next;
    }
    }
}