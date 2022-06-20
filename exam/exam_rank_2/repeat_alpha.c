/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:12:32 by rarahhal          #+#    #+#             */
/*   Updated: 2022/06/20 11:29:34 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int countr;

    i = -1;
    if (argc == 2)
    {
        while (argv[1][++i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                countr = argv[1][i] - 65;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                countr = argv[1][i] - 97;
            if ((argv[1][i] >='A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
                while (countr-- >= 0)
                    write(1, &argv[1][i], 1);
            else
                write(1, &argv[1][i], 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}