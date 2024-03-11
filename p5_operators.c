#include<stdio.h>
int main()
{
    int n;

    //BITWISE OPERATORS : & , |, ^, << left shift, >> right shift, ~ 

    //left shit << : shifts the bits to the left by 3 places by appending 0's hence, multiples 1 by 2^3 i.e. 8
    int i = (1<<3);
    printf("%d\n",i);

    //right shift >> : shifts the bits to the right by 1 place by removing 1 hence, dividing it by 2^1
    i = 8>>1;
    printf("%d\n",i);



    //ARITHMETIC OPERATORS : +, -, *, /, %, ++, --, {shorthand operators}

    //datatypes are always converted to the higher data type in times of conflict
    //printf("%d",4/2.0); //warning: format specifies type 'int' but the argument has type 'double' 
    printf("%lf\n",4/2.0);



    //LOGICAL OPERATORS : &&, ||, ! - 1:true , 0:false - uses short circuit evaluation
   
    n= 0 && (2||0);
    printf("%d\n",n);
    //n= 0 && (2|0); // warning: use of logical '&&' with constant operand
    n = 10 || (2||0);
    printf("%d\n",n);


    //CONDITIONAL OPERATOR - TERNARY OPERATOR : "<condition>?<if true>:<if false>"
    printf("%d\n",2?11:00);


    //SHORTHAND OPERATORS : +=, -=, *=, /=, %=

    //INCREMENT OPERATORS : pre, post : ++a, a++
    // post : makes changes for the next time a is used
    // pre : makes changes on spot
    int a, b, c;
    a=b=c=3;
    printf("c:%d\n",c);
    c+=1; printf("%d\n",c); //4
    c++;  //5
    printf("%d\n",c++);  
    ++c;  //6
    printf("%d\n",++c);  
    c--;  //5
    printf("%d\n",c--);  
    --c;  //4
    printf("%d\n",--c);  

    printf("a:%d\n",c);
    a+=1; printf("%d\n",a); //4
    printf("%d\n",a++);  //4 
    printf("%d\n",++a);  //6
    printf("%d\n",a--);  //6
    printf("%d\n",--a);  //4


    a=b=4;
    c = ++a + a++; printf("c:%d\n",c); 
    c = ++a + b++; printf("c:%d\n",c);
    c = a * a++; printf("c:%d\n",c);
    c = a * a; printf("c:%d\n",c);

    return 0;
}