/*Write a program to check weather brackets have been given properly or not in an expression.*/#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define MAX 30

typedef struct Stack
{
    char arr[MAX];
    int top;
}stack;

void initialize(stack *st){
    st->top=-1;
}

void push(stack *st, char c){
        st->top++;
        st->arr[st->top]=c;
}
char pop(stack *st){
        char item = st->arr[st->top];
        st->top--;
        return item;
    
}

int areExpressionsValid(char *expression){
    stack st;
    initialize(&st);

    for(int i=0;expression[i]!='\0';i++){
        if(expression[i]=='('|| expression[i]=='{'||expression[i]=='['){
            push(&st,expression[i]);
        }else{
            char popped = pop(&st);
            if(expression[i]==')' && popped != '(' || expression[i]=='}' && popped != '{' || expression[i]==']' && popped != '['){
                return 0;
            }
        }
    }
    if (st.top==-1){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    char expression[MAX];
    printf("Enter the expression:");
    fgets(expression,sizeof(expression),stdin);

    if(areExpressionsValid(expression)){
        printf("Expressions are valid");
    }else{
        printf("Expressions are not valid.");
    }
}