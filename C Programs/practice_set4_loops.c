//Multiplication of a Number based on User Input

// #include <stdio.h>

// int main (){
//     int number;
//     int i=1;
//     printf("Multiplication table of : ");
//     scanf("%d", &number);
//     while(i<=10){
//         printf("Result is %d X %d = %d\n", number, i, number * i);
//         i++;
//     }
//     return 0;
// }



//Multiplication of a Number in Reverse Order based on User-Input

// #include <stdio.h>

// int main (){
//     int number;
//     printf("Multiplication Table in reverse Order of:");
//     scanf("%d", &number);
//     for (int i = 10; i >= 1;i--){
//         printf("%d X %d = %d\n", number, i, number*i);
//     }
//         return 0;
// }





//Program to  print the Natural number based on user input and find the sum of all printed natural numbers


// #include<stdio.h>

// int main(){
//     int i=0,n,sum=0;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);
//     sum = n * (n + 1) / 2;

//     do{
//         printf("The Natural number is %d \n", i+1);
//         i++;
//     }while(i<n);
//     printf("Sum of all the above Natural Number is %d\n", sum);
//     return 0;
// }




//Same above program using while Loop

// #include<stdio.h>

// int main(){
//     int i=1, sum=0, n;
//     printf("Enter the value of n :");
//     scanf("%d", &n);
//     sum = n * (n + 1) / 2;

//     while( i<=n){
//         printf("The Natural number is %d \n", i);
//         i++;    
//     }
//     printf("The value of sum of all above Natural No is %d", sum);
//     return 0;
// }



//Same above Program using For Loop

//#include<stdio.h>

// int main(){
//    int sum=0, n;
//     printf("Enter the value of n :");
//     scanf("%d", &n);
//     sum = n * (n + 1) / 2;

//     for (int i = 1; i <= n;i++){
//         printf("The natural no is %d\n", i);
//     }
//         printf("The value of sum of all above Natural No is %d", sum);
//     return 0;
// }



//To find factorial of a Number(Hard coded Input)

#include <stdio.h>

int main (){
    int number=3,i=0, factorial=1;
   // printf("Enter the Number:");
    //scanf("%d", &number);
    for (int i = 1; i <= 3; i++)
    { 
        factorial *= i;
     }
    printf("factorial is : %d", factorial);

    return 0;
}

