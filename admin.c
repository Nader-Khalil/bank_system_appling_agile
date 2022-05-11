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
    ptrAccount->accountID = newAccount->accountID;
    ptrAccount->password = newAccount->password;
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


extern Account* admin_OpenExstingAccount(AccountLinkedList* account,  char* TargetID)
{   int condition;
    Account* pn = account->head;
    char* CurrID = pn->accountID;

    while(pn != NULL)
    {   condition = strcmp(CurrID,TargetID);
        if(condition ==0)
        {
            //CurrID =pn->data;
            printf("current id %s \n ",CurrID);
            return pn;
            //break;
        }
        else
        {
        pn = pn->Next;
        
        }
    }
    if(condition != 0)
    {   printf("dosen't exist id \n ");
        return NULL;
    }
    else
    {
        return pn   ;
    }
    return NULL;
}




//void admin_Logout() {}
extern void admin_EditProfile() {}
extern void admin_MakeTranaction() {}

extern void admin_ChangeAccountStatus() {}
extern void admin_GetCash() {}
extern void admin_DepositInAccount() {}
extern void admin_ReturnToMainMenu() {}
