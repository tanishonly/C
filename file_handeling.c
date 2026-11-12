#include<stdio.h>
int main(void){
    int ch;
    FILE *fp;
    fp = fopen("a.txt","r");
    if(fp == NULL){
        printf("file not found");
        return 1;
    }
    ch = getc(fp);
    while((ch = getc(fp)) != EOF){
    printf("%c",ch);
    }
    fclose(fp);
    printf("\n");
    return 0;
}