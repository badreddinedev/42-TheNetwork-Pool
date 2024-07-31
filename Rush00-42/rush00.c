#include <unistd.h>
void    ft_putchar(char c);
void    ft_print_rush(int x, int y, int i, int j)
{
            if(i == 1 || i == y)
            {
                if(j == 1 || j == x)
                {
                    ft_putchar('o');
                }
                if(j > 1 && j < x)
                {
                    ft_putchar('-');
                }
            }
            if(i > 1 && i < y)
            {
                if(j == 1 || j == x)
                {
                    ft_putchar('|');
                }
                else
                {
                    ft_putchar(' ');
                }
            }
}
void    rush(int x, int y)
{
    int i;
    int j;

    i = 1;
    while(i <= y)
    {
        j = 1;
        while(j <= x)
        {
            ft_print_rush(x, y, i, j);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
