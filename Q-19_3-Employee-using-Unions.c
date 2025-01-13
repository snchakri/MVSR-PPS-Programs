#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  1. Declaring a structure to store employee data, and declaring an array of the structure datatype of size 3;
  2. Taking input into each index of array using counter-controlled loop(for-loop) of counter-variable i in [0,3);
  3. Declaring a union to store employee data, and declaring a variable of this union datatype;
  4. In another counter-controlled loop, in each iteration copying an index of structure array to union variable, and then printing it onto terminal/console;
*/

int main() {
    // Defining a structure to store employee data
    struct s_employee   {
        int id;
        char name[30];
        float sal;
        char designation[20];
    };

    // Declaring structure array to store 3 employee data
    struct s_employee s_emp[3];

    // Taking input for employee data
    printf("\nEnter Employee Data of 3 employees: \n");
    for (int i=0; i<3; i++)     {
        printf("\nEmployee data of employee-%d\nEnter the ID of the employee: ",i+1);
        scanf("%d", &s_emp[i].id);
    
        printf("Enter the name of the employee: ");
        while (getchar() != '\n'); // Clear input buffer
        fgets(s_emp[i].name, sizeof(s_emp[i].name), stdin);
    
        printf("Enter the salary of the employee: ");
        scanf("%f", &s_emp[i].sal);
    
        printf("Enter the designation of the employee: ");
        while (getchar() != '\n'); // Clear input buffer
        fgets(s_emp[i].designation, sizeof(s_emp[i].designation), stdin);
    }

    // Declaring union
    union u_employee    {
        int id;
        char name[30];
        float sal;
        char designation[20];
    };

    union u_employee u_emp;

    printf("\nDisplaying Employee Data of 3 employees: \n");
    // Displaying employee details using the union
    for (int i=0; i<3; i++)     {
        u_emp.id = s_emp[i].id;
        printf("\n\nEmployee Details of %d-employee:\n",i+1);
        printf("ID: %d\n", u_emp.id);
    
        // Copying and displaying name
        strcpy(u_emp.name, s_emp->name);
        printf("Name: %s", u_emp.name); // fgets includes newline
    
        // Copying and displaying salary
        u_emp.sal = s_emp[i].sal;
        printf("Salary: %.2f\n", u_emp.sal);
    
        // Copying and displaying designation
        strcpy(u_emp.designation, s_emp->designation);
        printf("Designation: %s", u_emp.designation);
    }

    return 0;
}
