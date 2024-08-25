#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int queue[MAX];
int f=-1;
int r=-1;
void enque(int item);
void deque();
void display();

int main(){
    int k,item;
    do{
        printf("\n*********\nPress 1 for ENQUE\nPress 2 for DEQUE\nPress 3 for DISPLAY\nPress 4 for EXIT\n***********");
        printf("\nEnter choice:");
        scanf("%d",&k);
        switch(k){
            case 1: printf("Enter the element to be enque:");
                    scanf("%d",&item);
                    enque(item);
                    break;
            case 2: deque();
                    break;
            case 3: display();
                    break;
            case 4: break;
            default:printf("Wrong input try again.");
                    break;
        }
    }while(k!=4);
}
void enque(int item){
    if(f==MAX-1){
        printf("Overflow");
    }
    else{
        if(f=-1){
            f++;
            r++;
        }else{
            r++;
        }
    }
    queue[r]=item;
}
void deque(){
    int temp;
    if(f==-1){
        printf("Undeflow");
    }else{
        temp=queue[f];
        if(f==r){
            f=-1;
            r=-1;
        }else{
            f++;
        }printf("\nItem deleted:%d",temp);
    }
    
}
void display(){
    if(f==-1){
        printf("\nQueue is empty.");
    }else{
        printf("\nCurrent Queue:");
        for(int i=f;i<=r;i++){
            printf(" %d ",queue[i]);
        }
    }
}
