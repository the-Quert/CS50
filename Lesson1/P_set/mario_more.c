#include <cs50.h>
#include <stdio.h>

void mario(int height); 
int main(void)
{
    int height;
    do {
    height = get_int("Height :");
    }
    while (height < 1);
    mario(height);
}
void mario(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int brakes = height - i; brakes > 0; brakes--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf(" ");
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
