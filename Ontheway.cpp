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

Node* removeDuplicatesUnsorted(Node* head){
   map<int,bool>visited;
   Node* current=head;
   Node* prev=NULL;
   while(current->next!=NULL){
    if(visited[current->data]!=true){
        visited[current->data]=true;
        prev=current;
        current=current->next;
        
    }
    else{
        visited[current->data]=true;
        prev->next=current->next;
        Node* nodetodelete=current;
        current=current->next;
        delete nodetodelete;
    }
   }
   return head;
}

// Node* removeDuplicatesUnsorted(Node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node* current=head;
    
//     while(current->next!=NULL){
//         Node* temp=current;
//         while(temp->next!=NULL){
//             if(current->data==temp->next->data){
//                  Node* nodetodelete=temp->next;
//         temp->next=temp->next->next;
//         delete nodetodelete;

//             }
//             else{
//                 temp=temp->next;
//             }
//         }
//         current=current->next;
//     }
//     return head;
// }

Node* removeDuplicatesSorted(Node* head ){
if(head==NULL){
return NULL;

}
Node* current=head;

while(current!=NULL){
    if(current->next!=NULL&&current->next->data==current->data){
        Node* nodetodelete=current->next;
        current->next=current->next->next;
        delete nodetodelete;

    }
    else{
        current=current->next;
    }
}

return head;
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

insertAttail(tail,50);
insertAttail(tail,20);
insertAttail(tail,15);
insertAttail(tail,50);
insertAttail(tail,19);
cout<<"Before removing duplicates"<<endl;
printLL(head);
// removeDuplicatesSorted(head);
removeDuplicatesUnsorted(head);
cout<<"After removing duplicates"<<endl;
printLL(head);


return 0;

}
