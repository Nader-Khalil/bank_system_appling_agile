#ifndef AccountPARSER_H
#define AccountPARSER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct account
{
    char* fullName;
    char *fullAddress;
    int nationalID;
    int age;
    char *accountID;
    char* guardian;
    int guardianNationalID;
    char *status;
    char *balance;
    char *password;
    struct account* Next;
} Account;

typedef struct accountLinkedList
{
   Account* head;
   int size;
} AccountLinkedList;

extern void account_init(Account* account);
extern void accountLinkedList_init(AccountLinkedList* accountsList);
extern char* generate_AccountID(int id_length);
extern char* generate_Password(int password_length);

#endif