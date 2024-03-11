// POINTERS

// variables that contain address of other vairables


#include<stdio.h>
int main()
{
    int *p, a;
    a=10;
    p=&a;
    printf("%d,%p\n",*p,p);
    printf("%d,%p\n",a,&a);

    printf("%p\n",p+1); //int is 4 bytes

    printf("%p\n",(char*)p+1); //char is 1 byte - type casting explicitly


    
    return 0;
}