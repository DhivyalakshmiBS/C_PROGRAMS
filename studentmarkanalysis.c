#include<stdio.h>
int main(){
    int marks[100];
    int n, i;
    int total = 0;
    int highest, lowest;
    float average;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
        total += marks[i];
    }
    lowest = marks[0];
    highest = marks[0];
    for(i=1;i<n;i++){
        if(marks[i]<lowest){
            lowest = marks[i];
        }
        if(marks[i]>highest){
            highest = marks[i];
        }
    }
        average = (float)total/n;
        printf("\n--------Student Marks Analysis----------\n");
        printf("Total marks: %d\n",total);
        printf("Average marks: %.2f\n",average);
        printf("Highest marks: %d\n",highest);
        printf("Lowest marks: %d\n",lowest);

    
    return 0;

}