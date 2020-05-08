#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

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
	printf("   strcpy: %s\nft)strcpy: %s\n\n", dest, ft_dest);

	src_text = "A toute et a tous";
	dest_text = "Bonsoir";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft)strcpy: %s\n\n", dest, ft_dest);

	src_text = "";
	dest_text = "Bonsoir";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft)strcpy: %s\n\n", dest, ft_dest);

	src_text = "Bonsoir";
	dest_text = "";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft)strcpy: %s\n\n", dest, ft_dest);
	printf("\n\t\t ----- END -----\n\n");
}

int				main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("missing argument\n");
	}
	// char *str1;
	// char *str2;
	// char dest[8];
	// char *src;

	// src = "bonjour";
	// printf("\n\n");
	// printf("### FT_STRCPY ###\n");
	// str1 = strdup(dest);
	// str2 = strdup(dest);
	// str1 = strcpy(str1, src);
	// str2 = ft_strcpy(str2, src);
	// printf("   strcpy: %s\n", str1);
	// printf("ft_strcpy: %s\n", str2);
	// printf("_____________\n");

	// printf("\n\n");

	// printf("### FT_STRCMP ###\n");
	// int ret = strcmp("bonjour", "bonjour");
	// printf("ret    strcmp : %d\n", ret);
	// ret = ft_strcmp("bonjour", "bonjour");
	// printf("ret ft_strcmp : %d\n", ret);
	// ret = strcmp("bonj", "bonjour");
	// printf("ret    strcmp : %d\n", ret);
	// ret = ft_strcmp("bonj", "bonjour");
	// printf("ret ft_strcmp : %d\n", ret);
	// ret = strcmp("bonjour", "bonj");
	// printf("ret    strcmp : %d\n", ret);
	// ret = ft_strcmp("bonjour", "bonj");
	// printf("ret ft_strcmp : %d\n", ret);
	// ret = strcmp("bonjkur", "bonjour");
	// printf("ret    strcmp : %d\n", ret);
	// ret = ft_strcmp("bonjkur", "bonjour");
	// printf("ret ft_strcmp : %d\n", ret);
	// ret = strcmp("", "");
	// printf("ret    strcmp : %d\n", ret);
	// ret = ft_strcmp("", "");
	// printf("ret ft_strcmp : %d\n", ret);
	// ret = strcmp("\xff", "\xff\xfe");
	// printf("ret    strcmp : %d\n", ret);
	// ret = ft_strcmp("\xff", "\xff\xfe");
	// printf("ret ft_strcmp : %d\n", ret);


	// printf("_____________\n");

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
	// printf("### FT_READ ###\n");
	// char	buffer[33];
	// char	buffer1[33];
	// int		r;
	// int		r1;

	// int		fd;
	// int		fd1;
	// fd = open(argv[1], O_RDONLY);
	// fd1 = open(argv[1], O_RDONLY);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// r = read(fd, buffer, 10);
	// r1 = ft_read(fd1, buffer1, 10);
	// buffer[r] = 0;
	// buffer1[r1] = 0;
	// printf("   read,  r : %d,  buffer : %s\n", r, buffer);
	// printf("ft_read, r1 : %d, buffer1 : %s\n", r1, buffer1);
	// close(fd);
	// close(fd1);
	// printf("_____________\n");

	// return (0);

	// printf("\n\n");
	// printf("### FT_STRDUP ###\n");
	// s1 = strdup(s1);
	// s1 = ft_strdup(s1);
	// printf("   strdup: %s\n", s1);
	// printf("ft_strdup: %s\n", s1);
	// printf("_____________\n");
	return (0);
}
