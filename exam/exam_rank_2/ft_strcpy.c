#include <unistd.h>
 #include <string.h>
 #include <stdio.h>

// char    *ft_strcpy(char *s1, char *s2)
// {

// }

int main(void)
{
    char str1[20];
    char str2[10];
    
    *str1 = "rahhal ";
    *str2 = "rizqy\n";

    strcpy(str1, str2);
    printf("%s", str2);
}