#include <stdio.h>

int main() {
    double hoursWorked, hourlyWage, grossPay, taxes, netPay;

    printf("Enter hours worked in a week: ");
    scanf("%lf", &hoursWorked);

    printf("Enter hourly wage: ");
    scanf("%lf", &hourlyWage);
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyWage;
    } else {
        grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5);
    }

    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
    netPay = grossPay - taxes;
    printf("Gross Pay: $%.2lf\n", grossPay);
    printf("Taxes: $%.2lf\n", taxes);
    printf("Net Pay: $%.2lf\n", netPay);

 return 0;
}
