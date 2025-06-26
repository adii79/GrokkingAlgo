#include<iostream>

class stack{
    static const int maxSize1 = 100;   // only one copy(due to static) & availabel to all with type not copy
    int sta[maxSize1];
    int top;

public:
    stack(){
        top = -1;  //empty at start
    }

    bool isEmpty() {
        return top == -1;
    }
    bool isFull(){
        return top == maxSize1 -1;
    }
    void push(int num){
        if(isFull()){
            std::cout<<"Stack is overFlow"<<std::endl;
            return;   //push() was writing even after overflow	Added return after overflow message
        }
        sta[++top] = num;    
        // a++ it first uses the value of a and then +1 the value
        // ++b it first +1 the value and then uses it
    }

    void pop(){
        if(isEmpty()){
            std::cout<<"stack is underflow \n"<<std::endl;
            return;  //push() was writing even after overflow	Added return after overflow message
        }
        top--;
    }

    void peak(){
        if(isEmpty()){
            std::cout<<"stack is underflow(empty) \n";
        }
        else{
            std::cout<<sta[top]<<std::endl;
        }   
    }
    int size(){
        // return sizeof(sta)/sizeof(sta[0]);
        return top+1;
    }

    void DisplayFullStack(){
        std::cout<<"full stack: ";
        for(int i = 0; i <= top; i++){
            std::cout<<sta[i]<<" ";
        }
        
        // for(int i: sta){ std::cout<<"[ "<<i<<" ]"<<" ";}. // this will also show the empty loaction non intialized data
        std::cout<<std::endl;
    }

};



int main(){

    stack s;
    bool bol = s.isEmpty();
    std::cout<<s.isEmpty()<<std::endl;
    std::cout<<s.isFull()<<std::endl;
    s.push(2);    
    s.peak();
    s.pop();
    s.peak();
    s.pop();
    int size = s.size();
    std::cout<<size<<std::endl;
    s.DisplayFullStack();
    s.push(3);
    s.push(9);
    s.DisplayFullStack();
    s.pop();
    s.DisplayFullStack();
    s.push(89);
    s.DisplayFullStack();

    for( int i = 10; i < 20; ++i){
        s.push(i);
    }
        s.DisplayFullStack();
    for( int i = 10; i < 20; ++i){
        s.pop();
    }
            s.DisplayFullStack();
      for( int i = 10; i < 20; i++){
        s.push(i);
    }
        s.DisplayFullStack();
    for( int i = 10; i < 20; i++){
        s.pop();
    }
            s.DisplayFullStack();





    // std::cout<<"==========================="<<std::endl;

    // int a = 5;
    // std::cout<<a<<std::endl;
    // int b = a++;
    // std::cout<<"b:"<<b<<std::endl;
    // a=5;
    // std::cout<<a<<std::endl;
    // std::cout<<++a<<std::endl;

}