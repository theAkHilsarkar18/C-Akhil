#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct LoginSystem
{
    char gmail[50];
    char password[32];
};
int checkGmail(char gmail[50])
{
    int length = strlen(gmail);
    char lastMail[11] = "moc.liamg@";
    if(length<50)
    {
        int a = 0;
        int checkLast = 0;
        for(int i=length-1; i>length-11; i--)
        {
            if(gmail[i]!=lastMail[a])
            {
                checkLast = 1;
                break;
            }
            a++;
        }
        if(checkLast == 0)
        {
            int checkStart = 0;
            for(int i=0; i<length-11; i++)
            {
                if((gmail[i]>=33 && gmail<=47) || (gmail[i]>=58 && gmail[i]<=64) || (gmail[i]>=91 && gmail[i]<=96) || gmail[i]==32)
                {
                    checkStart = 1;
                    break;
                }
            }
            if(checkStart==0)
            {
                printf("Email Varified !");
                return 1;
            }
            else
            {
                printf("special character or space not allow in mail address !");
            }
        }
        else
        {
            printf("invalid @gmail.com format");
        }
    }
    else
    {
        printf("Invalid Length ! - Your mail length is greter than 50 letters !");
    }
}

int checkPassword(char password[32])
{
    int length = strlen(password);
    if(length>8)
    {   
        int checkSpecialCharacter = 0;
        for(int i=0; i<length; i++)
        {
            if((password[i]>=33 && password<=47) || (password[i]>=58 && password[i]<=64) || (password[i]>=91 && password[i]<=96) )
            {
                checkSpecialCharacter = 1;
                break;
            }
        }
        if(checkSpecialCharacter==1)
        {
            int checkCapitalLetter = 0;
            for(int i=0; i<length; i++)
            {
                if(password[i]>=65 && password[i] <= 90)
                {
                    checkCapitalLetter = 1;
                    break;
                }
            }
            if(checkCapitalLetter == 1)
            {
                int checkSmallLetter = 0;
                for(int i=0; i<length; i++)
                {
                    if(password[i] >= 97 && password[i] <=122)
                    {
                        checkSmallLetter = 1;
                        break;
                    }
                }
                if(checkSmallLetter==1)
                {
                    int checkNumber = 0;
                    for(int i=0; i<length; i++)
                    {
                        if(password[i] >= 49 && password[i] <= 57)
                        {
                            checkNumber = 1;
                            break;
                        }
                    }
                    if(checkNumber==1)
                    {
                        printf("password verified !");
                        return 1;
                    }
                    else
                    {
                        printf("password should be contain at least one number !");
                    }
                }
                else
                {
                    printf("password should be contain at least one small letter !");
                }
            }
            else{
                printf("password should be contain at least one capital letter !");
            }
        }
        else{
            printf("password should be contain at least one special character !");
        }
    }   
    else
    {
        printf("password length should be greater tha  8 character !");
    }
}

int main()
{
    struct LoginSystem l1 = {"abc@gmail.com","@Khilpatel6060"};

    int gmailStatus = checkGmail(l1.gmail);  
    printf("%d",gmailStatus);

    int passwordStatus = checkPassword(l1.password);
    printf("%d",passwordStatus);
    return 0;
}