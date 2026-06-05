#include<stdio.h>
struct Library{
    int BookID;
    char Bookname[50];
    char Authorname[50];
    float price;
};
int main(){
    struct Library lib[150];
    int n, i;
    printf("Enter the number of books:");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter the details of the book %d:\n",i+1);
        printf("Book ID: ");
        scanf("%d",&lib[i].BookID);
        printf("Book Name: ");
        scanf("%s",lib[i].Bookname);
        printf("Author Name: ");
        scanf("%s",lib[i].Authorname);
        printf("Price: ");
        scanf("%f",&lib[i].price);
    }
    printf("-----Library records-----\n");
    for(i=0;i<n;i++){
        printf("Book ID : %d\n",lib[i].BookID);
        printf("Book name: %s\n",lib[i].Bookname);
        printf("Author name: %s\n",lib[i].Authorname);
        printf("Price: %.2f\n",lib[i].price);
    }
    return 0;
}