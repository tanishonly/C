#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a[10];
    int target;
    int size = sizeof(a) / sizeof(a[0]);
    printf("Array = ");
    for (int i=0; i<10; i++){
        a[i] = rand()%100;
        printf("%d ",a[i]);
    }
    printf("\nsize of array is %d\n",size);
    printf("\nEnter target value: ");
    scanf("%d",&target);
    printf("\n");
    for (int i=0; i<10; i++){
        for (int j=i+1; j<size; j++){
            if (a[i] + a[j] == target){
                printf("%d and %d sum and make %d\n",i,j,a[i]+a[j]);
                return 0;
            }
        }
    }
    printf("\n");
    printf("no value sum = %d\n",target);
    return 0;
}