#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess_number, number_of_guesses=1;
    srand(time(0));           //to generate diffrent number each time .injecting randome behaviour in program
    number = rand()%100 + 1;   // Generates a random number between 1 and 100
    // Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess_number);
        if(guess_number > number){
            printf("Enter Lower number please!\n");
        }
        else if(guess_number < number){
            printf("Enter Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", number_of_guesses);
        }
        number_of_guesses++;

    }while(number_of_guesses != number);
    
    return 0;
}