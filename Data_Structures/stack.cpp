#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int data;
    struct Stack* next;
};

Stack* top = nullptr;

void push(int data){
    struct Stack* newnode = new Stack();
    newnode->data = data;
    newnode->next = top;
    top=newnode;
}

void pop(){
    Stack* temp = top;
    if(top == nullptr){
        cout<<"stack is Empty"<<endl;
    }else{
        
        top=top->next;
    }
    delete temp;
}

void display(){
    if(top == nullptr){
        cout<<"stack is Empty"<<endl;
    }else{
        Stack* temp = top;
        while(temp != nullptr ){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
    }
    cout<<endl;
}

int main(){
    int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
