#include <stdio.h>

int 
string_len(char input_string[200])
{
    int i = 0;

    while (input_string[i] != '\n')
    {
        i++;
    }
    
    return i;
}

char *
longer_of_two_strings(char input_string_1[200], char input_string_2[200])
{
    if (string_len(input_string_1) > string_len(input_string_2))
    {
        return input_string_1;
    }
    else
    {
        return input_string_2;
    }
}

int 
main(void)
{
    char user_string_1[200];
    char user_string_2[200];
     
    printf("Please enter a string: \n");
    scanf("%s", &user_string_1);
    printf("Please enter another string: \n");
    scanf("%s", &user_string_2);

    printf("The longer of the strings is \"%s\".\n",
            longer_of_two_strings(user_string_1, user_string_2));

    return 0;
}
