// #include <stdio.h>

// int main (){
//     int i = 8;
//     int *j;
//     j = &i;

//     printf("Address i = %u\n", &i);  //&i = address of i
//     printf("Address i = %u\n", j);   //j is holding adress of i according to above written line j=&i;
//     printf("Address j = %u\n", &j);    //address of j
//     printf("Value of i= %d\n", i);   // 8
//     printf("Value of i= %d\n", *(&i));  //value at address i  is 8. * is value of address opeartor
//     printf("Value of i= %d\n", *j);   // 8

//     return 0;
// }



//----------Practcie Sheet----------------------



// #include <stdio.h>

// int main (){
//     int a = 10;
//     int *ptr;  //pointer created
//     ptr = &a;  //adress of a is stored under ptr

//     printf("Address of variable is %u\n", ptr);
//     printf("The value of variabble a is %d\n", *ptr);
//     return 0;
// }


// #include <stdio.h>
// void printAdd(int a){
// printf("the address of variable a is %u\n", &a);
// }

// int main (){
//     int i=5;
//     printf("The value of variable i is %d \n",i);
//     printAdd(i);
//     printf("Address if i  is %u\n", &i);
//     return 0;
// } 




// #include <stdio.h>
//  void sumAndAvg(int a,int b,int *sum , float *avg){
//      *sum = a + b;
//      *avg = (float)(*sum) / 2;
//  }
// int main (){
//     int i, j,sum;
//     float avg;
//     i = 5;
//     j = 6;
//     sumAndAvg(i, j, &sum, &avg);
//     printf("the value of Sum is %d \n", sum);
//     printf("the value of Avg is %f \n", avg);


//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int i = 345;
//     int *ptr;
//     int **ptr_ptr;

//     ptr = &i;
//     ptr_ptr= &ptr;

//     printf("The value of i is %d", **ptr_ptr);
//     return 0;
// }