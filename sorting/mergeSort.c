#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], left, int middle, int right){
    int i;

    int it = 0;
    int leftIt = 0;
    int rightIt = 0;

    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    int leftArr[leftSize];
    int rightArr[rightSize];
    

    if (rightSize > leftSize){
        for (i = 0; i < leftElems; i++){
            leftArr[i] = arr[left + i];
            rightArray[i] = arr[middle + 1 + i]
        }
        i++;
        leftArray[i] = arr[left + i];

    } else if (leftSize > rightSize){
        for (i = 0; i < rightElems; i++){
            leftArr[i] = arr[left + i];
            rightArray[i] = arr[middle + 1 + i]
        }
        i++;
        rightArray[i] = arr[middle + 1 + i];

    } else {
        for (i = 0; i < leftSize; i++){
            leftArr[i] = arr[left + i];
            rightArray[i] = arr[middle + 1 + i]
        }
    }
   
   while (leftIt < leftSize && rightIt < rightSize){
       if (leftArray[leftIt] <= rightArray[rightIt]){
           arr[upperIt] = leftArray[leftIt];
           leftIt++;
       } else {
           arr[it] = arrayRight[rightIt];
           rightIt++;
       }
       it++;
   } 

   // why dis ???
   while (leftIt < leftSize){
       array[it] = leftArray[leftIt]
       leftIt++;
       it++;
   }
   while (rightIt < rightSize){
       arr[it] = rightArray[rightIt];
       rightIt++;
       it++;
   }

