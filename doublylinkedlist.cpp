#include<iostream>
using namespace std;


class Node{

public:
int data=50;
Node* next;
Node* prev;

Node(int data){
this->data=data;
this->next=NULL;
this->prev=NULL;

}

~Node(){

if(this->next!=NULL){
this->next=NULL;

}
cout<<"You have deleted the node of value "<<this->data<<endl;
}

};

void insertAtHead(Node* &head,Node* &tail,int d){

if(head==NULL){
Node* temp=new Node(d);
head=temp;
tail=temp;
}
else{
Node* temp=new Node(d);
temp->next=head;
head->prev=temp;
head=temp;
}


}

void insertAtTail(Node* &head,Node* &tail,int d){

if(head==NULL){
Node* temp=new Node(d);
head=temp;
tail=temp;
}
else{
Node* temp=new Node(d);
tail->next=temp;
temp->prev=tail;
tail=temp;
}



}


void insertAtMiddle(Node* &head,Node* &tail,int position,int d){
if(position==1){
insertAtHead(head,tail,d);
return;


}


Node* temp =head;
int cnt=1;
while(cnt<position-1){
temp=temp->next;
cnt++;
}

if(temp->next==NULL){
insertAtTail(head,tail,d);
return;


}
Node* curr=new Node(d);
temp->next->prev=curr;
curr->next=temp->next;
temp->next=curr;
curr->prev=temp;






}

void deleteNode(Node* &head,Node* &tail,int position){
if(position==1){
Node* temp=head;
temp->next->prev=NULL;
head=temp->next;
temp->next=NULL;
delete temp;



}

else{
Node* current=head;
Node* previous=NULL;

int cnt=1;
while(cnt<position){
previous=current;
current=current->next;
cnt++;



}

if(current->next==NULL){

current->prev=NULL;
previous->next=current->next;
current->next=NULL;
tail=previous;
delete current;

}
else{

current->prev=NULL;
previous->next=current->next;
current->next=NULL;
delete current;

}






}


}






void printLL(Node* &head){

Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;

}
cout<<endl;

}

int getLength(Node* &head){
int len=0;
Node* temp=head;
while(temp!=NULL){
len++;
temp=temp->next;



}

return len;

}
int main(){


Node* head=NULL;

Node* tail=NULL;
printLL(head);

insertAtTail(head,tail,20);
printLL(head);
insertAtTail(head,tail,30);
printLL(head);
insertAtTail(head,tail,40);
printLL(head);
insertAtTail(head,tail,50);

printLL(head);

insertAtMiddle(head,tail,1,0);
printLL(head);
insertAtMiddle(head,tail,6,60);

printLL(head);

deleteNode(head,tail,1);
deleteNode(head,tail,5);
printLL(head);
cout<<head->data<<endl;
cout<<tail->data<<endl;
/*insertAtHead(head,5);
insertAtHead(head,tail,4);
insertAtHead(head,tail,3);
insertAtHead(head,tail,2);
insertAtHead(head,tail,1);
printLL(head);
cout<<getLength(head)<<endl;*/



return 0;

}
