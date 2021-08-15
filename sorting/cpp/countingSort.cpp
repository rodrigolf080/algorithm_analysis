#include <algorithm>
#include <iostream>
#include <vector>

void countingSort(std::vector<int>& arr){
    int max = *std::max_element(arr.begin(), arr.end());
    int min = *std::min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    std::vector<int> count(range), output(arr.size());
    
    int it;
    // store the count of each unique element
    for (it = 0; it < arr.size(); it++){
        count[arr[it] - min]++; 
    }
    // count occurence of each element
    for (it = 1; it < count.size(); it++){
        count[it] += count[it - 1]; 
    }
    // draw new array sorted according to occurence of elements
    for (it = arr.size() - 1; it >= 0; it--){
        output[count[arr[it] - min] - 1] = arr[it];
        count[arr[it] - min]--;
    }
    // get sorted array to main array
    for (it = 0; it < arr.size(); it++){
        arr[it] = output[it]; 
    }
}


void printArray(std::vector<int>& arr){
    int it;
    for (it = 0; it < arr.size(); it++){
        std::cout << arr[it] << " ";
    }
    std::cout << std::endl;
}
 
int main(){
    std::vector<int> arr = { -5, -10, 0, -3, 8, 5, -1, 10 };
    
    countingSort(arr);
    
    printArray(arr);
    
    return 0;
}
