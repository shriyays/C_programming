// ARRAYS 

/*
    - linear data structures
    - homogenous data
    - continuous memory of data
    - memory is allocated at compile time and cannot be changed at run time
    - accessing out of bound elements can crash the system or cause undefined behaviour

*/

#include<stdio.h>
int main()
{
    int arr[5]={1, 2, 3};
     //last value = 0

    printf("%p\n",arr);//starting address of the array

    for(int i = 0; i<(sizeof(arr)/sizeof(arr[0]));i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}