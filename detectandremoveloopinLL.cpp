#include<iostream>
#include<map>
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



void insertAttail(Node* &tail,int d){

Node* temp=new Node(d);
tail->next=temp;
tail=temp;



}



//Method 1: using the visited map approach
// bool detectLoop(Node* head){
// if(head==NULL){
//     return false;
// }
// map<Node*,bool>visited;
// Node* temp=head;
// while(temp!=NULL){
//     if(visited[temp]==true){
//         return true;
//     }
//     visited[temp]=true;
//     temp=temp->next;
// }
// return false;


// }
//Method 2:using the slow fast pointers approach
Node* detectLoop(Node* head){
Node* fast=head;
Node* slow=head;
if(head==NULL){
        return NULL;
    }
while(fast!=NULL&&slow!=NULL){
    fast=fast->next;
    if(fast!=NULL){
        fast=fast->next;
    }
    
  
    
   
        slow=slow->next;
        
      if(fast==slow){
       return slow;
    }
}
return NULL;
}

Node* startingPoint(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* fast=detectLoop(head);
    Node* slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
Node* startofLoop=startingPoint(head);
Node* temp=startofLoop;
    while(temp->next!=startofLoop){
temp=temp->next;
    }
    temp->next=NULL;
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

// cout<<"before inserting at the middle";
tail->next=head->next;
// printLL(head);


if(detectLoop(head)!=NULL){
    cout<<"there is a loop present in the given linked list ";
}
else{
    cout<<"no loop present";
}

cout<<"the starting point of loop is --->"<<startingPoint(head)->data<<endl;
cout<<"going to remove loop";
removeLoop(head);
cout<<"loop removed now the linked list is";
printLL(head);





return 0;

}
