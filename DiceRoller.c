/*Braelin Kinsel 1002146524*/
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define NUMBEROFREROLLS 3
#define NUMBEROFFACES 6
#define NUMBEROFDICE 5

void RollDice(int d[])
{
  for (int i = 0; i < NUMBEROFDICE; i++)
   {
     d[i] = rand() % NUMBEROFFACES + 1;
   }
}

void PrintRoll(int t[])
{
  for (int i = 0; i < NUMBEROFDICE; i++)
  {
    printf("%d\t", t[i]);
  }
}

int HowManyFaces(int m[], int SearchF)
{
  int NumberOfFaces = 0; 
   for (int i = 0; i < NUMBEROFDICE; i++)
   {
     if (m[i] == SearchF)
     {
      NumberOfFaces++;
     }
   }
   return NumberOfFaces;
}

int main(void)
{
  int dice[6] = {NUMBEROFDICE};
  int howMany[7] = {NUMBEROFFACES};
  int numberOfRolls = 0; 
  int numberOfReRolls = NUMBEROFREROLLS; 
  char Answer = 'N';
  int ofAKind = 0, FullHouse = 0, TwoPair = 0, CSlam = 0, LargeStraight = 0, SmallStraight = 0, i = 0; 
  srand(time(0));
  do 
  {
    RollDice(dice);
    printf("\n\nYou rolled\n\n");
    PrintRoll(dice);
    numberOfRolls++;
    for (int i = 0; i < NUMBEROFFACES; i++)
    {
        howMany[i] = HowManyFaces(dice, i+1);
    }

    for (int i = 0; i < NUMBEROFFACES; i++)
    {
      if(howMany[i] = 3)
      {
        FullHouse += 3;
      }
      if(howMany[i] = 2)
      {
        FullHouse += 2;
        TwoPair++;
      }
      if(howMany[i] = NUMBEROFDICE)
      {
        CSlam++;
      }
      if(howMany[i] = 1)
      {
        LargeStraight++;
      }
      if(howMany[i] = 0 && LargeStraight < 5 & LargeStraight > 0)
      {
        LargeStraight = 0;
      }
      else if(howMany[i] >= 1)
      {
        SmallStraight++;
      }
      if(howMany[i] = 0 && SmallStraight > 0 && SmallStraight < 4)
      {
        SmallStraight = 0;
      }
      if(howMany[i] = 4)
      {
        ofAKind = 4; 
      }
      if(howMany[i] = 3)
      {
        ofAKind = 3;
      }
    }

    if(LargeStraight = 5)
    {
      printf("\n\nLarge Straight");
    }
    else if(SmallStraight >= 4)
    {
      printf("\n\nSmall Straight");
    }
    else if(FullHouse = 5)
    {
      printf("\n\nFull House");
    }
    else if(CSlam = 1)
    {
      printf("\n\nCSlam!!");
    }
    else if(ofAKind = 4)
    {
      printf("\n\nFour of a kind");
    }
    else if(ofAKind = 3)
    {
      printf("\n\nThree of a kind");
    }
    else if(TwoPair = 2)
    {
      printf("\n\nTwo Pair");
    }
    else
    {
      printf("\n\nYou have nothing");
    }


    if(numberOfRolls != NUMBEROFREROLLS)
    {
      printf("\nDo you want to reroll? \n");
      scanf("%c", &Answer);
    }
    
    ofAKind = 0;
    FullHouse = 0;
    TwoPair = 0;
    CSlam = 0;
    LargeStraight = 0;
     SmallStraight = 0;
  } 
  while (Answer = 'Y' && numberOfRolls < numberOfReRolls);
  return 0;
}