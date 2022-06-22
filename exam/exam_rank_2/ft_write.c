#include <unistd.h>

void    ft_write(int number)
{
    if (number > 9)
        ft_write(number / 10);
    write(1, &"0123456789"[number % 10], 1);
}

int main(void)
{
    ft_write(45);
    write(1, "\n", 1);
    return 0;
}