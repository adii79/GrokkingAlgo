#include<iostream>


//Binary search
int BinarySearch(std::vector<int> arr, int num){

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start+end)/2;
        int guess = arr[mid];

        if( guess == num){
            return mid;
        }
        if ( guess > num){
            end = mid - 1;
        }
        else {
             start = mid + 1;
        }

    }
    
    // return -1;
};


 //Selection Sort

 // smallest element 
 int smallestElement(std::vector<int> arr){
    int smallestIndex = 0;
    int smallest = arr[smallestIndex] ;
   for(int i = 0; i < arr.size(); i++){
    if(arr[i]< smallest){
        smallest = arr[i];
        smallestIndex = i;
    }
   }
   return smallestIndex;
 };




 std::vector<int> selectionSort(std::vector<int> arr){
    std::vector<int> output;
    while(!arr.empty()){
        int small = smallestElement(arr);
        output.push_back(arr[small]);
        arr.erase(arr.begin() + small);
    }

    return output;
 };



 //Recursion 
  int factorial(int num){
    if( num < 2){
        return 1;
    }
    else {
        return num * factorial(num -1);
    }
  };



  // quick sort 

std::vector<int> quickSort(std::vector<int> arr){
    if(arr.size()<2){
        return arr;
    }
    else{
        int pivot = arr[0];
    std::vector<int> smallest;
    std::vector<int> largest;
    for(int i =1; i < arr.size(); i++){
        if(arr[i] < pivot){
            smallest.push_back(arr[i]);
        }
        else {
            largest.push_back(arr[i]);
        }
    }
    
    std::vector<int> sortedSmallest = quickSort(smallest);
    std::vector<int> sortedLargest = quickSort(largest);

    std::vector<int> result;
    // for(int i: sortedSmallest){
    //     result.push_back(i);
    // }
    // result.push_back(pivot);
    // for(int i: largest){
    // result.push_back(i);
    // }

    //   std::vector<int> result;
    result.insert(result.end(), sortedSmallest.begin(), sortedSmallest.end());
    result.push_back(pivot);
    result.insert(result.end(), sortedLargest.begin(), sortedLargest.end());

    return result;
}
};




void findHashMap(std::unordered_map<const char*, int> hashMap, const char* find){
    if(hashMap.find(find) != hashMap.end()){
        std::cout<<"found it :"<<hashMap[find];
    } 
    else{
        std::cout<<"Not found it!";
    }
};











int main(){

    // Binary Search 
    std::vector<int> arr = {1,4,6,7,10,80};
    int a = BinarySearch(arr, 4);
    std::cout<<a<<std::endl;
    a = BinarySearch(arr, 10);
    std::cout<<a<<"\n";

    // select sort
    arr = {4,6,8,2,5,0};
    arr = selectionSort(arr);
    for(int i:arr){
        std::cout<<i;
    }
    std::cout<<"\n";

    // arr = {4,1,2,0,8};
    // int i = smallestElement(arr);
    // std::cout<<"smallest index "<<i;


    // recursion 
    a = factorial(3);
    std::cout<<a<<"\n";

    // recursion 
    a = factorial(4);
    std::cout<<a<<"\n";

    // recursion 
    a = factorial(5);
    std::cout<<a<<"\n";

    arr = {4,6,8,2,5,0};
    arr = quickSort(arr);
    for(int i: arr){
        std::cout<<i;
    }
    std::cout<<"\n";


    //Hash map
    std::unordered_map<const char* , int> products;
    products["leche"] = 40;
    products["manzanas"] = 100;
    products["pan"] = 50;

    for( auto i: products){
        std::cout<<i.first<<" "<<i.second<<" ,";
    }
    std::cout<<"\n";

    findHashMap(products, "pan");
    std::cout<<"\n";


    std::cout<<products["leche"]<<"\n";
    // std::cout<<products[50]"\n";




}
