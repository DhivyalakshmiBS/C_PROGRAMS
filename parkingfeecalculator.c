#include<stdio.h>
#include<string.h>
int main(){
    char customername[25];
    char vehiclenumber[10];
    int vehicle_type;
    int amount;
    int hours;
    int total_amount;
    printf("Enter the customer name: ");
    scanf("%s",customername);
    printf("Enter the vehicle number: ");
    scanf("%s",vehiclenumber);
    printf("Vehicle categories:\n");
    printf("1. Two-wheeler            (Enter 1 for two-wheeler)\n");
    printf("2. Three-wheeler          (Enter 2 for three-wheeler)\n");
    printf("3. Four-wheeler           (Enter 3 for four-wheeler)\n");
    printf("4. More than four-wheeler (Enter 4 for more than four-wheeler)\n");
    printf("Enter the vehicle type: ");
    scanf("%d",&vehicle_type);
    switch(vehicle_type){
        case 1:
            amount = 10;
            break;
        case 2:
            amount = 20;
            break;
        case 3:
            amount = 30;
            break;
        case 4:
            amount = 40;
            break;
        default:
            printf("Invalid vehicle type\n");
    }
    printf("Enter the number of hours parked:");
    scanf("%d",&hours);
    total_amount = amount * hours;
    printf("--------------------------------------------\n");
    printf("           Parking fee receipt\n");
    printf("--------------------------------------------\n");
    printf("Customer Name    : %s\n", customername);
    printf("Vehicle Number   : %s\n", vehiclenumber);
    printf("Vehicle Type     : %d\n", vehicle_type);
    printf("Hours Parked     : %d\n", hours);
    printf("Total Amount     : %d\n", total_amount);
    printf("-------------------------------------------\n");
    return 0;

}
