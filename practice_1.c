#include<stdio.h>
#include<stdlib.h>

typedef struct abc
{
    int data;
    struct abc *next;
}node;
node *head,*lastNode;

void insertion();
//void insertAfter();
//void insertBefor();
void searching();
void trasversing();
//void reversing();
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
            //insertAfter(); 
            break;
        case 3:
            //insertBefor();
            break;
        case 4:
            searching();
            break;
        case 5:
            trasversing();
            break;
        case 6:
            //reversing();
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
    temp = (node*)malloc(sizeof(node));
    printf("Enter the data to be entered:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        lastNode=temp;
    }else{
        lastNode->next=temp;
        lastNode=temp;
    }
    
}
void trasversing(){
    node *dh=head;
    printf("Current elements in the list are:");
    while(dh!=NULL){
        printf("[%d] ",dh->data);
        dh=dh->next;
    }
}

void searching(){
    int se,flag=0;
    node *dh=head;
    printf("Enter the element to be searched:");
    scanf("%d",&se);
    while(dh!=NULL){
        if(se==dh->data){
            flag= 1;
            break;
        }dh=dh->next;
    }if(flag==1){
        printf("Got it!");
    }else{
        printf("Not found!");
    }
}
void deletion(){
   node *temp;
   node *dh=head;
   int se;
   printf("Enter the element to be deleted:");
   scanf("%d",&se);
   //HEAD CASE
   if(head->data==se){
    temp=head;
    head=head->next;
    if(head==NULL){
        lastNode=NULL;
    }
    free(temp);
   }
   //BODY CASE
   int flag=0;
   while(dh!=NULL){
    if(dh->next->data==se){
        flag=1;
        break;
    }dh=dh->next;
   }
   if(flag==0){
    printf("Not found.");
    return;
   }
   temp=dh->next;
   dh->next=temp->next;
   if(dh->next==NULL){
    lastNode=dh;
   }
   free(temp);

}