#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("gangwar.txt", "r");
    if(ptr == NULL){
        printf("the fil does not exist sorry!\n");
    }
    else{

    
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
}
    return 0;
}