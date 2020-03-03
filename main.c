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

#include <libc.h>
#include <fcntl.h>

int		ft_strlen(char *s);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_write(char *s1);
int		ft_read(int fd, char *buff, int buffer_size);
char	*ft_strdup(char *s);

int main(int ac, char **av)
{

	char *str;

	(void)ac;
	(void)av;
	str = NULL;

	str = ft_strdup("HIII");
	if (!str)
		printf("failed\n");
	else
		printf("%s\n", str);
	return (0);
}
