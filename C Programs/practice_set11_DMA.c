//DMA(Dynamic Memory Allocation)

// //malloc()
// #include<stdio.h> 
// #include<stdlib.h> 

// int main(){
//     int *ptr;
//     // Sizeof operator in C
//     // printf("The size of int on my pc is %d\n", sizeof(int));
//     // printf("The size of float on my pc is %d\n", sizeof(float));
//     // printf("The size of char on my pc is %d\n", sizeof(char));
//     ptr = (int *) malloc(6 * sizeof(int));    //malloc() return a void pointer.  now we have to typecast that void pointer based on our requirement like here typecating it for int.
//     for(int i=0; i<6;i++){
//         printf("Enter the value of %d element: \n", i); 
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0; i<6;i++){
//         printf("The value of %d element is: %d\n", i, ptr[i]); 
//     }
//     return 0;
// }




// //calloc()
// #include<stdio.h> 
// #include<stdlib.h> 

// int main(){
//     int *ptr; 
//     ptr = (int *) calloc(6, sizeof(int)); 
//     // for(int i=0; i<6;i++){
//     //     printf("Enter the value of %d element: \n", i); 
//     //     scanf("%d", &ptr[i]);
//     // }

//     for(int i=0; i<6;i++){
//         printf("The value of %d element is: %d\n", i, ptr[i]); 
//     }
//     return 0;
// }


/*calloc quick quiz
Program to create an aray of size n using calloc where n is an integer innteger by the user
*/


// #include<stdio.h> 
// #include<stdlib.h> 

// int main(){
//     int *ptr; 
//     int n;
//     printf("How many integers do you want to enter:\n");
//     scanf("%d", &n);
//     ptr = (int *) calloc(n, sizeof(int)); 
//     for(int i=0; i<n;i++){
//         printf("Enter the value of %d element: \n", i); 
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0; i<n;i++){
//         printf("The value of %d element is: %d\n", i, ptr[i]); 
//     }
//     return 0;
// }


/*free() - this function is used to deallocate the memory that was used by malloc()/calloc().

Write a program to demonstrate usage of free() with malloc()
*/


// #include<stdio.h> 
// #include<stdlib.h> 

// int main(){
//      int *ptr;
//     int *ptr2;
//     ptr = (int *) malloc(600 * sizeof(int)); 
//     for(int i=0; i<600;i++){
//         ptr2 = (int *) malloc(600000 * sizeof(int)); 
//         printf("Enter the value of %d element: \n", i); 
//         scanf("%d", &ptr[i]);
//         free(ptr2);
//     }

//     for(int i=0; i<6;i++){
//         printf("The value of %d element is: %d\n", i, ptr[i]); 
//     }
//     return 0;
// }




/*realloc() - sometimes the dynamic memeory allocated is insufficient or more than required.
realloc is used to allocate memeory of new size using the previous pointer and size.
*/

// #include<stdio.h> 
// #include<stdlib.h> 

// int main(){
//     int *ptr; 
//     ptr = (int *) malloc(6 * sizeof(int)); 
//     for(int i=0; i<6;i++){
//         printf("Enter the value of %d element: \n", i); 
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0; i<6;i++){
//         printf("The value of %d element is: %d\n", i, ptr[i]); 
//     }

//     // Reallocate ptr using realloc()
//     ptr = realloc(ptr, 10*sizeof(int));
    
//     for(int i=0; i<10;i++){
//         printf("Enter the value of %d element: \n", i); 
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0; i<10;i++){
//         printf("The value of %d element is: %d\n", i, ptr[i]); 
//     }


//     return 0;
// }




//<-------------------------------------------------------Practice Questions-------------------------------------------------------->

/*
Q4 . Create an array dynamically capable of storing 5 integers.
Now,use realloc so that it can now store 10 integers

*/

/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    for(int i=0; i<5;i++){
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<5;i++){
        printf("The value of %d element is: %d \n", i, ptr[i]); 
    }

    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=0; i<10;i++){
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<10;i++){
        printf("The value of %d element is: %d \n", i, ptr[i]); 
    }
    return 0;
}

*/


/*
Q5. Create an array of multiplication table of 7 upto 10 times.(7*10=70)
Use realloc to make it store 15 number(7*1 to 7*15)
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(10*sizeof(int));
    for(int i=0; i<10;i++){
        ptr[i] = 7*(i+1);  
        printf("The value of 7 X %d = %d \n", i+1,ptr[i]); 
    }
 
    ptr = realloc(ptr, 15*sizeof(int));
    printf("\nAfter reallocating.....\n\n");
    for(int i=0; i<15;i++){
        ptr[i] = 7*(i+1);  
        printf("The value of 7 X %d = %d \n", i+1,ptr[i]); 
    }
    
    return 0;
}


