// Linked list implementation in C++


#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

node* createNode(int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = nullptr;
    return newnode;
}

void insert_at_end(node* &head, int data){
    node* newnode = createNode(data);
    if(head == nullptr){
        head = newnode;
       return;
    }
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next=newnode;
}

void insert_at_beg(node* &head, int data){
    node* newnode = createNode(data);
    newnode->next = head;
    head = newnode;
}

void delete_a_key(node* &head, int data){
    if(head == nullptr) return;

    if(head->data == data){
        node* temp = head;
        head=head->next;
        delete temp;
        return;
    }

    node* temp = head;
    node* prev = nullptr;

    while(temp->next != nullptr && temp->data != data){
        prev = temp;
        temp=temp->next;
    }
    prev->next = temp->next;
    delete temp;
   
}

void insert_at_pos(node* &head, int data, int pos){
    node* newnode = createNode(data);
    if(pos-1 == 0){
        insert_at_beg(head, data);
        return;
    }
    node* temp = head;
    int i=0;
    while(i != pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}


void display(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void reverse_linklist(node* &head){
    node* prev = nullptr;
    node* current = head;
    node* next = nullptr;
    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}


int main(){
    cout<<"Start"<<endl;
    node* head = nullptr;

    insert_at_end(head, 3);
    insert_at_end(head, 2);
    insert_at_beg(head, 1);
    delete_a_key(head, 3);
    insert_at_end(head, 3);
    display(head);
    insert_at_pos(head, 0, 1);
    insert_at_pos(head, 4, 4);
    insert_at_pos(head, 1.5, 2);
    display(head);
    reverse_linklist(head);
    display(head);

    return 0;
}