#include<iostream>


int recursiveSum(std::vector<int> arr){
    if(arr.size() == 0){
        return 0;
    } 
    int a = arr[0];
    arr.erase(arr.begin());
    return a + recursiveSum(arr);
};

int recursiveSumCstyleArr( int arr[], int size){
    if(size == 0){
        return 0;
    }
    return arr[0]+recursiveSumCstyleArr(arr+1,size-1);       // arr+1 are effective shifting index to arr[0] to right mean now arr[0] = arr[1] 
    
};

int countItemInlist(std::vector<int> arr){
    if( arr.size() == 0 ){ // to find the largest index use the arr.size()-1
        return 0;
    }
    arr.erase(arr.begin());
    return 1 + countItemInlist(arr);
};

int maxNumInList(std::vector<int> arr){
    if( arr.size() == 0){
        return 0;
    }
    int a = arr[0];
    arr.erase(arr.begin());
    return a > maxNumInList(arr) ? a : maxNumInList(arr);    // ternary operator
    
};

int binarySearch(std::vector<int> arr, int target) {
    if (arr.empty()) return -1;  // Base case: empty list

    int mid = arr.size() / 2;

    if (arr[mid] == target)
        return mid;  // Base case: found

    if (arr[mid] > target) {
        return binarySearch(std::vector<int>(arr.begin(), arr.begin() + mid),target);  // Left half
    } else {
        int result = binarySearch(std::vector<int>(arr.begin() + mid + 1, arr.end()), target);  // Right half
        return (result == -1) ? -1 : mid + 1 + result;  // Adjust index
    }
};




int binarySearch1(std::vector<int> arr, int target) {
    if (arr.empty()) return -1;  // Base case: empty list

    int mid = arr.size() / 2;

    if (arr[mid] == target)
        return mid;  // Base case: found

    return (arr[mid] > target)
        ? binarySearch(std::vector<int>(arr.begin(), arr.begin() + mid), target)
        : (
            // inline ternary inside the return
            binarySearch(std::vector<int>(arr.begin() + mid + 1, arr.end()), target) == -1
            ? -1
            : mid + 1 + binarySearch(std::vector<int>(arr.begin() + mid + 1, arr.end()), target)
        ); 


};


// int binaryUsingRecursion(std::vector<int> arr, int a) {
//     if (arr.empty()) return -1;

//     int mid = arr.size() / 2;

//     if (arr[mid] == a) {
//         return mid;
//     }

//     std::vector<int> left(arr.begin(), arr.begin() + mid);
//     std::vector<int> right(arr.begin() + mid + 1, arr.end());

//     if (arr[mid] > a) {
//         return binaryUsingRecursion(left, a);
//     } else {
//         int result = binaryUsingRecursion(right, a);
//         return result == -1 ? -1 : mid + 1 + result;
//     }
// };


// int binarySearch(std::vector<int> arr, int target) {
//     if (arr.empty()) return -1;

//     int mid = arr.size() / 2;

//     if (arr[mid] == target) return mid;

//     if (arr[mid] > target) {
//         return binarySearch(std::vector<int>(arr.begin(), arr.begin() + mid), target);  // <-- FIXED
//     } else {
//         int res = binarySearch(std::vector<int>(arr.begin() + mid + 1, arr.end()), target);  // <-- FIXED
//         return (res == -1) ? -1 : mid + 1 + res;
//     }
// };


std::vector<int> quickSort(std::vector<int> arr){
    if (arr.size()<2){
        return arr;
    } 
    else{
        auto pivot = arr[0];
        std::vector<int> less;
        std::vector<int> greater;
        for(int i = 1; i < arr.size(); i++){
            if( arr[i] > pivot ){
                greater.push_back(arr[i]);
            }
            else{
                less.push_back(arr[i]);
            }
        }
    std::vector<int> sorted_left = quickSort(less);
    std::vector<int> sorted_right = quickSort(greater);

    // Manually build the result
    std::vector<int> result;
    for (int x : sorted_left) result.push_back(x);
    result.push_back(pivot);
    for (int x : sorted_right) result.push_back(x);

    return result;

    }
};










int main(){
    std::vector<int> arr = {3,3,2,2,5};
    int mid = (arr.size()/2); 

    std::cout<<mid<<std::endl;
    std::cout<<arr.size()<<std::endl;
    std::cout<<recursiveSum(arr)<<std::endl;
    int att[] = {3,3,2,2,5};
    std::cout<<recursiveSumCstyleArr(att,5)<<std::endl;
    std::cout<<countItemInlist(arr)<<std::endl;
    std::cout<<maxNumInList(arr)<<std::endl;
    arr = {6};
    std::cout<<maxNumInList(arr)<<std::endl;
    std::cout<<arr.size()<<std::endl;
    arr={1,4,5,6,8,9};
    std::cout<<binarySearch(arr,5)<<std::endl;
    arr={1,4,5,6,8,9,9};
    std::cout<<binarySearch(arr,9)<<std::endl;
    arr={1,4,5,6,8,9,99};
    std::cout<<arr.size()/2<<std::endl;
    std::cout<<binarySearch(arr,9)<<std::endl;
    std::cout<<binarySearch(arr,99)<<std::endl;
    std::cout<<"======================"<<std::endl;
    std::cout<<binarySearch1(arr,9)<<std::endl;
    std::cout<<binarySearch1(arr,99)<<std::endl;

    std::cout<<"=========== QUICK SORT ==========="<<std::endl;
    std::vector<int> arr1q = {2};
    auto out = quickSort(arr1q);
    for(int i = 0; i < arr1q.size(); i++){
        std::cout<<out[i];
    }
    std::cout<<std::endl;
    arr1q = {7,4,3,7,9,0,4,5,2,1};
    out = quickSort(arr1q);
    for(int i = 0; i < arr1q.size(); i++){
        std::cout<<out[i]<<" ";
    }
     std::cout<<std::endl;


     // range based loop for arr in c++ 11
     for (int x : arr1q) {
    std::cout << x << " ";
}
std::cout<<std::endl;


std::vector<int> mul2;
std::vector<int> mul3;
int sizex = arr1q.size();
std::cout<<sizex<<std::endl;

for (int x: arr1q){
    int b = x;
    mul2.push_back(2*b);
    mul3.push_back(3*b);
    std::cout <<" ll "<<b;
}
std::cout<<std::endl;


for(int x: mul2){
    std::cout <<x<< " ";
}
std::cout<<std::endl;

for(int x: mul3){
    std::cout <<x<< " ";
}
std::cout<<std::endl;





}