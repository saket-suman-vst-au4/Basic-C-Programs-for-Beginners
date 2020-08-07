// #include <stdio.h>

// int main(){
//     int length = 5;
//     int width = 5;
//     int area = length * width;
//     printf("area of rectangle is %d", area);
//     return 0;
// }


// #include <stdio.h>

// int main (){
//     int length;
//     printf("Enter length of Recatangle\n");
//     scanf("%d", &length);

//     int width;
//     printf("Enter width of Recatangle\n");
//     scanf("%d", &width);

//     int area = length * width;

//     printf("Area of Reactangle is %d", area);

//     return 0;
// }




// #include <stdio.h>

// int main (){

//     float celcius,Farenheit;
//     printf("Enter Temperature in celcius\n");
//     scanf("%f", &celcius);
//      Farenheit = (celcius * 9/5) + 32;
//     printf("Temperature in farenheit is %f", Farenheit);

//     return 0;
// }



#include <stdio.h>

int main (){
    float p, r,si;
    int t;

    printf("Enter Principal amount\n");
    scanf("%f", &p);

     printf("Enter Rate\n");
    scanf("%f", &r);

     printf("Enter Time\n");
    scanf("%d", &t);


    si = (p * r * t) / 100;

    printf("Simple Interest is %f", si);


    return 0;
}