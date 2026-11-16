#include<stdio.h>
int main(void){
    int a = 10 , b = 10;
    int* p1 = &a; // uding (&) to store a variable in a pointer 
    int* p2 = &b;
    int c = *p1 + *p2; // using (*) to acces the value in that pointer 
    printf("sun of a and b using pointer is %d\n",*p1 + *p2);
    printf("the memory adress of a and b is\na=%p\nb=%p\n",p1,p2); // using (%p) for pointer and writing pointer nname directly for memory location 
    return 0;
}