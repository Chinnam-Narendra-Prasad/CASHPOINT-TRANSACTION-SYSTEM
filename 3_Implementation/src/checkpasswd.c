#include <stdio.h>
#include <string.h>
#include "bank.h"
//This function is to check password
int check(char *pass,char *password)
{
	
	 int c=strcmp(pass,password);
	 return c;
		
}