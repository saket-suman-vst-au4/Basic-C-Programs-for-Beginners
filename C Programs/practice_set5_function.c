// #include<stdio.h>
// void display(); // Function prototype

// int main(){
//     int a;
//     printf("Initializing display function\n");
//     display(); // Function Call
//     printf("Display function finished its work\n");
//     return 0;
// }

// // Function definition
// void display(){
//     printf("This is display\n"); 
// }
















// #include<stdio.h>
// void goodMorning();
// void goodAfternoon();
// void goodNight();

// int main(){
//     goodMorning();
//     goodAfternoon();
//     goodNight();
//     return 0;
// }

// void goodMorning(){
//     printf("Good Morning \n");
// }

// void goodAfternoon(){
//     printf("Good Afternoon \n");
// }

// void goodNight(){
//     printf("Good Night \n");
// }





















// #include<stdio.h>
// void goodMorning();
// void goodAfternoon();
// void goodNight();

// int main(){
//     goodMorning();
//     return 0;
// }

// void goodMorning(){
//     printf("Good Morning Harry\n");
//     goodAfternoon();
// }

// void goodAfternoon(){
//     printf("Good Afternoon Harry\n");
//     goodNight();
// }

// void goodNight(){
//     printf("Good Night Harry\n");
// }

















// #include<stdio.h>
// // sum is a function which takes a and b as input and returns an integer as an output
// int sum(int a, int b); // function prototype declaration

// int main(){
//     int c;
//     c = sum(2, 15); // function call
//     printf("The value of c is %d\n", c);
//     return 0;
// }

// int sum (int a, int b){
//     int c;
//     c = a + b;
//     return c;
// }






// #include<stdio.h>
// void change(int a);

// int main(){
//     int b = 344;
//     printf("The value of b before change is %d\n", b);
//     change(b);
//     printf("The value of b after change is %d\n", b);
//     return 0;
// }

// void change(int b){
//     b = 77;
// }










// #include<stdio.h>
// #include<math.h>

// int main(){
//     int side;
//     printf("Enter the value of side\n");
//     scanf("%d", &side);
//     printf("The value of area is %f", pow(side,2));

//     return 0;
// }







// #include <stdio.h>
// float average(int a, int b, int c);

// int main (){
//     int a, b, c;
//     printf("Enter the Value of Num1 Num2 Num3:");
//     scanf("%d %d %d",&a, &b, &c);
//     printf("Average Of all Number is %f", average(a, b, c));

//         return 0;
// }
//     float average(int a, int b, int c){
//         float result;
//         result = (float)(a + b + c) / 3;
//         return result;
//     }



// #include <stdio.h>
// float celcius_to_Farenheit(float celcius, float Farenheit);

// int main (){

//     float c,F;
//     printf("Enter Temperature in celcius\n");
//     scanf("%f", &c);
//     printf("Temperature in farenheit is %f", celcius_to_Farenheit(c, F));
    
//     return 0;
//   }
//     float celcius_to_Farenheit(float celcius,float Farenheit){
//         Farenheit = (float)(celcius * 9/5) + 32;
//         return Farenheit;
//     }





// #include <stdio.h>

// float force_of_attarction(float mass);   //declaring a function
// int main (){
//     float m;
//     printf("Enter mass of body \n");
//     scanf("%f",&m);
//     printf("Force is %.2f\n", force_of_attarction(m));
//     return 0;
// }
// float force_of_attarction(float mass){
//     float result = mass * 9.8;
//     return result;
// }





// #include <stdio.h>

// int main (){
//     int a = 5;
//     printf("%d %d %d\n", a,++a,a++);
//     return 0;
// }



// #include <stdio.h>

// int main (){
//     int a = 5; 
//     printf("%d\n", a);
//     printf("%d\n",++a);
//     printf("%d\n",a++);
//     return 0;
// }



#include <stdio.h>
//  float average(int a, int b, int c)

// int main (){
//     int Num1, Num2, Num3;
//     printf("Enter the Value of Num1 Num2 Num3");
//     scanf("%d %d %d", &Num1, &Num2, &Num3);
//     printf("Average Of all Number is%f", average(a,b,c));

//         return 0;
// }
//     float average(int a, int b, int c){
//         float result;
//         result = (float)(a + b + c) / 3;
//         return result;
//     }
