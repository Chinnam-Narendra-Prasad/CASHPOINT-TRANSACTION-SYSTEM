#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void mainMenu ()
{

  printf ("***Hello!***\n");
  printf ("**Welcome To Cash Point**\n\n");
  printf ("Please choose one of the options\n\n");
  printf ("For Check Balance....Click 1\n");
  printf ("For Deposit....Click 2\n");
  printf ("For Withdraw Click 3\n");
  printf ("For Exit....Click 4\n\n");
}				//Main Menu

float checkBalance (float balance)
{
  printf ("You Choose to See your Balance\n");
  printf ("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
  return balance;
}				//Check Balance

float moneyDeposit (float balance)
{
  float deposit;
  printf ("You choose to Deposit a money\n");
  printf ("$$$$Your Balance is: $%.2f\n\n", balance);
  printf ("**Enter your amount to Deposit\n");
  scanf ("%f", &deposit);
  balance += deposit;
  printf ("\n****Your New Balance is:   $%.2f\n\n", balance);
  return balance;
}				//money deposit

float moneyWithdraw (float balance)
{
  float withdraw;
  bool back = true;
  printf ("You choose to Withdraw a money\n");
  printf ("$$$$Your Balance is: $%.2f\n\n", balance);
  while (back)
    {
      printf ("Enter your amount to withdraw:\n");
      scanf ("%f", &withdraw);
      if (withdraw < balance)
	{
	  back = false;
	  balance -= withdraw;
	  printf ("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
	  printf ("**Your New Balance is:   $%.2f\n\n", balance);

	}
      else
	{
	  printf ("+++You don't have enough money+++\n");
	  printf ("Please contact to your Bank Customer Services\n");
	  printf ("**Your Balance is:   $%.2f\n\n", balance);
	}
    }
  return balance;
}				//money withdraw

void menuExit ()
{
  printf ("--------------Take your receipt!!!------------------\n");
  printf ("-----Thank you for using Cash Point!!!-----\n");
}				//exit menu

void errorMessage ()
{
  printf ("+++!!!You selected invalid number!!!+++\n");
}
