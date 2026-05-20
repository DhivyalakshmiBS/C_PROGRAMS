#include<stdio.h>
#include<string.h>
int main(){
    char username[20],password[15];
    printf("Enter the username:");
    scanf("%s",username);
    printf("Enter the password:");
    scanf("%s",password);
    if(strcmp(username, "admin") == 0 && strcmp(password, "password123") == 0){
        printf("Login successful!\n");

    } else{
        printf("Login failed! Invalid password or username.\n");
    }
    return 0;
}