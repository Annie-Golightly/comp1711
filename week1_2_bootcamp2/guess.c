#include <stdio.h>
int main(){
    int num = 7;
    int userGuess;
    printf("Guess the number: ");
    scanf("%d", &userGuess);
    while (userGuess != num){
        if (userGuess > num){
            printf("Guess is too high!");
        }
        else{
            printf("Guess is too low!");
        }
        printf("Guess the number: ");
        scanf("%d", &userGuess);
        
    }
    printf("Correct \n");
    return 0 ;
}