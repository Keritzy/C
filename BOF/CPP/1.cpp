#include <stdio.h>
#include <string.h>

void vuln(char *str)
{
    char buffer[16];
    strcpy(buffer, str);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    vuln(argv[1]);

    return 0;
}