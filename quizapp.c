#include<stdio.h>
int main(){
    int score = 0;
    char option;
    printf("Welcome to the Quiz!\n");
    printf("Enter the option only.\n");
    printf("Question 1: Who is the father of C programming language?\n");
    printf("a) Dennis Ritchie\n");
    printf("b) Charles Babbage\n");
    printf("c) Bjarne Stroustrup\n");
    
    scanf(" %c",&option);
    if(option == 'a' || option =='A'){
        score++;
    }
    printf("Question 2: Which funcation is used as output function in C language?\n");
    printf("a) print()\n");
    printf("b) cout<<\n");
    printf("c) printf()\n");
    scanf(" %c",&option);
    if( option == 'c' || option == 'C'){
        score++;
    }
    printf("Question 3: Which header function is used for strcpy()?\n");
    printf("a) stdio.h\n");
    printf("b) string.h\n");
    printf("c) math.h\n");
    scanf(" %c",&option);
    if(option == 'b' || option == 'B'){
        score++;
    }
    printf("Question 4: Which keyword is used to define a structure in C language?\n");
    printf("a) struct\n");
    printf("b) define\n");
    printf("c) class\n");
    scanf(" %c",&option);
    if(option == 'a' || option == 'A'){
        score++;
    }
    printf("Question 5: Which function opens a file in C language?\n");
    printf("a) fclose()\n");
    printf("b) fopen()\n");
    printf("c) fread()\n");
    scanf(" %c",&option);
    if(option == 'b' || option == 'B'){
        score++;
    }
    printf("Your final score is: %d out of 5\n",score);
    return 0;

}
