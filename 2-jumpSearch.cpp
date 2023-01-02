//
// Created by kaung007 on 12/29/22.
//

#include <stdio.h>
#include <math.h>

int min(int first, int second){
    if(second > first) return first;
}

int jumpSearch(int arr[], int size, int key){

    int step = sqrt(size);

    int prev = 0;

    while(arr[min(step, size) - 1] < key){
        prev = step;

        printf("Step %d, Array Data: %d,\n",step,arr[min(step, size) - 1]);
        step = step + sqrt(size);

        printf("Previous number %d\n",prev);

        if(prev >= size) return -1;
    }

     for (int i = prev; i < step; i++)
     {
         printf("Linear search %d\n", arr[i]);
     	if(arr[i] == key) return i;
     }

    return -1;

}


int main(){

    int arr[] = {1,3,5,6,7,8,9,12,13,25,28,29,30,35,39,40};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int toFind = 28;

    int indexNum = jumpSearch(arr, size, toFind);

    if(indexNum >= 0) printf("%d number is at %d index.\n",toFind,indexNum);
    else printf("Number is not find in this array!!\n");

    return 0;
}




