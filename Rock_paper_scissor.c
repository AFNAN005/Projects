#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpaperscissor(char you, char computer){
    if(you!='r' && you!='p' && you!='s'){
        return 2;         
    }

    if(you == computer){
        return 0;
    }

    if(you=='r' && computer=='s'){
        return 1;
    }
    else if(you=='s' && computer=='r'){
        return -1;
    }

    if(you=='s' && computer=='p'){
        return 1;
    }
    else if(you=='p' && computer=='s'){
        return -1;
    }

    if(you=='p' && computer=='r'){
        return 1;
    }
    else if(you=='r' && computer=='p'){
        return -1;
    }
}
int main(){
    int i;
    char you, computer[3]="rps";
    srand(time(0));
    i = rand()%3;
    printf("ROCK PAPER SCISSOR\n Enter 'r' for Rock, 's' for scissor and 'p' for paper\n");
    scanf("%c",&you);
    int result = rockpaperscissor(you,computer[i]);
    if(result==2){
         printf("\nInvalid\n");  

    }
    else if(result==0){
         printf("\nGame draw\n");  
    }
    else if(result==1){
         printf("\nYou won!!\n");  
    }
    else{
         printf("\nYou lost!\n");  
    }
    return 0;
}