#include <stdio.h>
int main() {
float num1, num2;
int choice;
printf("Calculator:\n Select Choice Between 1-4 \n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
printf("Enter Your Choice: ");
scanf("%d", &choice);
printf("Enter Your First Number!: ");
scanf("%f", &num1);
printf("Enter Your Second Number!: ");
scanf("%f", &num2);

switch(choice){
    case 1: printf("Addition: %f + %f = %f", num1, num2, num1+num2);
    break;
    case 2: printf("Subtraction: %f - %f = %f", num1, num2, num1 - num2);
    break;
    case 3: printf("Multiplication: %f x %f = %f", num1, num2, num1*num2);
    break;
    case 4: printf("Division: %f / %f = %f", num1, num2, num1/num2);
    break;
    default: printf("Invalid Choice! (Select Between 1-4)");
}
return 0;
}
