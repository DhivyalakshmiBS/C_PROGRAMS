#include<stdio.h>
struct employee{
    int empid;
    char name[50];
    char position[50];
    float salary;
};
int main(){
    struct employee emp[100];
    int n, i;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the details of the employee %d:\n",i+1);
        printf("Enter the employee id :");
        scanf("%d",&emp[i].empid);
        printf("Enter the name of employee :");
        scanf("%s",emp[i].name);
        printf("Enter the position of employee :");
        scanf("%s",emp[i].position);
        printf("Enter the salary of an employee:");
        scanf("%f",&emp[i].salary);

    }
    printf("-------Employee Records-------\n");
    for(i=0;i<n;i++){
        printf("Employee ID : %d\n",emp[i].empid);
        printf("Name of the employee : %s\n", emp[i].name);
        printf("Employee current position : %s\n",emp[i].position);
        printf("Salary of an employee : %.2f\n",emp[i].salary);
    }
    return 0;
    

}