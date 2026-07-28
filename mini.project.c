
     //Mini Project by using c//
     //Number Guessing Game//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

int random,guess;

int no_of_guess = 0;
srand(time(NULL));


printf("Welcome to the world of random Guessing Number\n ");
random = rand() % 100+1;


do{
    printf("Enter your Guess number between(1-100:)\n");
    scanf("%d",&guess);
    no_of_guess++;


    if(guess<random){

printf("Guess a larger number:\n");

    }else if(guess>random){

        printf("Guess a smaller number:\n");
    }else{
    	
	printf
	("Congratulation! you have successfully guessed the number in %d attempts\n",no_of_guess);
    }


}while(guess != random);

printf("Bye Bye! Thanks for playing\n ");

printf("Developed By: AkashDeep Patra\n");

}
