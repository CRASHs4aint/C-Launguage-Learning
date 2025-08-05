#include <stdio.h>
#define Fsize 100
int main()
{
    FILE *fptr;
    int ctr = 0;
    char fname[Fsize];
    char c;
    printf("\n\n Read the file and count the number of lines :\n ");
    printf("___________________________________\n");
    printf("input the file name to be opened:");
    scanf("%s,&fname");
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("could not open file %s", fname);
        return 0;
    } // Extract characters from file and store in character c.
    for (c = getc(fptr); c != EOF; c = getc(fptr))
    {
        if (c == '\n') // Increcment count of this character is newline
            ctr = ctr + 1;
        fclose(fptr);
    }
    printf("The line in the file %s are :%d \n\n ", fname, ctr - 1);
    return 0;
}