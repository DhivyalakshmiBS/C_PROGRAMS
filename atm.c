#include<stdio.h>
int main(){
    int pin, choice, amt,depamt;
    printf("Welcome to the ATM!!\n");
    printf("Enter your pin:");
    scanf("%d",&pin);
    if (pin==1234){
        printf("\n1 - Check Balance\n");
        printf("2 - Withdraw\n");
        printf("3 - Deposit\n");
        printf("4 - Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Your balance is $10000\n");
                break;
            case 2:
                printf("Enter the amount to withdraw:");
                scanf("%d",&amt);
                if (amt<=10000){
                    printf("You withdraw $%d\n",amt);
                    printf("Your remaining balance is $%d\n",10000-amt);
                }else{
                    printf("Insufficient balance!\n");
                }
                break;
            case 3:
                printf("Enter the amount to deposit:");
                scanf("%d",&depamt);
                printf("You total balance is $%d\n",10000+depamt);
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice!\n");
                }
            
        }
    
    else{
        printf("Invalid pin! please enter the correct pin.\n");

    }
    return 0;
}
