#include<iostream>

int main(){

    std::unordered_map<const char* ,double> book; 

    book["apple"] = 0.67;

    std::cout<<book["apple"]<<std::endl;

    book["banana"] = 0.67;
    std::cout<<book["banana"]<<std::endl;

    book["peach"] = 0.70;


    for(auto n: book){
        std::cout<<n.first<<" : "<<n.second<<std::endl;
    }

    float x = 0.67f;
    for (auto n : book){
        if(x == book[n.first]){
            std::cout<<n.first<<" : "<<n.second<<std::endl;
        }
    }




}