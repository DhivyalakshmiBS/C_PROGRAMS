#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
float divide(int a, int b){
    if(b==0){
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
    else{
        return (float)a/b;
    }
}
int main(){
    int num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter an operator (+,-,*,/):");
    scanf(" %c",&operator);
    printf("Enter second number: ");
    scanf("%d",&num2);
    switch(operator){
        case '+':
            printf("Result: %d\n",add(num1,num2));
            break;
        case '-':
            printf("Result: %d\n",subtract(num1,num2));
            break;
        case '*':
            printf("Result: %d\n",multiply(num1,num2));
            break;
        case '/':
            printf("Result: %.2f\n",divide(num1,num2));
            break;
        default:
            printf("Error: Invalid operator.\n");

    }
    return 0;

}