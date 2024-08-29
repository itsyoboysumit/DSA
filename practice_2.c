#include<stdio.h>
#include<stdlib.h>

typedef struct abc{
    int data;
    struct abc *next;
}node;
node *head,*lastNode;

void insertion();
void insertAfter();
void insertBefor();
void searching();
void trasversing();
void reversing();
void deletion();

int main(){
    head=NULL,lastNode=NULL;
    int n;
    do {
        printf("\n\tPRESS\n*******************\n1. for Insertion\n2.for insertion after a specific node\n3.for insertion before a specific node\n4. for searching\n5. for transversing\n6. for reversing\n7. for deletion\n8. for exit\n***********************\n");
        printf("Enter choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertion();
            break;
        case 2:
            insertAfter(); 
            break;
        case 3:
            insertBefor();
            break;
        case 4:
            searching();
            break;
        case 5:
            trasversing();
            break;
        case 6:
            reversing();
            break;
        case 7:
            deletion();
            break;
        case 8:
            break;
        default:
            break;
        }
    }while(n<8);
    return 0;
}
void insertion(){
    node *temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter the element to be entered:");
    scanf("%d",temp->data);
    temp->next=NULL;
    if(head==NULL){
        head = temp;
        lastNode=temp; 
    }else{
        lastNode->next=temp;
        lastNode=temp;
    }
    
}
void traversing(){
    node *dh=head;
    printf("Current list is:");
    while(dh!==NULL){
        prinf("[%d]",dh->data);
        dh=dh->next;
    }

}
void searching(){
    int se,flag=0;
    printf("Enter the element to be searched:");
    scanf("%d",&se);
    node *dh=head;
    while(dh!=NULL){
        if(se==dh->data){
            flag=1;
            break;
        }dh=dh->next;
    }if(flag=1){
        printf("Got it!");
    }else{
        printf("Not found.");
    }
}