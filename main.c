/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:58 by thgermai          #+#    #+#             */
/*   Updated: 2020/02/27 21:00:10 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	ft_strlen(char *str);

int main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	printf("%i\n", ft_strlen(av[1]));
	return (0);
}
