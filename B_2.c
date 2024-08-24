/*Write a program to reverse a String using the Stack data structure.*/
#include<stdio.h>
#include<string.h>

#define MAX 20

typedef struct Stack{
    char arr[MAX];
    int top;
}stack;

// initializing the top element of stack typed structure to -1
// pointing stack typed strucure st
void initialize (stack *st){
    st->top=-1;
}

// passing a poiinter pointing a stack data typed "st" data structure and character of string to be pused
void push(stack *st, char c){  
    if(st->top==MAX-1){
        printf("Overflow");
    }
    else{
        st->top++;
        st->arr[st->top]=c;
    }
}

// passing the pointer pointing st stack;
char pop(stack *st){
    if(st->top==-1){
        printf("Underflow");
        return -1;
    }
    else{
        char item = st->arr[st->top];
        st->top--;
        return item;
    }
}
void reverse(char *input){
    int length = strlen(input);
    stack st;  
    initialize(&st);

    // push character into the stack
    for (int i=0;i<length;i++){
        push(&st, input[i]);
    }

    //pop character 
    for (int i=0; i<length;i++){
        input[i]=pop(&st);
    }
}
int main(){
    char input[MAX];
    printf("Enter the string:");
    fgets(input,sizeof(input),stdin);
    input[strcspn(input,"\n")]='\0';
    reverse(input);

    printf("Reversed string:%s ",input);
}