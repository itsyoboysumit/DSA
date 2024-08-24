#include <iostream>
using namespace std;

#define MAX 10

class Stack{
    private:
    int stack[MAX];
    int top;

    public:
    Stack(){
        top=-1;
    }
    void push(int item){
        if(top==MAX-1){
            cout<<"Overflow"<< endl;
        }
        else{
            top=top+1;
            stack[top]=item;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Underflow"<<endl;
        }
        else{
            int item=stack[top];
            top=top-1;
            cout << "deleted item:"<<item<<endl;
        }
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout << stack[i]<<endl;
        }
    }
};
int main(){
    Stack s;
    int n,k;
    cout << "**************\n"
        "PRESS\n"
        "1 for PUSH\n"
        "2 for POP\n"
        "3 for DISPLAY\n"
        "4 for EXIT\n"
        "*************\n";
    while (true){
        cout<<"Enter choice:";
        cin>>k;
        switch (k)
        {
        case 1:cout<<"Enter the element to be pushed:";
            cin>>n;
            s.push(n);
            break;
        case 2:s.pop();
            break;
        case 3:s.display();
            break;
        case 4: cout<<"EXITED";
            break;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
        if (k==4)
        break;
    }
    return 0;

}