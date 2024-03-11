#include<stdio.h>
int main()
{
    // "scanf()"

    //int scanf(const char *format,.....)
    // & -> address of operator - to take input
    int a;
    int x = scanf("%d",&a);
    printf("%d,%p\n",a,&a);
    printf("%d\n",x);


    //putchar - unformatted output function - takes one char at a time - keeps char in buffer until '\n'

    char ch; int i;
    putchar(65);
    putchar('a');
    putchar('\n');
    //putchar('ab'); // warning: multi-character character constant - only b gets printed
    //putchar('asjkdh'); //warning: multi-character character constant - only h gets printed
    //putchar("ab"); //warning
    i=putchar('a');

    fflush(stdin);
    //getc() - from file streams
    printf("\n");
    char charrr=getc(stdin);
    printf("Char : ");
    putc(charrr,stdout);

    return 0;
}