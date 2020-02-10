/*
 ============================================================================
 Name        : just-c.c
 Author      : Hakan Eryücel
 Description : C to C converter.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 10000

typedef enum _bool
{
    false = 0,
    true = 1
} Bool;

int main(int argc, char **args)
{
    FILE *oldFileP;
    FILE *newFileP;
    char *line = (char *)malloc(MAXCHAR);
    int counter = 0;
    Bool multiComment = false;

    if (argc > 1)
    {
        oldFileP = fopen(args[1], "r");
        if (oldFileP == NULL)
        {
            printf("Error, file not found!\n");
            return 0;
        }
    }
    else
    {
        char *filePath;
        printf("File path: ");
        scanf("%s", filePath);
        oldFileP = fopen(filePath, "r");
        if (oldFileP == NULL)
        {
            printf("Error, file not found!\n");
            return 0;
        }
    }

    if (argc > 2)
    {
        newFileP = fopen(args[2], "w");
    }
    else
    {
        newFileP = fopen("newFile.c", "w");
    }

    while (fgets(line, MAXCHAR, oldFileP) != NULL)
    {
        if (line[0] != '#')
        {
            int i = 0;
            int position = 0;
            Bool singleQoute = false;
            Bool doubleQoute = false;
            for (i; i < strlen(line); ++i)
            {
                if (line[i] == '/' && line[i - 1] == '/')
                {
                    i = strlen(line) - 1;
                }

                if (line[i] == '\"' && line[i - 1] != '\\')
                {
                    doubleQoute = !doubleQoute;
                }
                else if (line[i] == '\'' && line[i - 1] != '\\')
                {
                    singleQoute = !singleQoute;
                }
                else if (line[i] == '*' && line[i - 1] == '/' && !singleQoute && !doubleQoute)
                {
                    multiComment = true;
                }
                else if (line[i] == '/' && line[i - 1] == '*' && !singleQoute && !doubleQoute)
                {
                    multiComment = false;
                    position = i;
                }
                else if ((line[i] == ' ' || line[i] == '\n') && !singleQoute && !doubleQoute && !multiComment)
                {
                    if (i - position > 1 || line[i - 1] == '{' || line[i - 1] == '}')
                    {
                        ++counter;
                        char cStr[counter + 1];
                        memset(cStr, 'c', counter);
                        cStr[counter] = '\0';

                        char subword[i - position + 1];
                        memcpy(subword, &line[position], i - position);
                        subword[i - position] = '\0';

                        fprintf(newFileP, "#define %s %s\n", cStr, subword);
                    }
                    position = i;
                }
                else if (i == strlen(line) - 1 && !singleQoute && !doubleQoute && !multiComment)
                {
                    ++counter;
                    char cStr[counter + 1];
                    memset(cStr, 'c', counter);
                    cStr[counter] = '\0';

                    char subword[i - position + 2];
                    memcpy(subword, &line[position], i - position + 1);
                    subword[i - position + 1] = '\0';

                    fprintf(newFileP, "#define %s %s\n", cStr, subword);
                }
            }
        }
        else
        {
            fprintf(newFileP, "%s", line);
        }
    }
    fprintf(newFileP, "\n");
    int i = 0;
    for (i; i < counter; ++i)
    {
        char cStr[i + 2];
        memset(cStr, 'c', i + 1);
        cStr[i + 1] = '\0';
        fprintf(newFileP, "%s\n", cStr);
    }

    fclose(oldFileP);
    fclose(newFileP);

    return 0;
}