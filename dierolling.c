#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int dice, i,n;
    srand(time(0));
    printf("Enter the number of times the dice is to rolled :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        dice = (rand() % 6) + 1;
        printf("You rolled a %d\n", dice);
    }
    return 0;
}