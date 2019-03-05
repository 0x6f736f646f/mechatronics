#include <stdio.h>
#include <stdlib.h>

float gross_salary, net_salary;
float calculate_tax(float gross_salary);

int main()
{
    float net_pay;
    printf("Enter your gross salary: ");
    scanf("%f", &gross_salary);
    net_pay = calculate_tax(gross_salary);
    printf("Your net pay is %.2f\n", net_pay);
    return 0;
}
float calculate_tax(float gross_salary)
{
    if (gross_salary>50000)
    {
        net_salary = gross_salary - (0.3 * gross_salary);
    }
    else if (gross_salary<50000 && gross_salary>40000)
    {
        net_salary = gross_salary - (0.25 * gross_salary);
    }
    else if (gross_salary<40000 && gross_salary>30000)
    {
        net_salary = gross_salary - (0.2 * gross_salary);
    }
    else if (gross_salary<30000 && gross_salary>20000)
    {
        net_salary = gross_salary - (0.1 * gross_salary);
    }
    else
    {
        net_salary = gross_salary;
    }
    return net_salary;
}
