#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int row = 1;
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    int space = height - 1;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;

        for (int j = 0; j < row; j++)
        {
            printf("#");
        }
        row++;
        printf("\n");
    }
}
