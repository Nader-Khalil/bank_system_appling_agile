#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "account.h"
//#include "account.c"
//#include "client.c"
#include "admin.h"





extern void admin_init(Admin* admin)
{
    admin->username = "admin";
    admin->password = 123;
} 



extern void admin_CreateAccount(Account* newAccount,AccountLinkedList* AccountsList ) 
{

    Account* ptrAccount= (Account*) malloc(sizeof(Account));
    
    //account_init(ptrAccount) ;
    ptrAccount->fullName = newAccount->fullName;
    ptrAccount->fullAddress = newAccount->fullAddress;
    ptrAccount->age = newAccount->age;
    ptrAccount->nationalID = newAccount->nationalID;
    if(newAccount->age <= 21 ){ ptrAccount->guardianNationalID = newAccount->guardianNationalID;}
    ptrAccount->balance = newAccount->balance;
    ptrAccount->status ="Active";
    ptrAccount->Next =NULL;

    if(AccountsList->head ==NULL){AccountsList->head = ptrAccount;}
    else {AccountsList->head->Next = ptrAccount;}
    AccountsList->size++;
    printf("Added Account Successfully!");
}


extern Account* admin_OpenExstingAccount(AccountLinkedList* account){}




//void admin_Logout() {}
extern void admin_EditProfile() {}
extern void admin_MakeTranaction() {}

extern void admin_ChangeAccountStatus() {}
extern void admin_GetCash() {}
extern void admin_DepositInAccount() {}
extern void admin_ReturnToMainMenu() {}
