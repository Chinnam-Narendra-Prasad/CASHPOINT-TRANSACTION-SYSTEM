#include "fun.h"
#include "unity.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_checkbal(void)
{
  TEST_ASSERT_EQUAL(5000.0,checkBalance(5000.0));

  //TEST_ASSERT_EQUAL(0, div(10, 0));
}
int main(){
	UNITY_BEGIN();
	int option;
  		float balance = 15000.00;
  		int choose;
  	bool again = true;

  // insert code here...
  while (again)
    {
      mainMenu ();
      printf ("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
      printf ("Your Selection:\t");
      scanf ("%d", &option);
      switch (option)
	{
	case 1:
	  checkBalance (balance);
	  break;
	case 2:
	  balance = moneyDeposit (balance);
	  break;
	case 3:
	  balance = moneyWithdraw (balance);
	  break;
	case 4:
	  menuExit ();
	  return 0;
	default:
	  errorMessage ();
	  break;
	}
      printf ("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
      printf ("Would you like to do another transaction:\n");
      printf ("If YES....Click 1\n");
      printf ("If NO....Click 2\n");
      scanf ("%d", &choose);

      if (choose == 2)
		{
		again = false;
		menuExit ();
		}
    }

RUN_TEST(test_checkbal);
//RUN_TEST(test_stock);
  //RUN_TEST(test_delete);
  //RUN_TEST(test_enterinfo);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}


