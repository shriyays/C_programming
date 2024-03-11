// printf()

#include<stdio.h>
int main(){

    // int printf(const char* format,...)
    printf("Hello world \n","string 2"); //warning: data argument not used by format string [-Wformat-extra-args]
    printf("Hello world, %s \n", "string 2");

    /*
        FORMAT SPECIFIERS : "%[flags][field-width][.precision] conversion_char"
        %d - intger
        %x - hex
        %o - oct
        %f - float
        %c - char
        %p - pointer
        %lf - double
        %s - string
        %lu - unsigned long
    */

    printf("%d,%d,%d,%d \n",1,2,3);// warning: more '%' conversions than data arguments [-Wformat-insufficient-args]
    printf("%d \n",2.5); // warning: format specifies type 'int' but the argument has type 'double' [-Wformat]
    printf("%5d \n",12); // _ _ _ 1 2
    printf("%5dx \n",7); // _ _ _ _ 7 x
    printf("%-5dx \n",7); // 7 _ _ _ _ x
    printf("%5fx \n",12.4);
    printf("%5fx \n",12.213214);
    printf("%.2fx\n",12.342351);
    printf("%5.2fx \n",12.435151);


    /*
        ESCAPE SEQUENCE:
        \n - new line 
        \t - tab space 
        \r - carriage return 
        \a - audible alert
        \" - quotes
        \' - quotes
        \\ - backslash
        \b - backspace
    
    */
    printf("\n hello \a \n");

    return 0;
}