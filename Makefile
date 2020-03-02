# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/28 12:46:59 by thgermai          #+#    #+#              #
#    Updated: 2020/03/02 15:44:56 by thgermai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
OBJS_PATH = .objs
SRCS_PATH = srcs
SRCS = ft_strlen.s\
		ft_strcpy.s\
		ft_strcmp.s\
		ft_write.s
OBJS = $(addprefix $(OBJS_PATH)/, $(SRCS:.s=.o))
DPDCS = $(OBJS:.o=.d)
LOGFILE = $(LOGPATH) `date +'%y.%m.%d %H:%M:%S'`
MSG = ---

opti:
	@(make -j all)

all: $(NAME)

-include $(DPDCS)

$(NAME): $(OBJS)
	@(ar rcs $(NAME) $(OBJS))

ex:
	@(make)
	@(gcc -Wall -Wextra -Werror main.c $(NAME))
	@(./a.out)

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.s | $(OBJS_PATH)
	@(echo "Compiling -> $^")
	@(nasm -fmacho64 $< -o $@ -MD $(@:.o=.d))

$(OBJS_PATH):
	@(mkdir .objs)

clean:
	@(rm -f a.out)

fclean: clean
	@(rm -rf $(OBJS_PATH))
	@(rm -f $(NAME))

git : fclean
	@(git add *)
	@(git commit -m "$(LOGFILE) : $(MSG)")
	@(git push)

re: fclean all
