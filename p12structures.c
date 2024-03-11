// STRUCTURES - user defined datatypes

#include<stdio.h>

//declaration - no memory is allocated
struct Student{
    //data members
    int roll_no;
    char name[20];
    char grade;

};

struct meh{
    int x;
    struct Student s; //nested structures
}m={3}; //global scope

typedef struct meh meh_t;


int main()
{
    //structure variables
    struct Student s; //memory is allocated with undefined values
    //printf("Structure : %d\n",s);
    //warning :  format specifies type 'int' but the argument has type 'struct Student'
    printf(" Roll no: %d\n",s.roll_no);

    //initialisation
    s.roll_no=333;
    struct Student s0 = {234,"Leo",'S'};
    printf("Roll no : %d, Name : %s, Grade : %c\n",s0.roll_no,s0.name,s0.grade);


    meh_t m0;
    struct meh m1;

    return 0;
}