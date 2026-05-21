#include<stdio.h>
struct Student{
    int rollno;
    char name[30];
    float mark1, mark2, mark3;
    float total, average;
};
int main(){
    struct Student s[100];
    int n, i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the details of students %d\n",i+1);
        printf("Enter the roll number: ");
        scanf("%d",&s[i].rollno);
        printf("Enter the name: ");
        scanf("%s",s[i].name);
        printf("Enter the mark of subject 1:");
        scanf("%f",&s[i].mark1);
        printf("Enter the mark of subject 2:");
        scanf("%f",&s[i].mark2);
        printf("Enter the mark of subject 3:");
        scanf("%f",&s[i].mark3);
        s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].average = s[i].total / 3.0;
    }
    printf("-----Student Records-----\n");
    for(i=0;i<n;i++){
        printf("Roll Number: %d\n",s[i].rollno);
        printf("Name: %s\n",s[i].name);
        printf("Mark 1: %.2f\n",s[i].mark1);
        printf("Mark 2: %.2f\n",s[i].mark2);
        printf("Mark 3: %.2f\n",s[i].mark3);
        printf("Total: %.2f\n",s[i].total);
        printf("Average: %.2f\n",s[i].average);
    }
    return 0;
}