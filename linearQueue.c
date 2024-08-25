#include <stdio.h>
#include <stdlib.h>
#define max 5

int lq[max];
int f=-1;
int r=-1;

void enque(int ele);
void deque();
void display();

int main(){
    int n,ele;
    printf("\n\tPress\n***********\n1 for enque\n2 for deque\n3 for display\n4 for exit\n**********");
    do{
        printf("\nEnter choice:");
        scanf("%d",&n);
        switch(n){
            case 1:printf("Enter the element to be inserted:");
                    scanf("%d",&ele);
                    enque(ele);
                    break;
            case 2: deque();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exited");
                    break;
            default: printf("Wrong Input! Please try again");
                    break;
        }
    }while(n!=4);
    return 0;
}
void enque(int ele){
    if (r==max-1){
        printf("Overflow");
    }
    else{
        if(r==-1){
            f++;
            r++;
            printf("Hello");
        }
        else{
            r++;
        }
        lq[r]=ele;
    }
}
void deque(){
    if(f==-1){
        printf("Underflow");
    }else{
        int temp=lq[f];
        if(f==r){
            f=-1;
            r=-1;
        }
        else{
            f++;
        }
        printf("\nElement deleted:[%d]",temp);
    }
}
void display(){
    if(f==-1){
        printf("Queue is empty.");
    }
    else{
        for(int i=f;i<=r;i++){
            printf("[%d] ",lq[i]);
        }
    }
}