
#include <stdio.h>
#include <string.h>
#include "bank.h"

void display( customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\t\tName\t\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t\t%s\t\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}