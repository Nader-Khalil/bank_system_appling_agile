#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct client
{
    char *name;
    int id;
    int account_no;
    int password;

} Client;

typedef struct admin
{
    char *name;
    int id;
    int account_no;
    int password;

} Admin;

void admin_init(Admin *person);
void admin_Login();
void admin_CreateAccount();
void admin_Logout();
void admin_EditProfile();
void admin_MakeTranaction();
void admin_ChangeAccountStatus();
void admin_GetCash();
void admin_DepositInAccount();
void admin_ReturnToMainMenu();

void admin_init(Admin *person)
{
    person->name = " ";
    person->id = NULL;
    person->account_no = NULL;
    person->password = NULL;
}

void admin_Login() {}
void admin_CreateAccount() {}
void admin_Logout() {}
void admin_EditProfile() {}
void admin_MakeTranaction() {}
void admin_ChangeAccountStatus() {}
void admin_GetCash() {}
void admin_DepositInAccount() {}
void admin_ReturnToMainMenu() {}
