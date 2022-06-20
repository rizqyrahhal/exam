#include <unistd.h>
 #include <string.h>
 #include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

int main(void)
{
    char str1[40];
    char *str2;
    char *str3;
    
    str2 = "rizqy\n";

    str3 = ft_strcpy(str1, str2);
    printf("%s", str3);
}