//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
   Node* reverseLL(Node* head){
      Node* curr=head;
      Node* prev=NULL;
      Node* next1=NULL;
      while(curr!=NULL){
          next1=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next1;
      }
    return prev;
  }
  
  void insertatTail(Node* &head,Node* &tail,int d){
       Node* temp=new Node(d);
if(head==NULL){
   
    head=temp;
    tail=temp;
}

tail->next=temp;
tail=temp;



}

    Node* addTwoLists(Node* num1, Node* num2) {
        Node* anshead=NULL;
        Node* anstail=NULL;
        //reversing the linked list
        num1=reverseLL(num1);
         num2=reverseLL(num2);
      
       //now adding 
       int carry=0;
       Node* temp1=num1;
       Node* temp2=num2;
       int sum=0;
        
      
       while(temp1!=NULL || temp2!=NULL){
         if(temp1==NULL){
             sum=temp2->data+carry;
               if(sum/10==0){
               insertatTail(anshead,anstail,sum);
                carry=0;
           }
           else{
               sum=sum%10;
               insertatTail(anshead,anstail,sum);
               carry=1;
           }
             temp2=temp2->next;
         }  
         else if(temp2==NULL){
             sum=temp1->data+carry;
               if(sum/10==0){
               insertatTail(anshead,anstail,sum);
                carry=0;
           }
           else{
               sum=sum%10;
               insertatTail(anshead,anstail,sum);
               carry=1;
           }
             temp1=temp1->next;
         }
         
         else{
           sum=temp1->data+temp2->data+carry;
           if(sum/10==0){
                insertatTail(anshead,anstail,sum);
                carry=0;
           }
           else{
               sum=sum%10;
               insertatTail(anshead,anstail,sum);
               carry=1;
           }
           temp1=temp1->next;
            temp2=temp2->next;
             
       }
       }
      if(temp1==NULL&&temp2==NULL&&carry!=0){
          insertatTail(anshead,anstail,carry);
      }
       
       
      anshead= reverseLL(anshead);
      if(anshead->data==0){
          anshead=anshead->next;
      }
       return anshead;
       
    }
    
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends