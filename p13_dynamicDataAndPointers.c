// DYNAMIC DATA MANAGEMENT

// In order to save memory, accessing heap memory.

// memory allocated at runtime

//"stdlib.h" used for the functions

#include<stdio.h>
#include<stdlib.h>

int main()
{

    // 1."malloc()"" - memory allocation - requested size of bytes of memory is allocated at runtime from 
    //                 the heap & a void pointer to that memory location is returned.

    // SYNTAX : void* malloc(N);

    int* ptr = (int*)malloc(sizeof(int)); //allocating memory for int
    printf("p: %p\n",ptr);  //address
    printf("p: %d\n",*ptr); //garbage value

    free(ptr); //freeing the memory at this address in the heap





    // 2."calloc()" - contiguous memory allocation - for arrays - initialises every block to 0 

    //SYNTAX : void* calloc(no of members, N)

    int *p = (int*)calloc(3,sizeof(int));
    for(int i=0;i<3;i++){
        printf("%d\t",p[i]);
    }
    free(p);
    printf("\n");



    // 3."realloc()" - to reallocate memory space to an existing pointer - copies values from the old memory to the new blocks

    int *p = (int*)calloc(3,sizeof(int));
    int *q = (int*)realloc(p,5*sizeof(int)); // two spaces more than before

    //same as free()
    realloc(p,0);
    realloc(q,0);
    return 0;
}
