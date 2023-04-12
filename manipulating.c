
// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS//this is to get access for the user to use strcat and scanf
#define BUFFER_SIZE 80 //this is the macro that define BUFFER_SIZE = 80
#include "manipulating.h" //this is to include manipulating.h into the manipulating.c, so it is linking the .c file with .h file
/* Version 1 */
void manipulating (void) {//this is a function that gonna concatenate two strings into one string(V1); this is a function that gonna compare two strings(V2);

// printf ("*** Start of Concatenating Strings Demo ***\n"); //display all inside " "
// char string1 [BUFFER_SIZE]; //this is the string variable which will contain what user will input first
// char string2 [BUFFER_SIZE]; //this is the string variable which will contain what user will input second
// do {
//   printf("Type the 1st string (q - to quit):\n"); //display all inside " "
//   fgets(string1, BUFFER_SIZE, stdin); //this is like scanf, it will take and hold the data inside string1
//   string1[strlen(string1) - 1] = '\0'; //this is the way that
//   if ((strcmp (string1, "q") != 0)) { //this is a if statement that have condition is that if the person choose q it will not run the context in if
//     printf ("Type the 2nd string:\n"); //display all inside " "
//     fgets (string2, BUFFER_SIZE, stdin); //this is like scanf, it will take and hold the data inside string2
//     string2 [strlen (string2) - 1] = '\0';
//     strcat (string1, string2); //this is the concatenator for these strings
//     printf ("Concatenated string is \'%s\'\n", string1); //display all inside " " and the result of concatenation
//   }
// } while (strcmp (string1, "q") != 0); //this is do while loop and it will continue until user input q
// printf ("*** End of Concatenating strinas Demo ***\n\n"); //display all inside " "

/* Version 2 */
  printf("*** Start of Comparing Strings Demo ***\n");//display all inside " "
  char compare1[BUFFER_SIZE];//this is the string variable which will contain what user will input first
  char compare2[BUFFER_SIZE];//this is the string variable which will contain what user will input second
  int result;//initialize variable which will result of comparing

  do {
    printf("Type the 1st string to compare (q - to quit):\n");//display all inside " "
    fgets (compare1, BUFFER_SIZE, stdin);//this is like scanf, it will take and hold the data inside compare1
    compare1 [strlen (compare1) - 1] = '\0';
    if (strcmp(compare1, "q") != 0) {
      printf("Type the 2nd string to compare:\n");//display all inside " "
      fgets(compare2, BUFFER_SIZE, stdin);//this is like scanf, it will take and hold the data inside compare2
      compare2 [strlen (compare2) - 1] = '\0';
      result = strcmp(compare1, compare2);
      if (result < 0) {
        printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);//display all inside " "
      } else if (result == 0) {
        printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);//display all inside " "
      } else {
        printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);//display all inside " "
      }
    }
  } while (strcmp(compare1, "q") != 0);//this is do while loop and it will continue until user input q
  printf("*** End of Comparing Strings Demo ***\n");//display all inside " "
}
/* Version 3 */




