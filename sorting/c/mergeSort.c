#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right){
    int left_it, right_it, it;

    int left_size = mid - left + 1;
    int right_size = right - mid;

    int left_arr[left_size];
    int right_arr[right_size];
    
    for (it = 0; it < left_size; it++){
        left_arr[it] = arr[left + it];
    }
    for (it = 0; it < right_size; it++){
        right_arr[it] = arr[mid + 1 + it];
    }
    
    it = 0;
    left_it = 0;
    right_it = 0;
    while (left_it < left_size && right_it < right_size){
       if (left_arr[left_it] <= right_arr[right_it]){
           arr[it] = left_arr[left_it];
           left_it++;
       } else {
           arr[it] = right_arr[right_it];
           right_it++;
       }
       it++;
    } 

    while (left_it < left_size){
       arr[it] = left_arr[left_it];
       left_it++;
       it++;
    }
    while (right_it < right_size){
       arr[it] = right_arr[right_it];
       right_it++;
       it++;
    }
}


void mergeSort(int arr[], int left, int right){
    //int mid;

    if (left < right){
        int mid = left + (right - left) / 2;
   
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printArr(int arr[], int arr_size){
    int i = 0;

    //printf("%s", "[");

   // printf ("%d", arr[i]);
    for(i = 0; i < arr_size; i++){
        printf("%d ", arr[i]);
    }

    //printf("%s", "]");
}


int main(){
    int arr[] = { 3, 2, 1, 4 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Initial array: ");
    printArr(arr, arr_size);  
    printf("\n");

    mergeSort(arr, 0, arr_size - 1);
    
    printf("Sorted array: ");
    printArr(arr, arr_size);  
    printf("\n");

    return 0;
}
