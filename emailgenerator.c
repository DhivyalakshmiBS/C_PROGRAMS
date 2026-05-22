#include<stdio.h>
#include<string.h>

int main(){
    char name[30];
    char department[15];
    char email[50];
    printf("Enter the name of the student:");
    scanf("%s",name);
    printf("Enter the department of the student: ");
    scanf("%s",department);
    strcpy(email,name);
    strcat(email,"_");
    strcat(email,department);
    strcat(email,"@college.edu.com");
    printf("Generated email address: %s\n",email);
    return 0;
}