#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

int main(void)
{
    candidate president;
    president.name = get_string("Candidate name? ");
    president.votes = get_int("Candidate votes? ");
    printf("Candidate name is %s\n", president.name);
    printf("Got %d votes\n", president.votes);
    return 0;
}
