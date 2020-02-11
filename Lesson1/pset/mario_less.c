#include <cs50.h>
#include <stdio.h>

void mario(int n);
int main(void)
{
    int n;
    do{
        n = get_int("Height: "); 
    }
    while(n < 1);
    mario(n);
}
void mario(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int h = n - i; h > 0; h--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n"); 
    }
}