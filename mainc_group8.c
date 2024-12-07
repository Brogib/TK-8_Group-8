#include <stdio.h>
void multiply(int *a, int *b) {
    printf("%d\n", (*a) * (*b));
}
void divide(int *c, int *d) {
    if (*d != 0) {
        printf("%d\n", (*c) / (*d));
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main(){
    int a, b, i, n;
	printf("==CALCULATOR==\n");
    printf("Please input (1 for addition, 2 for substraction, 3 for multiplication and 4 for division)\n");
    scanf("%d", &i);

    printf("Enter 2 integer number:");
    scanf("%d %d", &a, &b);
    if (i == 1){
        printf("addition for %d and %d = %d", a, b, a+b);
    }
    else if (i==2){
        printf("substraction for %d and %d = %d", a, b, a-b);
    }
    else if (i==3){
		printf("Multiplication of %d and %d = ", a, b);
		multiply(&a, &b);
	}
	else if (i==4){
		printf("Division of %d and %d = ", a, b);
		divide(&a, &b);
	} 
	else{
		printf("Invalid input. Please select a valid operation.\n");
	}
    return 0;
}
