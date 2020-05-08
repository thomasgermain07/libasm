#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

size_t			ft_strlen(const char *str);
char			*ft_strcpy(char *dst, char *src);
int				ft_strcmp(const char *s1, const char *s2);
ssize_t			ft_read(int fd, void *buf, size_t nbyte);
ssize_t			ft_write(int fd, const void *buf, size_t nbyte);
char			*ft_strdup(const char *str);

void			check_ft_strlen()
{
	char 	*str;

	printf("\n\t\t ----- FT_STRLEN -----\n");
	str = "123456789";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
	str = "";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
	str = "Bonsoir a toute et a tous";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
	str = "123456789123456789123456789123456789123456789123456789123456789123456789123456789123456789123456789";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
	printf("\n\t\t ----- END -----\n\n");
}

void			check_ft_strcpy()
{
	char		*src_text;
	char		*dest_text;
	char		*src;
	char		*dest;
	char		*ft_src;
	char		*ft_dest;

	printf("\n\t\t ----- FT_STRCPY -----\n");
	src_text = "Bonsoir";
	dest_text = "A toute et a tous";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);

	src_text = "A toute et a tous";
	dest_text = "Bonsoir";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);

	src_text = "";
	dest_text = "Bonsoir";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);

	src_text = "Bonsoir";
	dest_text = "";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);
	printf("\n\t\t ----- END -----\n\n");
}

void			check_ft_strcmp()
{
	char		*s1;
	char		*s2;

	printf("\n\t\t ----- FT_STRCMP -----\n");
	s1 = "Bonsoir";
	s2 = "Bonsoir";
	printf("s1 -> '%s' : s2 -> '%s'\n", s1, s2);
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));


	s1 = "Bonjoir";
	s2 = "Bonsoir";
	printf("s1 -> '%s' : s2 -> '%s'\n", s1, s2);
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));

	s1 = "Bonso";
	s2 = "Bonsoir";
	printf("s1 -> '%s' : s2 -> '%s'\n", s1, s2);
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));
	s1 = "Bonsoir";
	s2 = "Bonso";
	printf("s1 -> '%s' : s2 -> '%s'\n", s1, s2);
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));

	s1 = "";
	s2 = "Bonsoir";
	printf("s1 -> '%s' : s2 -> '%s'\n", s1, s2);
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));

	s1 = "Bonsoir";
	s2 = "";
	printf("s1 -> '%s' : s2 -> '%s'\n", s1, s2);
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));

	s1 = "";
	s2 = "";
	printf("s1 -> '%s' : s2 -> '%s'\n", s1, s2);
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(s1, s2));

	printf("\n\t\t ----- END -----\n\n");
}

void			ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

void			check_ft_read()
{
	int			fd = open("text.txt", O_RDONLY);
	int			ft_fd = open("text.txt", O_RDONLY);
	int			ret;
	int			ft_ret;
	char		buffer[30];
	char		ft_buffer[30];

	printf("\n\t\t ----- FT_READ -----\n");

	for (int i = 0; i < 3; i++)
	{
		ft_bzero(buffer, 30);
		ft_bzero(ft_buffer, 30);
		ret = read(fd, buffer, 15);
		ft_ret = ft_read(ft_fd, ft_buffer, 15);
		printf("   read: '%s' -> %d\n", buffer, ret);
		printf("ft_read: '%s' -> %d\n\n", ft_buffer, ft_ret);
	}

	printf("---> error bad fd test\n");
	ft_bzero(buffer, 30);
	ft_bzero(ft_buffer, 30);
	errno = 0;
	ret = read(-1, buffer, 15);
	printf("   read: errno: %d %s -> %d\n", errno, strerror(errno), ret);
	printf("buffer: '%s'\n", buffer);
	errno = 0;
	ft_ret = ft_read(-1, ft_buffer, 15);
	printf("ft_read: errno: %d %s -> %d\n", errno, strerror(errno), ft_ret);
	printf("buffer: '%s'\n\n",ft_buffer);

	printf("---> error bad buffer test\n");
	ft_bzero(buffer, 30);
	ft_bzero(ft_buffer, 30);
	errno = 0;
	ret = read(fd, 250, 15);
	printf("   read: errno: %d %s -> %d\n", errno, strerror(errno), ret);
	printf("buffer: '%s'\n", buffer);
	errno = 0;
	ft_ret = ft_read(ft_fd, 250, 15);
	printf("ft_read: errno: %d %s -> %d\n", errno, strerror(errno), ft_ret);
	printf("buffer: '%s'\n\n",ft_buffer);

	printf("\n\t\t ----- END -----\n\n");
}

int				main(int argc, char **argv)
{
	check_ft_read();
	return (0);

	// char *s1;
	// char *s2;
	// char *s3;
	// printf("\n\n");
	// s1 = "bonjour";
	// s2 = "";
	// s3 = "uqwhe1233213-992138|\n";
	// printf("### FT_WRITE ###\n");
	// printf(" =    write: %zd\n", write(1, s1, strlen(s1)));
	// printf(" = ft_write: %zd\n", ft_write(1, s1, strlen(s1)));
	// printf(" =    write: %zd\n", write(1, s2, strlen(s2)));
	// printf(" = ft_write: %zd\n", ft_write(1, s2, strlen(s2)));
	// printf(" =    write: %zd\n", write(1, s3, strlen(s3)));
	// printf(" = ft_write: %zd\n", ft_write(1, s3, strlen(s3)));
	// printf("_____________\n");

	// printf("\n\n");
	// printf("### FT_STRDUP ###\n");
	// s1 = strdup(s1);
	// s1 = ft_strdup(s1);
	// printf("   strdup: %s\n", s1);
	// printf("ft_strdup: %s\n", s1);
	// printf("_____________\n");
	return (0);
}
