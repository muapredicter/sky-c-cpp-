#include <stdio.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 30
#define LEVELS 10
#define LEN 50
const char trans[LEVELS + 1] = " .':~*=&%#"; //存储需要转换的字符;

void change(int (*a)[COLS], char (*b)[COLS], int rows);

int main()
{
    int row, col;
    FILE *infile;
    char filename[LEN];
    int figure[ROWS][COLS];
    char picture[ROWS][COLS];
    printf("Please enter a filename: ");
    scanf("%s", filename);
    if ((infile = fopen(filename, "r+")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", filename);
    }
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            fscanf(infile, "%d", &figure[row][col]);
        }
    }
    if (ferror(infile))
    {
        fprintf(stderr, "Error getting data from file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    change(figure, picture, ROWS);
    printf("File %s have been transformed pictures:\n", filename);
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            putchar(picture[row][col]);
        }
        putchar('\n');
    }

    fseek(infile, 0L, SEEK_END);
    putc('\n', infile);        
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            fprintf(infile, "%c", picture[row][col]);
        }
        putc('\n', infile);
    }
    if (fclose(infile) != 0)
    {
        fprintf(stderr, "Can't close file %s\n", filename);
    }

    return 0;
}

void change(int (*a)[COLS], char (*b)[COLS], int rows)
{
    int row, col;

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            b[row][col] = trans[a[row][col]];
        }
    }
    return;
}
