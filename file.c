#include<stdio.h>
int main(void){
    FILE *fp;
    char ch;
    fp = fopen ("data.txt","r");
    if(fp == NULL){
        printf("file not found");
        return 1;
    }
    while((ch=fgetc(fp))!= EOF){
        printf("%c",ch);
        fclose(fp);
    }
    return 0;
}