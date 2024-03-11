#include<stdio.h>
int main()
{
    int arr[3][2]={11,22,33,44,55,66};//mxn
    int size = sizeof(arr); //6x4
    int rows = sizeof(arr)/(2*sizeof(int)); //-> n : col size 
    //m
    for(int i =0;i<3;i++){
        for(int j=0;j<2;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }

    
    
    return 0;
}