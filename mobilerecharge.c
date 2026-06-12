#include<stdio.h>
int main(){
    long long int mobile_number;
    float recharge_amount;
    int choice;
    printf("Enter your mobile number: ");
    scanf("%lld",&mobile_number);
    printf("---------Mobile Recharge options---------\n");
    printf("1. Data Pack (1 GB for Rs. 199)\n");
    printf("2. Unlimited calls (Rs. 299)\n");
    printf("3. Combo Pack (1 GB + Unlimited calls for Rs. 399)\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            recharge_amount = 199;
            printf("Recharge successful.\n");
            printf("Mobile number: %lld\n",mobile_number);
            break;
        case 2:
            recharge_amount = 299;
            printf("Recharge successful.\n");
            printf("Mobile number: %lld\n",mobile_number);
            break;
        case 3:
            recharge_amount = 399;
            printf("Recharge successful.\n");
            printf("Mobile number: %lld\n",mobile_number);
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    
    }
    return 0;
}