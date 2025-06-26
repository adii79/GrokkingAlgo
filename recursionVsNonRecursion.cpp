#include<iostream>

void count(int n);


int main(){
    count(4);

}

// void count(int n){
//     std::cout<<n<<std::endl;

//     if(n >= 0){count(n-1);
//     }
//     return;
// }


void count(int n){
    std::cout<<n<<std::endl;

    if(n <= 0){
        return;  //<--- base casse 
    }
      else{count(n-1);} // <-- recursive case
    std::cout<<"unstack"<<n<<std::endl;
}