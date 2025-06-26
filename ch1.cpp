// // #include<iostream>

// // // using namespace  std;

// // void returnArr(const char* arr ){
// //     std::cout<<arr<<std::endl;
// // };

// // template <size_t N>
// // void binarySearch(int (&list)[N], int target){

// //     int size = N;

// //     for (int i = 0; i < size -1; i++){
// //         for (int j = 0; j < size - i - 1; j++){
// //             if (list[j] > list[j+1]){
// //                 int temp = list[j];
// //                 list[j]=list[j+1];
// //                 list[j+1]=temp;
// //             } 
// //         } 
// //     }

// //     int low = 0;
// //     int high = size -1;
// //     while (low <= high ){
// //         int mid = (low+high)/2;
// //         if(list[mid] == target ){
// //             std::cout<<"element found :"<<target<<" at index: "<<mid<<std::endl;
// //             break;
// //         } 
// //         else if (list[mid]<target){
// //             low = mid + 1;
// //         }
// //         else {
// //             high = mid - 1;
// //         }
// //     }

// // std::cout<<"element not found in the list"<<std::endl;


// // };





// // int main(){
// //     std::cout<<"ch1"<<std::endl;

// //     int llist[] = { 1,5,6,7,99};

// //     const char* a1 = "hiiii a1";
// //     returnArr(a1);


// //     int uiii[] = {9,9,7,8,6,5};


// //     binarySearch(llist,00);
// //     binarySearch(uiii,0);
// //     binarySearch(uiii,9);


// // }






// #include <iostream>
// #include <vector>

// int binary_search(const std::vector<int>& list, int item) {
//     int low = 0;
//     int high = list.size() - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int guess = list[mid];

//         if (guess == item) {
//             return mid;
//         }
//         if (guess > item) {
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return -11;  // None equivalent in C++
// }

// int main() {
//     std::vector<int> my_list = {1, 3, 5, 7, 9};

//     std::cout << binary_search(my_list, 8) << std::endl;  // -1
//     std::cout << binary_search(my_list, 4) << std::endl;  // -1
//     std::cout << binary_search(my_list, 5) << std::endl;  // 2
//     std::cout << binary_search(my_list, 7) << std::endl;  // 3
//     std::cout << binary_search(my_list, 3) << std::endl;  // 1
//     std::cout << binary_search(my_list, 1) << std::endl;  // 0

//     int midd = 1 + 4 / 2;
//     std::cout << midd << std::endl;  // Outputs: 3

//     return 0;
// }



#include <iostream>
#include <vector>
#include <cstdio>  // for snprintf

const char* binary_search(const std::vector<int>& list, int item) {
    static char result[50];  // static buffer to hold the return string

    int low = 0;
    int high = list.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int guess = list[mid];

        if (guess == item) {
            std::snprintf(result, sizeof(result), "Found at index %d", mid);
            return result;
        }
        if (guess > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    std::snprintf(result, sizeof(result), "Not found");
    return result;
}

int main() {
    std::vector<int> my_list = {1, 3, 5, 7, 9};

    std::cout << binary_search(my_list, 8) << std::endl;  // Not found
    std::cout << binary_search(my_list, 5) << std::endl;  // Found at index 2
    std::cout << binary_search(my_list, 1) << std::endl;  // Found at index 0
    std::cout << binary_search(my_list, 9) << std::endl;  // Found at index 4

    return 0;
}
