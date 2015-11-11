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

unsigned int
get_street_num(Person *person)
{
    return person->address.street_num;
}

char *
get_street(Person *person)
{
    return person->address.street;
}

char *
get_city(Person *person)
{
    return person->address.city;
}
    
char *
get_state(Person *person)
{
    return person->address.state;
}

unsigned int
get_zip(Person *person)
{
    return person->address.zip;
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

void
set_street_num(Person *person, unsigned int street_num)
{
    person->address.street_num = street_num;
}

void
set_street(Person *person, char *street)
{
    strcpy(person->address.street, street);
}

void
set_city(Person *person, char *city)
{
    strcpy(person->address.city, city);
}

void
set_state(Person *person, char *state)
{
    strcpy(person->address.state, state);
}

void
set_zip(Person *person, unsigned int zip)
{
    person->address.zip = zip;
}


int
main(void) 
{
    Person person1;
    
    char first[20];
    char last[20];
    unsigned int street_num;
    char street[40];
    char city[20];
    char state[20];
    unsigned int zip;

    puts("Let's enter some info about you. Please enter your name and address:");
   
    putchar('\n');

    puts("First name:");
    scanf("%s", first);

    puts("Last name:");
    scanf("%s", last);

    puts("Street number:");
    scanf("%u", &street_num);

    puts("Street name:");
    fgets(street, 40, stdin);

    puts("City:");
    scanf("%s", city);

    puts("State:");
    scanf("%s", state);

    puts("Zip code:");
    scanf("%u", &zip);

    set_first_name(&person1, first);
    set_last_name(&person1, last);
    set_street_num(&person1, street_num);
    set_street(&person1, street);
    set_city(&person1, city);
    set_state(&person1, state);
    set_zip(&person1, zip);

    puts("\nOk, here is your info:\n");

    printf("%s %s\n", get_first_name(&person1), get_last_name(&person1));
    printf("%u %s\n", get_street_num(&person1), get_street(&person1));
    printf("%s, %s %u\n",
            get_city(&person1), get_state(&person1), get_zip(&person1));


    return 0;
}
