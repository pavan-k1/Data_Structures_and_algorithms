#include<iostream>
using namespace std;


class Node{

public:
int data=50;
Node* next;


Node(int data){
this->data=data;
this->next=NULL;


}

};


void insertAthead(Node* &head,int d){
Node* temp=new Node(d);
temp->next=head;
head=temp;
}


void insertAttail(Node* &tail,int d){

Node* temp=new Node(d);
tail->next=temp;
tail=temp;



}


void insertAtMiddle(Node* &head,Node* &tail,int position,int d){
if(position ==1){
insertAthead(head,d);
return;
}
Node* temp=head;
int count=1;
while(count<position-1){

temp=temp->next;
count++;
}

if(temp->next==NULL){
insertAttail(tail,d);
return;
}

Node* nodetoInsert=new Node(d);
nodetoInsert->next=temp->next;
temp->next=nodetoInsert;





}







void printLL(Node* &head){

Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<endl;
temp=temp->next;



}



}
int main(){
Node* node1=new Node(10);//creation of dynamic object of the Node type

Node* head=node1;

Node* tail=node1;

insertAttail(tail,20);
insertAttail(tail,30);
insertAttail(tail,40);
insertAttail(tail,50);
insertAttail(tail,60);
cout<<"before inserting at the middle";
printLL(head);




insertAtMiddle(head,tail,7,25);
cout<<"after inserting at the middle";
printLL(head);


/*insertAthead(head,5);
insertAthead(head,4);
insertAthead(head,3);
insertAthead(head,2);
insertAthead(head,1);
printLL(head);*/

return 0;

}
