#include<stdio.h>
int main()
{
    int num1, num2, choice;
    printf("Enter the choice(1,2,3,4):\n");
    printf("1- Add\n");
    printf("2- Subtract\n");
    printf("3- Multiple\n");
    printf("4 - Divide\n");
    scanf("%d", &choice);
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    switch(choice){
        case 1:
            printf("The sum of %d and %d is %d\n", num1, num2, num1+num2);
            break;
        case 2:
            printf("The difference of %d and %d is %d\n",num1,num2, num1-num2);
            break;
        case 3:
            printf("The product of %d and %d is %d\n",num1,num2, num1*num2);
            break;
        case 4:
            if(num2 != 0){
                printf("The divided value of %d and %d is %d\n",num1,num2,num1/num2);}
                else{
                    printf("Error: Division by zero is not allowed.\n");
                }
            break;
         default:
            printf("Invalid choice!");
            }
    return 0;
    }
    