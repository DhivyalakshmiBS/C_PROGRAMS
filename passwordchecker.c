#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char password[15];
    int hasupper = 0;
    int haslower = 0;
    int hasdigit = 0;
    int hasspecial = 0;
    int len = 0;
    printf("Enter a password: ");
    scanf("%s", password);
    len = strlen(password);
    for(int i = 0; i < len; i++){
        if(isupper(password[i])){
            hasupper = 1;
        }
        if(islower(password[i])){
            haslower = 1;
        }
        if(isdigit(password[i])){
            hasdigit = 1;
        }
        if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+'){
            hasspecial = 1;
        }
    }
    if(len >= 8 && hasupper && haslower && hasdigit && hasspecial){
        printf("Valid password\n");
    }
    else{
        printf("Invalid password\n");
        if(len < 8){
            printf("Password must contain atleast 8 characters.\n");
        }
        if(!hasupper){
            printf("Password must contain atleast one uppercase letter.\n");
        }
        if(!haslower){
            printf("Password must contain atleast one lowercase letter.\n");
        }
        if(!hasdigit){
            printf("Password must contain atleast one digit.\n");
        }
        if(!hasspecial){
            printf("Password must contain atleast one special character.\n");
    }
    }
    return 0;
}