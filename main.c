/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:58 by thgermai          #+#    #+#             */
/*   Updated: 2020/02/29 18:07:55 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int		ft_strlen(char *str);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);

int main(int ac, char **av)
{
	char	str[] = "Aa";
	char	str2[] = "Aa";
	//char	str_len[] = "Bonsoir a tous";
	(void)ac;
	(void)av;

	// // ft_strlen
	// printf("ft_strlen -> %i\n", ft_strlen(str_len));
	// printf("\n");
	// // ft_strcpy
	// printf("ft_strcpy -> before : %s\n", str);
	// ft_strcpy(str, str2);
	// printf("ft_strcpy -> after : %s\n", str);
	// printf("\n");
	// ft_strcmp
	printf("strcmp -> %i\n", strcmp(str, str2));
	printf("ft_strcmp -> %i\n", ft_strcmp(str, str2));
	printf("\n");
	return (0);
}
