#include<stdio.h>
#include<stdlib.h>
#define max 5

int cq[max];
int r=max-1;
int f=max-1;
int flag =0;

void enque
(int item);
void deque();
void display();

int main()
{
    int k, item;
    do
    {

        printf("\n***********\nPress 1 for enque\nPress 2 for deque\nPress 3 for display\nPress 4 for exit\n************\n");
        printf("Enter choice:");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            printf("Enter the element to be queue:");
            scanf("%d", &item);
            enque(item);
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exited.");
            break;
        default:
            printf("Wrong input! Try again.");
            break;
        }
    } while (k != 4);
    return 0;
}

void enque(int item){
    if((r+ 1)%max==f && flag==1 ){
        printf("Overflow");
    }else{
        r=(r+1)%max;
        cq[r]=item;
        flag=1;
    }
}

void deque(){
    if(f==r && flag == 0){
        printf("Underflow");
    }else{
        f=(f+1)%max;
        int temp = cq[f];
        printf("Item deleted: %d ", temp);
        flag=0;
    }
}

void display(){
    if(f==r && flag==0){
        printf("Queue is empty.");
    }else{
        printf("Current queue:");
        int i = (f+1)%max;
        while(i!=(r+1)%max){
            printf(" %d ",cq[i]);
            i=(i+1)%max;
        }
        
    }
}