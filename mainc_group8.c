#include <stdio.h>
int main(){
    int a, b, i;
    printf("Please input (1 for addition, 2 for substraction, 3 for multiplication and 4 for division)\n");
    scanf("%d", &i);

    printf("Enter 2 integer number:");
    scanf("%d %d", &a, &b);
    if (i == 1){
        printf("addition for %d and %d = %d\n", a, b, a+b);
    }
    else if (i==2){
        printf("substraction for %d and %d = %d\n", a, b, a-b);
    }
    return 0;
}