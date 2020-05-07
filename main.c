/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:55:58 by thgermai          #+#    #+#             */
/*   Updated: 2020/03/03 13:25:16 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

size_t		ft_strlen(char *s);
char		*ft_strcpy(char *s1, char *s2);
//int		ft_strcmp(char *s1, char *s2);
//int		ft_write(char *s1);
//int		ft_read(int fd, char *buff, int buffer_size);
//char	*ft_strdup(char *s);

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	// Test ft_strlen
	char *str;
	str = strdup("Bonsoir a toute et a tous");
	// printf("mine -> %zu\n", ft_strlen(str));
	// printf("real -> %zu\n", strlen(str));
	free(str);

	// Test ft_strcpy
	char *source = strdup("Bonsoir");
	char *dest = strdup("Je suis assez grand");
	ft_strcpy(source, dest);
	// printf("%s\n", source);
	free(source);
	free(dest);

	// test ft_strcmp
	source 

	return (0);
}
