#include<iostream>
using namespace std;
class Stack {

public:
 char *arr;
        int top;
       
        int size;
    // Initialize TwoStack.
    Stack(int s) {
       this->size=s;
       top=-1;
      
       arr=new char[s];
    }
    
    // Push in stack 1.
    void push(char num) {
      if(size-top>1){
top++;
arr[top]=num;

}

    }
bool empty(){
    if(top<0){
        return 1;
    }
    else{
        return 0;
    }
}
   
    char pop() {
      if(top>=0){
           int top1ele=arr[top];
           top--;
    return top1ele;
}
else{
    
    return -1;
    
}
    }

 
 
    
};


int main(){
    Stack s(6);
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');
   while(!s.empty()){
       cout<<s.pop();
    }

    return 0;
    
}
