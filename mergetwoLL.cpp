#include <bits/stdc++.h>



 
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

Node<int>* solve(Node<int>* first,Node<int>*second){
 Node<int>* firstcurr=first;
    Node<int>* secondcurr=second;
    Node<int>* firstnext=firstcurr->next;
    Node<int>* secondnext=secondcurr->next;
    if(firstnext==NULL){
        firstcurr->next=secondcurr;
        return first;
    }
    while(firstnext!=NULL&&secondcurr!=NULL){

     if((firstcurr->data<=secondcurr->data)&&(secondcurr->data<=firstnext->data)){
            secondcurr->next=firstnext;
            firstcurr->next=secondcurr;
            firstcurr=secondcurr;
            secondcurr=secondnext;
           if (secondnext) { 
    secondnext = secondnext->next;
}
            
        }
        else{
            firstcurr=firstnext;
            firstnext=firstnext->next;

            if(firstnext==NULL){
                firstcurr->next=secondcurr;
            }
           
        
        
    }
     
    }
   
    return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
    Node<int>* temp;
    if(first->data>=second->data){
      temp=  solve(second,first);
    }
    if(first->data<second->data){
      temp=  solve(first,second);
    }
    return temp;
}

int main(){
     Node<int>* first;
     Node<int>* second;

sortTwoLists(first,second);

return 0;

}
