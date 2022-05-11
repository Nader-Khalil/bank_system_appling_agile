#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "account.h"



extern void account_init(Account* account)
{
  account->password = generate_Password(8);
  account->accountID = generate_AccountID(10); 
  
}

extern void accountLinkedList_init(AccountLinkedList* accountsList)
{
  accountsList->head = NULL;
  accountsList->size =0; 
}

extern char* generate_Password(int password_length)
{   int i;
    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/";
    srand(time(NULL));
    char* str = (char*) malloc(sizeof(char) * password_length);
    for(i = 0; i < password_length; i++) { str[i] = list[rand() % (sizeof list - 1)];}
    str[i] = '\0';
    return str;
}


extern char* generate_AccountID(int id_length)
{
    char list[] = "1234567890";
    int i;
    srand(time(NULL));
    char* str = (char*) malloc(sizeof(char) * id_length);
    for(i = 0; i < id_length; i++) {str[i] = list[rand() % (sizeof list - 1)];}
    str[i] = '\0';
    return str;
}
