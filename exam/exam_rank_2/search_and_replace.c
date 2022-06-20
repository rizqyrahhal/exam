/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:45:34 by rarahhal          #+#    #+#             */
/*   Updated: 2022/06/20 13:48:43 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int		i;
    
	i = -1;
	while (argv[1][++i] && argc == 4
		&& argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		if (argv[1][i] != argv[2][0])
			write(1, &argv[1][i], 1);
		else
			write(1, &argv[3][0], 1);
	}
    write(1, "\n", 1);
    return (0);
}
