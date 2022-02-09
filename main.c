#include <stdio.h>
#include <stdlib.h>


typedef struct usuario         // REGISTRO DE USUARIO, LOGIN e SENHA TESTADOS! (((OK)))
{
    char login[10];
    char senha[10];
} usuario; usuario p[1];

int main()
{
system("color 5F");

while(1)
{
    char login[10];
    char senha[10];

    strcpy(p[0].login, "admin");
    strcpy(p[0].senha, "123456");

    printf("\n\n");
    printf ("\t\t  ================================\n");
    printf ("\t\t  |                              |\n");
    printf ("\t\t  |  -----   SISKINE2022  -----  |\n");
    printf ("\t\t  |                              |\n");
    printf ("\t\t  =============By Tons============\n");

    printf("\n\n");
    printf("\t\t    Nome de usuario: ");
    fflush(stdin);
    scanf("%s", login);

    printf("\n\n");
    printf("\t\t    Senha: ");
    fflush(stdin);
    scanf("%s", senha);
    system("cls");


if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0))
{
    printf("\n\n");
    printf("\t\t *** LOGIN EFETUADO COM SUCESSO ***\n\n\n");
}
else
{
    printf("\n\n");
    printf("\t\t *** ATENCAO - DADOS INCORRETOS ***\n\n\n");
}
system("color 5F");
system("pause>null");
}
}
