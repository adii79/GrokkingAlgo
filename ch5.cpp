#include<iostream>

int main(){

    std::unordered_map<const char* ,double> book; 

    book["apple"] = 0.67;

    std::cout<<book["apple"]<<std::endl;


}