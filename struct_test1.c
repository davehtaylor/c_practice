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

/* ----- Struct Getters ----- */

char *
get_first_name(Person *person)
{
    return person->name.first_name;
}

char *
get_last_name(Person *person)
{
    return person->name.last_name;
}

/* ----- Struct Setters ----- */

void
set_first_name(Person *person, char *first)
{
    strcpy(person->name.first_name, first);
}

void
set_last_name(Person *person, char *last)
{
    strcpy(person->name.last_name, last);
}

int
main(void) 
{
    Person person1;
    
    char temp1[20];
    char temp2[20];

    puts("Please enter your first name:");
    scanf("%s", temp1);

    puts("Please enter your last name:");
    scanf("%s", temp2);

    set_first_name(&person1, temp1);
    set_last_name(&person1, temp2);

    printf("Your name is %s %s.\n",
            get_first_name(&person1), get_last_name(&person1));


    return 0;
}
