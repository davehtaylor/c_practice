#include <stdio.h>
#include <string.h>

typedef struct {
    char first_name[20];
    char last_name[20];
} Name;

typedef struct {
    unsigned int street_num;
    char street[40];
    char city[20];
    char state[20];
    unsigned int zip;
} Address;

typedef struct {
    Name name;
    Address address;
} Person;

void
set_first_name(Name *user, char *first)
{
    strcpy(user->first_name, first);
}

void
set_last_name(Name *user, char *last)
{
    strcpy(user->last_name, last);
}

char *
get_first_name(Name *user)
{
    return user->first_name;
}

char *
get_last_name(Name *user)
{
    return user->last_name;
}

int
main(void) 
{
    Name user;
    char temp1[20];
    char temp2[20];

    printf("Please enter your first name:\n");
    scanf("%s", temp1);

    printf("Please enter your last name:\n");
    scanf("%s", temp2);
    
    set_first_name(&user, temp1);
    set_last_name(&user, temp2);

    printf("Your name is %s %s\n",
            get_first_name(&user), get_last_name(&user));

    return 0;
}
