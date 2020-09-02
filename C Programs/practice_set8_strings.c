// way of printing Characters in a string

// #include <stdio.h>

// int main (){
//    // char str[] = "saket";
//     char str[] = {'s', 'a', 'k', 'e', 't', '\0'};
//     char *ptr = str;
//     while(*ptr!='\0'){
//         printf("%c", *ptr);
//         ptr++;
//     }
//     return 0;
// }




//convenient way of printing Characters in a string

// #include <stdio.h>

// int main (){
//     char *ptr = "saket suman";
//     printf("%s", ptr);             //%s - a format specifier
//     return 0;
// }


//Program for Taking string input from user  using %s format specifier
//scanf cannot be used to input multi-word strings with spaces.gets() and puts() can be used for that purpose.


// #include <stdio.h>

// int main (){
//     char s[30];
//     printf("Enter your Name:");
//     scanf("%s", s);
//     printf("The name you entred is- %s", s);
//     return 0;
// }




//Program for Taking multiword string input from user using gets() function.

// #include <stdio.h>

// int main (){
//     char s[30];
//     printf("Enter your Name:");
//      gets(s);
//     printf("The name you entred is: %s", s);
//     return 0;
// }




//puts() can be used to output a string.


// #include <stdio.h>

// int main (){
//     char s[30];
//     printf("Enter your Name:");
//      gets(s);       //geeting input from user
//      puts(s);       //printing the user-input on screen
     
//      return 0;
// }




//Declaring string using a Pointer

// #include <stdio.h>

// int main (){
//     char *ptr = "saket suman";          //declaring string using pointer
//     //char ptr[] = "Sakey suman";       //also another way to declare string
//     printf("%s", ptr);
//     return 0;

// }











//Diffrence in declaring string through char *ptr= " " and char ptr[]=" "


// #include <stdio.h>

// int main (){
//     char *ptr = "saket suman";          //If a string is defined using char *ptr = " ",it can also be reinitialized to something new 
//     ptr = "I am hero";
//     //char ptr[] = "Sakey suman";       //Once a string is defined using char st[]="",it caanot be reinitialized to something new
//     // ptr = "I am hero";
//     printf("%s", ptr);
//     return 0;

// }









//Standard Libbary Function for Strings-----



//strlen() - this function is used to count the number of characters of string excluding the null characters
//To know the length of string


// #include<stdio.h>
// #include <string.h>

// int main(){
//     char *st = "SAKET";
//     int a = strlen(st);
//     printf("The length of string st is %d", a);
//     return 0;
// }







//strcpy() - used to copy the content of second string into first string passed to it.

// #include<stdio.h>
// #include <string.h>

// int main(){
//     char *st = "Hello guys i am copied";
//     char st2[45];
//     strcpy(st2, st);
//     printf("Now the st2 is %s", st2);
//     return 0;
// }








//strcat() -It is used to concatenate two string 

// #include<stdio.h>
// #include <string.h>

// int main(){
//     char st1[45] = "Hello";
//     char *st2 = "Saket";
//     //char st2[45] = "How are you";
//     strcat(st1, st2);
//     printf("Now the st1 is %s", st1);
//     return 0;
// }



//starcmp() - used to comapre two string .It gives 1 or -1 based on (asc value of  char string1 - asc value of char string2).
//it return 0 if strings are equal.

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char st1[45] = "Saket";
//     char *st2 = "Suman";
//     // char st1[45] = "Suman";
//     // char *st2 = "Saket";
//     int val = strcmp(st1, st2);
//     printf("Now the val is %d", val);
//     return 0;
// } 






//<-----------------------------------------------------Practice Questions---------------------------------------------------------->

//Program to take  string as input  from User using %c and %s and cjeck whther they are equal or not

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char st1[34];
//     char st2[34];
//     char c;
//     int i =0;

//     printf("Enter the value of first string\n");
//     scanf("%s", st1); 
//     printf("Enter the value of second string character by character\n");
    
//     while(c!='\n'){ 
//         fflush(stdin);
//         scanf("%c", &c); 
//         st2[i] = c;
//         i++;
//     }
//     st2[i-1]= '\0';

//     printf("The value of st1 is %s\n", st1);
//     printf("The value of st2 is %s\n", st2);
//     printf("strcmp for these strings returns %d\n", strcmp(st1, st2));

//     return 0;
// }



//<------------------------------------------------------------------------------------------>

//Write your own version of  strlen function from <string.h>


// #include<stdio.h>
// int strlen(char * st){
//     char *ptr = st;
//     int len=0;
//     while(*ptr!='\0'){
//         len++;
//         ptr++;
//     }
//     return len;
// }

// int main(){
//     char st[] = "saket";
//     int l = strlen(st);
//     printf("The length of this string is %d", l);
//     return 0;
// }




//<----------------------------------------------------------------------------------------------------->

// #include<stdio.h>
// void slice(char *st, int m, int n){
//     int i = 0;
//      while((m+i)<n){
//          st[i] = st[i+m];
//          i++;
//      }
//      st[i] = '\0';
// }

// int main(){
//     char st[] = "saketsuman";
//     slice(st, 1, 6);
//     printf("%s", st);
//     return 0;
// }








//<----------------------------------------------------------------------------------------------------->

//C program to encrypt a string

// #include<stdio.h>
// void encrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr = *ptr + 1; 
//         ptr++;
//     }
// }

// int main(){
//     char c[] = "come to this room";
//     encrypt(c);
//     printf("Encrypted string is: %s", c);
//     return 0;
// }


//<----------------------------------------------------------------------------------------------------->

//C Program to decrypt a String

// #include<stdio.h>
// void decrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr = *ptr - 1; 
//         ptr++;
//     }
// }

// int main(){
//     char c[] = "dpnf!up!uijt!sppn";
//     decrypt(c);
//     printf("Encrypted string is: %s", c);
//     return 0;
// }
//<----------------------------------------------------------------------------------------------------->

//Program to count the ocurence of given character in a string 

#include<stdio.h>
int occurence(char st[], char c){
    char *ptr = st;
    int count=0;
    while(*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "Harry7777";
    int count = occurence(st, '7');
    printf("Occurences = %d", count);
    return 0;
}
//<----------------------------------------------------------------------------------------------------->