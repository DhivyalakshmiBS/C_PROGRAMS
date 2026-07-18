#include<stdio.h>
int main(){
    char customername[25];
    long int phoneno;
    int choice;
    int cost;
    int days;
    int guests;
    int roomrate;
    int roomcharge;
    char payment[15];
    printf("Enter Customer Name:");
    scanf("%s",customername);
    printf("Enter Phone Number:");
    scanf("%ld",&phoneno);
    printf("Enter the choice:");
    scanf("%d",&choice);
    printf("============ROOM TYPES===========\n");
    printf("1. Standard Type    - ₹ 1000/ day\n");
    printf("2. Deluxe Type      - ₹ 2000/ day\n");
    printf("3. Suite Room       - ₹ 3500/ day\n");
    switch(choice){
        case 1:
            cost = 1000;
        case 2:
            cost = 2000;
        case 3:
            cost = 3500;
    }
    printf("Enter the number of days:");
    scanf("%d",&days);
    printf("Enter the number of guests:");
    scanf("%d",&guests);
    roomrate = days * cost;
    roomcharge = roomrate * guests;
    printf("Enter the payment method(UPI, Cash, Card):");
    scanf("%s",payment);
    printf("============ROOM RECEIPT============\n");
    printf("Customer Name       : %s\n",customername);
    printf("Phone Number        : %ld\n",phoneno);
    printf("The room type is    :");
    if(choice == 1){
        printf("Standard Room.\n");
    }
    else if(choice == 2){
        printf("Deluxe Type.\n");
    }
    else{
        printf("Suite Room.\n");
    }
    printf("Number of days      : %d\n",days);
    printf("Number of guests    : %d\n",guests);
    printf("The total amount    : %d\n",roomcharge);
    printf("Payment Method      : %s\n",payment);
    return 0;
}