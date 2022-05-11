#ifndef AdminPARSER_H
#define AdminPARSER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "account.c"
//#include "client.c"


typedef struct admin
{
    char *username;
    int password;

} Admin;

extern void admin_init(Admin* admin);
extern void admin_CreateAccount(Account* newAccount,AccountLinkedList* AccountsList ) ;
extern Account* admin_OpenExstingAccount(AccountLinkedList* account,  char* TargetID);
//void admin_Logout();
extern void admin_EditProfile();
extern void admin_MakeTranaction();
extern void admin_ChangeAccountStatus();
extern void admin_GetCash();
extern void admin_DepositInAccount();
extern void admin_ReturnToMainMenu(); 


#endif