// 2. LOOPING STRUCTURES : while, do-while, for



#include<stdio.h>
int main()
{
    
    // i) GCD using while loop
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    while(a!=b){
        if(a>b)
            a-=b;
        else 
            b-=a;
    }
    printf("GCD:%d\n",a);

            //or
    int rem;
    rem = a%b;
    while(rem!=0){
        a=b;
        b=rem;
        rem=a%b;

    }
    printf("GCD:%d\n",b);



    // ii) sum of numbers using for loop
    int i, sum; int n=5;
    //sum=0;
    for(int j=1,i=0,sum=0; i<=5; ++i,j++){
        sum+=i;
        printf("j:%d\n",j);
        printf("sum:%d\n",sum);
    }
    //printf("Sum:%d\n",sum); //garbage value as it was initialised inside the loop and used
    //printf("j:%d\n",j); //error: use of undeclared identifier 'j' - declared inside loop cannot be used outside the same loop


    // iii) sum of digits using do-while loop
    sum=0;
    int z = 1234;
    do{
        sum+=z%10;
        z/=10;

    }
    while(z);
    printf("SUM : %d\n",sum);

    return 0;
}