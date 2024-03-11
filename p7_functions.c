// FUNCTIONS : 1. standard library functions 2. user-defined functions

// USER DEFINED FUNCTIONS 
// - nesting is not allowed in C
// - every function must be declared before it is called

#include<stdio.h>
int sum(int x,int y);
int convert(int n);
int main()
{
    int s = sum(3,2);
    printf("sum:%d\n",s);
    printf("binary:%d\n",convert(s));
    return 1;
}

int sum(int x,int y){
    return x+y;
}

//recursive function to convert decimal to binary numbers
int convert(int n){
    if(n==0) return 0;
    else
        return (n%2)+10*(convert(n/2));
        
}
