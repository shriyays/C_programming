// 1.SELECTION STRUCTURES

#include<stdio.h>
int main()
{

    int n = 5;

    //to check if n is off or even
    if((n&1)==0)
        printf("EVEN\n");
    else
        printf("ODD\n");


    //to check if n is +ve or -ve
    n>0?printf("+ve\n"):printf("-ve\n");


    //to find types of triangle
    int count =0;
    int a,b,c;
    printf("Enter the 3 sides of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)
        ++count;
    if(b==c)
        ++count;
    if(c==a)
        ++count;
    
    switch(count)
    {
        case 0: printf("Scalene\n");
        break;

        case 1: printf("Isosceles\n");
        break;

        case 3: printf("Equilateral\n");
        break;

    }

    return 0;
}