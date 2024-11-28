// GUESSES THE NUMBER 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
            
            // Generating the random number 
    
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do{
        printf("GUESS THE NUMBER :");
        scanf("%d",&guessed);
        if (guessed<randomNumber){
            printf("Higher number please\n");
        }
        else if (guessed>randomNumber){
            printf("Lower number please\n");}
        else 
        {printf("CONGRATULATION YOU WIN\n");}
        no_of_guesses++;
    }while(guessed!=randomNumber);

    printf("you guessed the number in %d attempts\n",no_of_guesses);
    return 0;
}