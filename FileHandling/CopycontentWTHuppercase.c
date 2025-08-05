#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *source, *target;
    char ch;
    source = fopen("intup.txt", "r");
    target = fopen("output.txt", "w");
    if (source == NULL || target == NULL)
    {
        printf("ERROR opening.\n");
        return 1;
    }
    while ((ch = fgetc(source)) != EOF)
    {
        if (islower(ch))
        {
            ch = toupper(ch);
            fputc(ch, target);
        }
    }
    fclose(source);
    fclose(target);
    printf("File copied and lowercase letters conveted to uppercase .\n");
    return 0;
}