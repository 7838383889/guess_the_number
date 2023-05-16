#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int number,n;
  char choice;
  printf("Hello master\nare you ready to play???(Y(yes)/N(no)\n");
  scanf("%c",&choice);
  if(choice == 'y' || choice == 'Y')
  {
  srand(time(0));
  number = rand()%100;
  do{
  printf("Guess the number between 1 to 100 : ");
    scanf("%d",&n);
     if(n<number)
      printf("some bigger!!!\n");
    else if (n>number)
      printf("some lower!!!\n");
    else if (n==number)
      printf("!!!! YOU WON THE GAME YOU GUESS THE RIGHT NUMBER !!!!\n");
    else
      printf("error\n");  
  //printf("number = %d\n",number);
  }while(number != n);
  }
  else
    printf("!!! REALLY YOU DON'T WANT TO PLAY GAME BY THE WAY ITS YOUR CHOICE !!!");
  return 0;
}