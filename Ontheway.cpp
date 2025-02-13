#include<iostream>

using namespace std;

class stack{
public:
int *arr;//pointer that will make dynamic array
int top ;
int size;


stack(int size){
    this->size=size;
    top=-1;
    arr=new int[size];//creation of dynamic array of given size;
}

void push(int element){
if(size-top>1){
top++;
arr[top]=element;

}
else{
    cout<<"stack overflow!!"<<endl;
    
}
}
void pop(){
if(top==-1){
    cout<<"stack underflow!!"<<endl;
}
else{
    top--;
}
}
bool empty(){
if(top==-1){
    return true;
}
else{
    return false;
}
}
int peek(){
    if(top==-1){
        cout<<"stack underflow!! "<<endl;
        return -1;
     
    }
    else{
        int topelement=arr[top];
        return topelement;
    }
}
};

int main(){
    stack s(5);
s.push(2);
s.push(3);
s.push(4);
s.pop();
s.pop();
s.pop();
cout<<"Printing top element-->"<<s.peek()<<endl;

if(s.empty()){
    cout<<"the stack is empty"<<endl;
}
else{
    cout<<"the stack is not empty"<<endl;
}
// cout<<"the stack size is "<<s.size();

// stack<int>s;
// s.push(2);
// s.push(3);
// s.push(4);
// s.pop();
// cout<<"Printing top element-->"<<s.top()<<endl;

// if(s.empty()){
//     cout<<"the stack is empty"<<endl;
// }
// else{
//     cout<<"the stack is not empty"<<endl;
// }
// cout<<"the stack size is "<<s.size();




}
