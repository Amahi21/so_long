/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahi <amahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:45:37 by amahi             #+#    #+#             */
/*   Updated: 2022/05/23 07:45:39 by amahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	out_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	out_2p(char **mass)
{
	int	i;

	i = 0;
	while (mass[i])
	{
		printf("%s", mass[i]);
		i++;
	}
	write(1, "\n", 1);
}