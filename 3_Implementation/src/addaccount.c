#include <stdio.h>
#include <string.h>
#include "bank.h"

void account( customer list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        int duplicate;
		printf("\nEnter data for Record #%d", i + 1);
		reenter:
		printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
	   
		for(int j=0;j<i;j++)
		{
			if(list[i].account_no==list[j].account_no)
			{
				printf("Account Number is already taken\n");
				duplicate=1;
				goto reenter;
			
			}
		}
		if(!duplicate)
			i++;
		fseek(stdin,0,SEEK_END);
		
        printf("Enter name :");
        fgets(list[i].name,20,stdin);
        list[i].balance = 0;
		
    } 
}
