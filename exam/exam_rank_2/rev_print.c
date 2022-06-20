/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:15:59 by rarahhal          #+#    #+#             */
/*   Updated: 2022/06/20 12:24:10 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	i;
	int	cntr;

	if (argc == 2)
	{
		i = -1;
		cntr = 0;
		while (argv[1][++i])
			cntr++;
		while (--cntr >= 0)
			write(1, &argv[1][cntr], 1);
	}
	write (1, "\n", 1);
	return (0);	
}
