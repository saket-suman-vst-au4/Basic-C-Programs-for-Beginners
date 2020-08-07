// #include <stdio.h>

// int main (){
//     int i = 0;
//     while(i<11){
//         printf("%d\n", i + 10);
//         i++;
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main (){
//     int i = 5;
//     printf("The value after i++ is %d\n", i++);  //pehle print fir increment
//     printf("The value after ++i is %d\n", ++i);  //pehle increment fir print
//     return 0;
// }







// #include<stdio.h>

// int main(){
//     float tax = 0, income;
//     printf("Enter your income\n");
//     scanf("%f", &income);

//     if(income>=250000 && income<=500000){
//         tax = tax + 0.05 * (income - 250000);
//     }
    
//     if (income >= 500000 && income <= 1000000)
//     {
//         tax = tax + 0.20 * (income - 500000);
//     }

//     if (income >= 1000000)
//     {
//         tax = tax + 0.30 * (income - 1000000);
//     }
    
//     printf("Your net income tax to be paid by 26th of this month is %f\n", tax);

//     return 0;
// }






// #include <stdio.h>

// int main (){
//     int year;
//     printf("Enter the Year\n");
//     scanf("%d", &year);
//     if(year%4 == 0 && year%100 != 0){
//         printf("Yes it is not leap year");
//     }
//      else if (year%400 == 0){
//        printf("yes it is a leap year");  
//     }
//     else{
//        printf("NO it is not a leap year");  
//     }

//     return 0;
// }





// #include <stdio.h>

// int main (){
//     char letter;
//     printf("Enter your character\n");
//     scanf("%c", &letter);
//     if(letter>=97 && letter<=122){
//         printf("It is LowerCase");
//     }else{
//         printf("Not a lowercase");
//     }
//     return 0;
// }




#include <stdio.h>

int main (){
    int n1,n2,n3,n4;
    printf("Enter your first no\n");
    scanf("%d", &n1);
     printf("Enter your second no\n");
    scanf("%d", &n2);
     printf("Enter your third no\n");
    scanf("%d", &n3);
     printf("Enter your fourth no\n");
    scanf("%d", &n4);
    if(n1>n2>n3>n4){
        printf("This N1 is Greatest");
    }
    else if( n2>n3 && n2>n4){
        printf("This N2 is Greatest");
    }
    else if( n3>n4){
        printf("This N3 is Greatest");
    }
    else{
        printf("This N4 is Greatest");
    }

    return 0;
}