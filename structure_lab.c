#include <stdio.h>
struct person
{
    short int age;
    char name[20];
};
int main(void)
{
    struct person tanish;

    printf("enter your name: ");
    scanf("%s", tanish.name);

    printf("Enter your age: ");
    scanf("%hd", &tanish.age);
    printf("your name is %s\nage = %hd\n", tanish.name, tanish.age);

    return 0;
}
