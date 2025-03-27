#include<iostream>
using namespace std;

class stack{
    public:
    int data;
    stack* top;
    stack* next;
    int size;
    int count;

    stack(int size,int data){
        this->data=data;
        this->size=size;
        this->next=NULL;
        this->top=NULL;
        this->count=0;
    }

    void push(stack* &head,int element){
        if(size-count>0){

         if(head==NULL){
        stack* node=new stack(size,element);
        head=node;
        node->next=NULL;
        count++;
        }
       
        else{
            stack* temp=head;
    stack* node=new stack(size,element);
    head=node;
    node->next=temp;
    count++;
        }
        top=head;
    }
    else{
        cout<<"stack overflow!!";
    }
}


    void pop(stack* &head){
        if(top!=NULL){
            stack* temp=top;
            head=head->next;
            top=head;
            temp->next=NULL;
            delete temp;
            count--;

        }
        else{
            cout<<"stack underflow!!"<<endl;
        }
    }

    int peek(){
        if(top!=NULL){
            return top->data;
        }
else{
    cout<<"stack underflow!!"<<endl;
    return -1;
}
    }

    void deletemiddleele(stack* &head){
        stack* previous=NULL;
        stack* slow=head;
        stack* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            previous=slow;
            slow=slow->next;
            
        }
        previous->next=slow->next;
        slow->next=NULL;
        delete slow;
    }

    void printStack(stack* head){
        stack* temp=head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}
    }

};


int main(){
    stack s(5,0);
    stack* head=NULL;

   
s.push(head,2);
s.push(head,3);
s.push(head,4);





cout<<"printing stack before deleting middle element"<<endl;
s.printStack(head);
s.deletemiddleele(head);
cout<<"printing stack after deleting middle element"<<endl;
s.printStack(head);
return 0;

}