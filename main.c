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
   
 
  Account accountPtr;
  Account* account = &accountPtr ;
  account_init(account);
  account->fullName ="acc name";
  account->age = 25;
  printf("here");
  //--------------------------
  AccountLinkedList accListPtr ;
  AccountLinkedList* accountsList = &accListPtr;
  accountLinkedList_init(accountsList);
  printf("here");
  admin_CreateAccount(account,accountsList);

  printf("here");
  
  
    return 0;
}
