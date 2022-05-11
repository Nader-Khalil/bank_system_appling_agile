#include <stdio.h>
#include "admin.c"
#include "admin.h"
#include <stdlib.h>
#include <string.h>
#include "account.h"
#include "account.c"


//void account_init(Account* account);

int main()
{
  AccountLinkedList accListPtr ;
  AccountLinkedList* accountsList = &accListPtr;
  accountLinkedList_init(accountsList); 
  //-----------------------------------------
  Account accountPtr;
  Account* account = &accountPtr ;
  account_init(account);
  account->fullName ="acc name";
  account->age = 25;
  printf("here");
  char* accid = account->accountID;
  admin_CreateAccount(account,accountsList);
  printf("\n %s",account->accountID);
  printf("\n %s",account->password);
  
  Account accountPtr2;
  Account* account2 = &accountPtr2 ;
  account_init(account2);
  //account2->accountID= "444";
  //account2->password ="adm";
  account2->fullName ="nader test";
  account2->age = 24;
  admin_CreateAccount(account2,accountsList);
  //printf("\n %s",account2->accountID);
  //printf("\n %s",account2->password);
  //--------------------------

 // account = admin_OpenExstingAccount(accountsList,accid);
  //printf("\n %d",account->age);
  //printf("\n %s",account2->accountID);


  printf("here");
  return 0;
}
