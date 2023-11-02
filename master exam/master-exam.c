#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct LoginSystem
{
    char gmail[50];
    char password[32];
};
int checkGmail(char gmail[50])
{
    int length = strlen(gmail);
    char lastMail[11] = "moc.liamg@";
    if (length < 50)
    {
        int a = 0;
        int checkLast = 0;
        for (int i = length - 1; i > length - 11; i--)
        {
            if (gmail[i] != lastMail[a])
            {
                checkLast = 1;
                break;
            }
            a++;
        }
        if (checkLast == 0)
        {
            int checkStart = 0;
            for (int i = 0; i < length - 11; i++)
            {
                if ((gmail[i] >= 33 && gmail <= 47) || (gmail[i] >= 58 && gmail[i] <= 64) || (gmail[i] >= 91 && gmail[i] <= 96) || gmail[i] == 32)
                {
                    checkStart = 1;
                    break;
                }
            }
            if (checkStart == 0)
            {
                printf("Email Varified !\n");
                return 1;
            }
            else
            {
                printf("special character or space not allow in mail address !\n");
            }
        }
        else
        {
            printf("invalid @gmail.com format\n");
        }
    }
    else
    {
        printf("Invalid Length ! - Your mail length is greter than 50 letters !\n");
    }
}

int checkPassword(char password[32])
{
    int length = strlen(password);
    if (length > 8)
    {
        int checkSpecialCharacter = 0;
        for (int i = 0; i < length; i++)
        {
            if ((password[i] >= 33 && password <= 47) || (password[i] >= 58 && password[i] <= 64) || (password[i] >= 91 && password[i] <= 96))
            {
                checkSpecialCharacter = 1;
                break;
            }
        }
        if (checkSpecialCharacter == 1)
        {
            int checkCapitalLetter = 0;
            for (int i = 0; i < length; i++)
            {
                if (password[i] >= 65 && password[i] <= 90)
                {
                    checkCapitalLetter = 1;
                    break;
                }
            }
            if (checkCapitalLetter == 1)
            {
                int checkSmallLetter = 0;
                for (int i = 0; i < length; i++)
                {
                    if (password[i] >= 97 && password[i] <= 122)
                    {
                        checkSmallLetter = 1;
                        break;
                    }
                }
                if (checkSmallLetter == 1)
                {
                    int checkNumber = 0;
                    for (int i = 0; i < length; i++)
                    {
                        if (password[i] >= 49 && password[i] <= 57)
                        {
                            checkNumber = 1;
                            break;
                        }
                    }
                    if (checkNumber == 1)
                    {
                        printf("password verified !\n");
                        return 1;
                    }
                    else
                    {
                        printf("password should be contain at least one number !\n");
                    }
                }
                else
                {
                    printf("password should be contain at least one small letter !\n");
                }
            }
            else
            {
                printf("password should be contain at least one capital letter !\n");
            }
        }
        else
        {
            printf("password should be contain at least one special character !\n");
        }
    }
    else
    {
        printf("password length should be greater tha  8 character !\n");
    }
}

int main()
{
    FILE *filePointer;

    filePointer = fopen("login.txt", "w");

    struct LoginSystem l1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Register your mail : ");
        gets(l1[i].gmail);
        checkGmail(l1[i].gmail);
        printf("Register your password : ");
        gets(l1[i].password);
        checkPassword(l1[i].password);
        printf("\n\n");
    }

    // login system

    char gmail[50];
    char password[32];
    int status = 0;

    printf("\n-----------------Login Your Account-----------------\n");
    printf("Enter your mail : ");
    gets(gmail);
    printf("Enter your password : ");
    gets(password);
    int finalCheck = 0;
    for (int i = 0; i < 3; i++)
    {

        int x = strcmp(gmail, l1[i].gmail);
        int y = strcmp(password, l1[i].password);

        if (x == 0 && y == 0)
        {
            finalCheck = 1;
            printf("Login Successful !");
            fprintf(filePointer, "Email : %s\nPassword : %s", l1[i].gmail, l1[i].password);
        }
    }

    if (finalCheck == 0)
    {
        printf("Login Failed !");
    }

    return 0;
}