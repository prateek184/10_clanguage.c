#include<stdio.h>
int main(){
    FILE *fptr; 
    fptr = fopen("india.txt","a");
    int num =512;
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}