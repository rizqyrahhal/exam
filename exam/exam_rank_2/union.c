/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:48:28 by rarahhal          #+#    #+#             */
/*   Updated: 2022/03/18 18:49:34 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_is_contien(char c, char *argv)
{
    while(*argv)
    {
        if (*argv == c)
            return (1);
        argv++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    int i;
    char *stock;

    stock = NULL;
    if (argc == 2)
    {
        i = 0;
        write(1, &argv[1][i], 1);
        *stock = argv[1][i];
        while (argv[1][++i])
        {
            stock++;
            *stock = argv[1][i];
            if (check_is_contien(argv[1][i], stock))
                write(1, &argv[1][i], 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
not work