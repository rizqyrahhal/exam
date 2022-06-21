/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:24:51 by rarahhal          #+#    #+#             */
/*   Updated: 2022/06/21 10:38:34 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	i;

	i = -1;
	while (argv[1][++i] && argc == 2)
	{
		if (argv[1][i] >= 'a' && argv[1][i] <='z')
		{
			argv[1][i] ;
			write(1, &argv[1][i], 1);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <='Z')
		{
			argv[1][i] += ;
			write(1, &argv[1][i], 1);
		}
		else
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
    return (0);
}
