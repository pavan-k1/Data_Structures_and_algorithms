#include <bits/stdc++.h> 
class TwoStack {

public:
 int *arr;
        int top1;
        int top2;
        int size;
    // Initialize TwoStack.
    TwoStack(int s) {
       this->size=s;
       top1=-1;
       top2=size;
       arr=new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
      if(top2-top1>1){
top1++;
arr[top1]=num;

}

    }

    // Push in stack 2.
    void push2(int num) {
        if(top2-top1>1){
top2--;
arr[top2]=num;

}

    }

    // Pop from stack 1 and return popped element.
    int pop1() {
      if(top1>=0){
           int top1ele=arr[top1];
           top1--;
    return top1ele;
}
else{
    
    return -1;
    
}
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
       if(top2<size){
           int top2ele=arr[top2];
           top2++;
    return top2ele;
}
else{
    
    return -1;
    
}
    }
};
