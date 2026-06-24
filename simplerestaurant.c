int main(){
    int choice, item, no;
    printf("Welcome to the restaurant!\n");
    printf("Please select an option:\n");
    printf("1. View Menu\n");
    printf("2. Place Order\n");
    printf("3. Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Menu:\n");
            printf("1. Pizza - $10\n");
            printf("2. Burger - $5\n");
            printf("3. Salad - $7\n");
            printf("4. Pasta - $8\n");
            break;
        case 2:
            printf("Please enter your order:\n");
            printf("Enter the item number (1-4):\n");
            scanf("%d",&item);
            printf("Enter the quantity:\n");
            scanf("%d",&no);
            switch(item){
                case 1:
                    printf("You have ordered %d Pizza(s).\n", no);
                    break;
                case 2:
                    printf("You have ordered %d Burger(s).\n", no);
                    break;
                case 3:
                    printf("You have ordered %d Salad(s).\n", no);
                    break;
                case 4:
                    printf("You have ordered %d Pasta(s).\n", no);
                    break;
                default:
                    printf("Please select the item");
            }
            case 3:
                printf("Thank you for visiting us!");
            default:
                printf("Please select an valid option");

    }
    return 0;
}