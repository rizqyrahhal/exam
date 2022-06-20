/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:36:02 by rarahhal          #+#    #+#             */
/*   Updated: 2022/06/20 13:45:02 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc == 2)
    {
        i = -1;
        while (argv[1][++i])
        {
            if (argv[1][i] == 'Z' || argv[1][i] == 'z')
                argv[1][i] -= 25;
            else if ((argv[1][i] >= 'a' && argv[1][i] < 'z') || (argv[1][i] >= 'A' && argv[1][i] < 'Z'))
                argv[1][i] += 1;
            write(1, &argv[1][i], 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
