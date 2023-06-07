#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: reading file");
        return 1;
    }

    FILE *infile = fopen(argv[1], "rt");
    char line[10];

    while(fgets(line, 10, infile) != NULL)
    {
        printf("%s\n", line);
    }

    return 0;
}
