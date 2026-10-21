// Number Guessing Game 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
  {
    srand(time(NULL)); 
    int guess, number, attempts = 0;
    number= rand()%100 +1 ;
    printf("Welcome to the Number Guessing Game!\n");
    do{
     printf("Guess a Number between 1 and 100:\n");
     scanf("%d", &guess);
     attempts++;
     if(guess>number)
     {
       printf("Lower! Try again.\n");
     }
     else if(guess<number)
     {
       printf("Higher! Try again.\n");
     }
     else
     {
       printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
       break;
     }
    }while(guess!=number);
    return 0;
  }
