// #include <stdio.h>

// int main (){
//     int marks[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the value of Marks for student %d:", i + 1);
//         scanf("%d", &marks[i]);
//     }
//      for (int i = 0; i < 5; i++)
//     {
//         printf("The value of Marks for student %d is:  %d \n", i+1,marks[i]);

//     }
    

//     return 0;
// }  


//Arrays in memory.
//int arr[3] = {1, 2, 3};
//how much memory will this array reserve
//based upon archtecture if 1 Integer = 4 bytes then it will reserve 3*4 = 12 byte of memory.





//ARRAY POINTER



//  #include<stdio.h>

//  int main(){
    // int i = 34;        //1 integer = 4 byte 
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
     // // ptr--
    // ptr = ptr + 1;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);


    // char c = '3';           //1 Character = 1 byte
    // char *ptr = &c; 
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // // ptr--
    // ptr = ptr + 1;
    // ptr = ptr + 1;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

//     float f = 3.4;          //1 float = 4 byte
//     float *ptr = &f;
//     printf("The value of ptr is %u\n", ptr);
//     ptr--;
//     // ptr = ptr - 1;
//    // ptr = ptr + 1;
//     // ptr = ptr + 1;
//     // ptr++;
//     // ptr++;
//     printf("The value of ptr is %u\n", ptr);
//      printf("The value of ptr is %u\n", ptr);


//     return 0;
// }




//Accessing Array using Pointers-
// #include <stdio.h>

// int main(){
//     int marks[4];
//     int *ptr;
//     //ptr = &marks[0];
//     ptr = marks; //we can write this way also
//     for (int i = 0; i < 4;i++){
//         printf("Enter tha marks of Student %d: \n", i + 1);
//         scanf("%d", ptr);
//         ptr++;
//     }

//     for (int i = 0; i < 4;i++){
//         printf("The Value of Marks for student is %d is %d \n", i + 1,marks[i]);
//     }
//         return 0;
// }




//-----------------Passing Arrays to Function-------------------

// #include<stdio.h>

// // void printArray(int *ptr, int n){
// //     for(int i=0; i<n; i++){
// //         printf("The value of element %d is %d\n", i+1, *(ptr+i)); 
// //     }
// // }

// void printArray(int ptr[], int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is %d\n", i+1, ptr[i]); 
//     } 
//     ptr[2] = 5555; // This value will be changes in arr array of main as well
// }

// int main(){
//     int arr[] = {1,2,3543,34,3,645,23};
//     printArray(arr, 7); //function call
//     printf("%d", arr[2]);
//     return 0;
// }





//-------------------Multidimensional Array------------------------------

// #include<stdio.h>

// int main(){
//     int n_students = 3;
//     int n_subjects = 5;

//     int marks[3][5];
//     for(int i=0; i<n_students; i++){
//         for(int j=0; j<n_subjects; j++){
//             printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
//             scanf("%d", &marks[i][j]);
//         }
//     }

//     for(int i=0; i<n_students; i++){
//         for(int j=0; j<n_subjects; j++){
//             printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, marks[i][j]);
//         }
//     }

//     return 0;
// }











// #include <stdio.h>

// int main (){
//     int arr[10];
//     int *ptr = &arr[0];  //it addresses first eleemnt of array
//    //int *ptr = arr;         //it addresses first eleemnt of array
//     ptr = ptr + 2;
//     if(ptr == &arr[2]){
//         printf("Yes,These point to the same location in memoery\n");
//     }else{
//         printf("these do not point to the same location in memory\n");
//     }

//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int mul[10];
//     for(int i=0; i<10; i++){
//         mul[i] = 5*(i+1);
//     }

//     for(int i=0; i<10; i++){
//         printf("5X%d = %d\n", i+1, mul[i]);
//     }
//     return 0;
// }







//Write a program conatining a function Which reverse the array passed to it.

// #include<stdio.h>
// void reverse(int *arr, int n){
//     int temp;
//     for(int i=0; i<(n/2); i++){
//         temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     reverse(arr, 7);
//     for(int i=0; i<7; i++){
//          printf("The value of %d element is: %d\n", i, arr[i]);
//     }
//     return 0;
// }










//Write a program conatining a function Which counts the number of positive integers in an array.




// #include<stdio.h>
// void printTable(int *mulTable, int num, int n){
//     printf("The multiplication table of %d is :\n", num);
//     for(int i=0; i<n; i++){
//         mulTable[i] = num*(i+1);
//     }

//     for(int i=0; i<n; i++){
//         printf("%dX%d = %d\n", num, i+1, mulTable[i]);
//     }
//     printf("******************************************************\n\n");
// }

// int main(){
//     int mulTable[3][10];
//     printTable(mulTable[0], 2, 10);
//     printTable(mulTable[1], 7, 10);
//     printTable(mulTable[2], 9, 10);

//     return 0;
// }












// #include<stdio.h>

// int main(){
//     int arr[2][3][4];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<4;k++){
//                 printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
//             }
//         }
//     }
    
//     return 0;
// }