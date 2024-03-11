//STRINGS 

// character sequence that ends with '\0'
// char str[];

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]={'a','b','a','\0'};
    printf("%s\n",a);

    char b[]="aba";
    printf("%s\n",b);

    char str[]="hello world";
    printf("%lu\n",strlen(str));

    char x[strlen(str)];
    strcpy(x,str);
    printf("%s\n",x);

    strcat(a,b);
    printf("%s\n",a);
    printf("%p\n",strchr(a,'o'));

    char aa[]="aba";
    char bb[]="ABA";
    /*
    printf("%d\n",strcmp(aa,bb));
    printf("%d\n",strcmpi(aa,bb));*/
    printf("%d\n",strncmp(aa,bb,3));

    return 0;
}