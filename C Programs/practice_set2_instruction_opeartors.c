#include <stdio.h>

int main (){
    int sub1,sub2,sub3;
    float total;

    printf("Enter the Marks in SUB1\n");
    scanf("%d", &sub1);
     printf("Enter the Marks in SUB2\n");
    scanf("%d", &sub2);
     printf("Enter the Marks in SUB3\n");
    scanf("%d", &sub3);

    total = (sub1 + sub2 + sub3) / 3;


    if ((total<40) || sub1<33 ||sub2<33 ||sub3<33){
        printf("your total percentage is %f and you are failed\n", total);
    }
    else{
        printf("your total percentage is %f and you are passed\n", total);
    }
    return 0;
}