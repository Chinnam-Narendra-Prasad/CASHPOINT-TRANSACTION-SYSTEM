/**
 * @file bank.h
 * @author Archana N N (archanaathreya2000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef BANK_H
#define BANK_H

typedef struct customer
{
    int account_no;
    char name[80];
    int balance;
	
} customer ;
/**
 * @brief Function to add account details
 * 
 */
void account(struct customer[], int);
/**
 * @brief Function to display customer details
 * 
 */
void display(struct customer[], int);
/**
 * @brief Function to search for an account
 * 
 * @return int 
 */
int search(struct customer[], int, int);
/**
 * @brief Function to deposit cash
 * 
 */
void deposit(struct customer[], int, int, int);
/**
 * @brief Function to withdraw cash
 * 
 */
void withdraw(struct customer[], int, int, int);
/**
 * @brief Function to check login password
 * 
 * @param pass 
 * @param password 
 * @return int 
 */
int check(char *pass,char *password);

#endif 

