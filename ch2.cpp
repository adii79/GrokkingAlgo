#include<iostream>
#include<vector>


int smallest(std::vector<int> arr){

    int smallest = arr[0];
    int smallestIndex = 0;
   for(int i = 1; i < arr.size() ; i++){
    if (arr[i] < smallest){
        smallest = arr[i];
        smallestIndex = i;
    }
   }
   return smallestIndex;
};

std::vector<int> selectSort(std::vector<int> arr){

    std::vector<int> newArr ;

    for (int i = 0; arr.size(); i++){
        int small = smallest(arr);
        newArr.push_back(arr[small]); 
        arr.erase(arr.begin() + small);        // remove it from original array
    }
    return newArr;


};






// Use template to prevent array from decaying to pointer and preserve its size at compile time.
// not arry converted to pointe so size in byte not int(count)
template<typename T, size_t N>    // we need to 
int getArraySize(T (&arr)[N]) {
    return N;
};



int smallestCstyle(int arr[], int size ) {
    int smallest = arr[0];
    int smallestIndex = 0;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }  return smallestIndex;
};

void selectSortCstyle(int InputArray[], int OutputArr[], int size){
     
    int currentSize = size;

    for(int i = 0; i < size ; i++){
      int small = smallestCstyle(InputArray,currentSize);
      OutputArr[i] = InputArray[small];
      for( int j = small ; j < currentSize -1 ; j++){
        InputArray[j] = InputArray[j+1];
      }
      currentSize--;
    }


};


void selectionSortkk(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        std::swap(arr[i], arr[minIndex]);
    }
}






int main(){

    std::vector<int> arrayV = {1,2,3,4,5,0};  // inplementation of array using the vector
    
    int array[6] = {1,2,3,0,4,5};   // cstyle array
    std::cout<<array<<std::endl;
    std::cout<<array[0]<<std::endl;

    std::cout<<"element of array using vector "<<arrayV[0]<<std::endl;



    // multidimentional Array 

    int arrayMalti[2][3] = {
        {1, 2, 3},
        {4,5,6}
    };



    std::cout<<arrayMalti[1][2]<<std::endl;
    std::cout<<arrayMalti<<std::endl;
    std::cout<<arrayMalti[0][2]<<std::endl;

    int i = arrayV.size();
    std::cout<<i<<std::endl;
    int arraySize = sizeof(array) / sizeof(array[0]);
    std::cout<<arraySize<<std::endl;


    std::cout<<"==================="<<std::endl;

    int a = 10;
    double b = 1.10f;
    short s = 1000;

    int size = sizeof(a);
    std::cout<<size<<std::endl;
    size = sizeof(b);
    std::cout<<size<<std::endl;
    size = sizeof(s);
    std::cout<<size<<std::endl;

    std::cout<<"==========//   SELECTION SORT    //========="<<std::endl;

   int small = smallest(arrayV);
   std::cout<<small<<std::endl;


    int arra1[] = {1,2,3,0,4,5};   // cstyle array
    int sizeOfArra1 = sizeof(arra1)/sizeof(arra1[0]);
   std::cout<<smallestCstyle(arra1,sizeOfArra1)<<std::endl;
   std::cout<<smallestCstyle(arra1,getArraySize(arra1))<<std::endl;    
//    std::cout<<smallestCstyle(arrayV,getArraySize(arrayV))<<std::endl;    


std::vector<int> selectArray = {2,1,4,6,7,9,0};

std::vector<int> out = selectSort(selectArray);

std::cout<<"[";
for (int i = 0; i < out.size(); i++){
    std::cout<<out[i]<<" ";
}
std::cout<<"]"<<std::endl;





// int selectsortCstyleArr[] = {3,1,4,6,7,2,0};
// selectSortCstyle(selectsortCstyleArr,selectsortCstyleArr,getArraySize(selectsortCstyleArr));

// std::cout<<"[";
// for(int i = 0; i < getArraySize(selectsortCstyleArr); i++){
//     std::cout<<selectsortCstyleArr[i];
// }
// std::cout<<"]"<<std::endl;
// std::cout<<smallestCstyle(selectsortCstyleArr,getArraySize(selectsortCstyleArr))<<std::endl;


    int selectsortCstyleArr[] = {3, 1, 4, 6, 7, 2, 0};
    int size1 = getArraySize(selectsortCstyleArr);
    int outputArr[getArraySize(selectsortCstyleArr)];

    selectSortCstyle(selectsortCstyleArr, outputArr, size1);

    std::cout << "[";
    for (int i = 0; i < size1; i++) {
        std::cout << outputArr[i] << " ";
    }
    std::cout << "]" << std::endl;

}