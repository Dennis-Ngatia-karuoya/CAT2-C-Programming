#include <stdio.h> // Includes the standard input/output library for functions like printf and scanf.

int main() {
    double hoursWorked, hourlyWage, grossPay, taxes, netPay; // Declares double-precision floating-point variables to store hours worked, hourly wage, gross pay, taxes, and net pay.

    printf("Enter hours worked in a week: "); // Prompts the user to enter the number of hours worked.
    scanf("%lf", &hoursWorked); // Reads the input from the user and stores it in the 'hoursWorked' variable.

    printf("Enter hourly wage: "); // Prompts the user to enter the hourly wage.
    scanf("%lf", &hourlyWage); // Reads the input from the user and stores it in the 'hourlyWage' variable.

    // Calculates gross pay based on hours worked and hourly wage.
    if (hoursWorked <= 40) { // Checks if hours worked are less than or equal to 40.
        grossPay = hoursWorked * hourlyWage; // Calculates gross pay for regular hours.
    } else { // If hours worked exceed 40.
        grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5); // Calculates gross pay with overtime pay.
    }

    // Calculates taxes based on gross pay.
    if (grossPay <= 600) { // Checks if gross pay is less than or equal to 600.
        taxes = grossPay * 0.15; // Calculates taxes for gross pay less than or equal to 600.
    } else { // If gross pay exceeds 600.
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20); // Calculates taxes with a higher rate for gross pay above 600.
    }

    // Calculates net pay by subtracting taxes from gross pay.
    netPay = grossPay - taxes;

    // Prints the calculated gross pay, taxes, and net pay.
    printf("Gross Pay: $%.2lf\n", grossPay);
    printf("Taxes: $%.2lf\n", taxes);
    printf("Net Pay: $%.2lf\n", netPay);

 return 0; // Returns 0 to indicate successful program execution.
}
