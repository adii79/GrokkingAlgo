#include<iostream>

void count(int n){
    std::cout<<n<<std::endl;

    if(n <= 0){
        return;  //<--- base casse 
    }
      else{count(n-1);} // <-- recursive case
    std::cout<<"unstack"<<n<<std::endl;
};

class person {
public:
 const char* name;
 int age;

 person(const char* name, int age){
    this->name = name;
    this->age = age;
 }

 void sayHello() {
    std::cout<<"Hello, my name is "<<name<<" & my age is "<<age<<std::endl;
 }

};

class try1{
public:   // by default members are private 
  int count;
  const char* word;

  try1(const char* name, int num){
    this->count = num;
    this->word = name;
  }

};

int main(){

    person pone("adi",21);
    const char* name = pone.name;
    std::cout<<name<<std::endl;

    try1 t("jj",1);
    int k = t.count;
    std::cout<<k<<std::endl;
    std::cout<<t.word<<std::endl;
    std::cout<<t.count<<std::endl;

    
    const char* msg = "Hello";  // Points to a constant string in memory
int len = strlen(msg);
std::cout<<len<<std::endl;


// Stack Implementation

std::cout<<"STACK implemnetation ====================================="<<std::endl;

count(5);





}