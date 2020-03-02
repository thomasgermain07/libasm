/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:58 by thgermai          #+#    #+#             */
/*   Updated: 2020/03/02 15:34:53 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int		ft_strlen(char *str);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_write(char *s1);

int main(int ac, char **av)
{
	// char	str[] = "Aaa";
	char	str2[] = "bonsoira toute et a tous";

	(void)ac;
	(void)av;

	printf("\nret %i\n", ft_write(str2));
	printf("\nret %i\n", ft_write(str2));

	return (0);
}
