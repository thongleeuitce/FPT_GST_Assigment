#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct employee
{
    char id[20];
    char name[20];
    float salary_gloss;
    int ppr;
    int spr;
} employees[20];
float array[5][5] = {{0.013, 0.015, 0.017, 0.019, 0.021},{0.015, 0.017, 0.019, 0.021, 0.023},{0.017, 0.019, 0.021, 0.023, 0.027},{0.019, 0.021, 0.023, 0.025, 0.03},{0.021, 0.023, 0.025, 0.027, 0.04}};
int i = 0;
int j = 0;
int n = 0;

void main()
{

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
                printf("%f ", array[i][j]);
        }
        printf("\n");
    }
    create_employees();
    calcute_new_salary();
    print_salary_employee();
}

void print_salary_employee()
{
    printf("Salary of Employees:\n");
    for(i=0;i<n;i++)
        printf("Salary of Employee %d is %f\n", i+1, employees[i].salary_gloss);
}
void calcute_new_salary()
{
    for(i=0;i<n;i++)
    {
        employees[i].salary_gloss = employees[i].salary_gloss + employees[i].salary_gloss*array[employees[i].ppr-1][employees[i].spr-1];
    }
}
void create_employees()
{
    printf("Input n (employees) = ");
    scanf("%d", &n);
    printf("Enter employes: \n\n");
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        printf("employee %d:\n", i+1);
        fflush(stdin);
        printf("- id: ");
        fflush(stdin);
        gets(employees[i].id);
        printf("- name: ");
        fflush(stdin);
        gets(employees[i].name);
        printf("- salary gloss: ");
        fflush(stdin);
        scanf("%f", &employees[i].salary_gloss);
        printf("- peer performance rating: ");
        fflush(stdin);
        scanf("%d", &employees[i].ppr);
        printf("- supervisor performance rating: ");
        fflush(stdin);
        scanf("%d", &employees[i].spr);
        printf("\n");
    }
}
