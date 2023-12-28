#include<stdio.h>

int mantri()
{
    int gunPart1 = 10;
    return gunPart1;
}


int waiter()
{
    int gunPart2 = 10;
    return gunPart2;
}

int oldage()
{
    int gunPart3 = 20;
    return gunPart3;
}

int dealer(int gunPart1,int gunPart2, int gunPart3)
{
    int semiGun = 50 + gunPart1 + gunPart2 + gunPart3;
    return semiGun;
}

int rocky()
{
    int gun = 10 + dealer(mantri(),waiter(),oldage());
    return gun;
}


int main()
{
    printf("Garuda <------ Gun %d",rocky());
    return 0;
}