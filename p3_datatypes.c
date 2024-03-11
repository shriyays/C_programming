#include<stdio.h>

#include<limits.h>
#include<float.h>

int main()
{
    int z=12;
    printf("z=%d, size of z=%lu bytes\n",z,sizeof(z));
    printf("size of void = %lu bytes\n",sizeof(void));
    printf("size of char = %lu bytes\n",sizeof(char));
    printf("size of int = %lu bytes\n",sizeof(int));
    printf("size of float = %lu bytes\n",sizeof(float));
    printf("size of double = %lu bytes\n",sizeof(double));

    
    printf("%d,%d\n",INT_MAX,INT_MIN);
    printf("%.3f,%.3f\n",FLT_MAX,FLT_MIN);
    printf("%d,%d\n",CHAR_MAX,CHAR_MIN);

    char ch='a';
    printf("char:%c, ascii : %d\n",ch,ch);
    char t=123;
    printf("char:%c, ascii : %d\n",t,t);
    int x = 13;
    printf("value: %d, %o, %x\n",x,x,x);
    
    int ret=printf("asjhdas\n");
    printf("%d\n",ret);

    
    
    return 0;
}