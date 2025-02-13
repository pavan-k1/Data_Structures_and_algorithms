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

};


int main(){
    stack s(5,0);
    stack* head=NULL;

   
s.push(head,2);
s.push(head,3);
s.push(head,4);
s.push(head,5);


s.pop(head);
s.pop(head);
s.pop(head);

s.pop(head);
// s.push(head,3);
// s.pop(head);
// s.pop(head);

// cout<<head->data;
cout<<"the stack top is ---->"<<s.peek()<<endl;



}