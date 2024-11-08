#include<stdio.h> // Includes the standard input/output library for functions like printf and scanf.
#include<string.h> // Includes the string library for functions like strcpy.

// Defines a structure named 'employee' to store employee information.
struct employee{
    char name[25]; // Character array to store employee's name (maximum 25 characters).
    int id; // Integer variable to store employee's ID.
    char department[20]; // Character array to store employee's department (maximum 20 characters).
    float salary; // Float variable to store employee's salary.
    char email[50]; // Character array to store employee's email (maximum 50 characters).
}employee1,employee2; // Declares two variables of the 'employee' structure: employee1 and employee2.

// Main function, where the program execution begins.
int main(){
    // Assigns values to the fields of the 'employee1' structure.
    strcpy(employee1.name,"John Doe"); // Copies the string "John Doe" to the 'name' field of employee1.
    employee1.id=12345; // Assigns the value 12345 to the 'id' field of employee1.
    strcpy(employee1.department,"Human Resources"); // Copies the string "Human Resources" to the 'department' field of employee1.
    employee1.salary=55000.50; // Assigns the value 55000.50 to the 'salary' field of employee1.
    strcpy(employee1.email,"john.doe@company.com"); // Copies the string "john.doe@company.com" to the 'email' field of employee1.
    
    // Prints the information stored in the 'employee1' structure.
    printf("name:%s\n",employee1.name); // Prints the name of employee1.
    printf("id:%d\n",employee1.id); // Prints the ID of employee1.
    printf("department:%s\n",employee1.department); // Prints the department of employee1.
    printf("salary:%f\n",employee1.salary); // Prints the salary of employee1.
    printf("email:%s\n",employee1.email); // Prints the email of employee1.
    
    return 0; // Returns 0 to indicate successful program execution.
}
