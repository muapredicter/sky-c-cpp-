#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT,
};

struct Peoinfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
};

struct massage
{
    struct Peoinfo date[MAX];
    int size;
};

void Initsystem(struct massage* ps);

void ADDmassage(struct massage* ps);

void SHOWmassage(const struct massage* ps);

void DELmassage(struct massage* ps);

void SEARCHmassage(struct massage* ps);

void MODIFYmassage(struct massage* ps);

void SORTmassagebyage(struct massage* ps);

int FINDmassagebyname(struct massage* ps,char name[MAX_NAME]);