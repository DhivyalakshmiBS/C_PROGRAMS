#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess, number, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 to 100. Can you guess it ??\n");
    do{
        printf("Enter your guess:");
        scanf("%d",&guess);
        attempts++;
        if(guess > number){
            printf("The entered number is high...\n");
        }
        else if(guess < number){
            printf("The entered number is low...\n");
        }
        else{
            printf("Your guess is right....\n");
        }
        
    }while(guess != number);
    if(guess == number){
        printf("You guessed the number is %d",attempts);
    }
    return 0;

}