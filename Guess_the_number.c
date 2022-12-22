#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,guess,guesses=1;
    srand(time(0));     // To avoid the same number printing continuously
    num = rand()%100 + 1;   // Generates random number between 1-100
        printf("Guess the number between 1 to 100\n");
    do{
        scanf("%d",&guess);
        if(guess<num){
             printf("\n\nEnter higher number!\n");  
        }
        else if(guess>num){
             printf("\n\nEnter lower number!\n");  
        }
        else{
            printf("you guessed it in %d attempts", guesses);   
        }
        guesses++;
    }while(guess!=num);
    return 0;
}