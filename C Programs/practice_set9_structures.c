
//Basic structure program

// #include<stdio.h>
// #include<string.h>

// struct employee{    //custom data type is defined
//     int code;
//     float salary;
//     char name[10];
// };

// int main(){

//     struct employee e1;   //creating a structure variable with employee name e1
//     e1.code = 100;
//     e1.salary = 34.454;
//     // e1.name = "Harry"; --> wont work
//     strcpy(e1.name, "Saket");

//     printf("%d\n", e1.code);
//     printf("%.3f\n", e1.salary);
//     printf("%s\n", e1.name);

//     return 0;
// }

/*
Why use Structures??
We can create the data types in the employee structure separately but when the number of properties in a
structure increases,ut becomes difficult for us to create data variables without structures

structures keep the data organized
Structure make data management easy for the programmer
*/



/*Quick-Quiz
Write a program to store the details of 3 employee from user defined data
Use the struture decalred above
*/


// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };

// int main(){
//     struct employee e1, e2, e3;
//     printf("Enter the value for code of e1: ");
//     scanf("%d", &e1.code);
//     printf("Enter the value for salary of e1: ");
//     scanf("%f", &e1.salary);
//     printf("Enter the value for name of e1: ");
//     scanf("%s", e1.name);   //here not using &e1.name because  name is in array and it conatins address
  
//     printf("Enter the value for code of e2: ");
//     scanf("%d", &e2.code);
//     printf("Enter the value for salary of e2: ");
//     scanf("%f", &e2.salary);
//     printf("Enter the value for name of e2: ");
//     scanf("%s", e2.name);

//     printf("Enter the value for code of e3: ");
//     scanf("%d", &e3.code);
//     printf("Enter the value for salary of e3: ");
//     scanf("%f", &e3.salary);
//     printf("Enter the value for name of e3: ");
//     scanf("%s", e3.name);

//     return 0;
// }


// //Array of Strurtures

// #include <stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };

// int main (){
//     struct employee facebook[100];
//     facebook[0].code = 100;
//     facebook[0].salary = 100.45;
//     strcpy(facebook[0].name, "Harry");

//     facebook[1].code = 101;
//     facebook[1].salary = 90.45;
//     strcpy(facebook[1].name, "Rohan");

//     facebook[2].code = 102;
//     facebook[2].salary = 110.45;
//     strcpy(facebook[2].name, "SkillKhiladi");
//     printf("Done");


//     return 0;
// }



//Alternative way to initialize a structure

// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

// int main(){
//     struct employee e1 = {1, 3500.50, "Saket"};

//     printf("Employee Code is: %d \n", e1.code);
//     printf("Employee Salary is: %0.2f \n", e1.salary);
//     printf("Employee Name is: %s \n", e1.name);
 

//     return 0;
// }





//Pointer to Structure

// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

// int main(){
//     struct employee e1;
//     struct employee *ptr;

//     ptr = &e1;
//     //(*ptr).code = 101; //or you can also write: ptr->code = 101;
//     ptr->code = 101;    //we can use arrow opeartor to access structure properties.
//     printf("%d", e1.code); 

//     return 0;
// }



// //Passing Structure to a Function

// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

// void show(struct employee emp){
//     printf("The Code of employee is: %d\n", emp.code);
//     printf("The Salary of employee is: %f\n", emp.salary);
//     printf("The Name of employee is: %s\n", emp.name);
//     emp.code = 34;
// }
// int main(){
//     struct employee e1;
//     struct employee *ptr;

//     ptr = &e1;
//     //(*ptr).code = 101; //or you can also write: ptr->code = 101;
//     ptr->code = 101;
//     ptr->salary = 11.01;
//     strcpy(ptr->name, "Harry");

//     show(e1); 
//     printf("The Code of employee is: %d\n", e1.code);

//     return 0;
// }



 
//typedef keyword - used to make alias name for custom data type


#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp;

void show(emp emp1){
    printf("The Code of employee is: %d\n", emp1.code);
    printf("The Salary of employee is: %f\n", emp1.salary);
    printf("The Name of employee is: %s\n", emp1.name);
    
}

int main(){
    // Declaring e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1; 

    // Set the member values for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Harry"); 

    show(e1);

    return 0;
}








//<--------------------------------------------------------------------Question-Set--------------------------------------------------------------->
