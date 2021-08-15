// C++ program for insertion sort
#include <bits/stdc++.h>
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int arr_size){
    int elem;
    int a, b;
        ;
    for (a = 1; a < arr_size; a++)
    {
        elem = arr[a];
        b = a - 1;
 
        while (b >= 0 && arr[b] > elem)
        {
            arr[b + 1] = arr[b];
            b = b - 1;
        }
        arr[b + 1] = elem;
    }
}
 
void printArray(int arr[], int arr_size){
    int it;

    for (it = 0; it < arr_size; it++)
        std::cout << arr[it] << " ";
    std::cout << std::endl;
}
 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, arr_size);
    printArray(arr, arr_size);
 
    return 0;
}
