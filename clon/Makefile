# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoyahya <yoyahya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 10:05:24 by yoyahya           #+#    #+#              #
#    Updated: 2022/10/27 10:33:28 by yoyahya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
AR= ar crs

SRC= ft_atoi ft_bzero ft_calloc ft_isalpha ft_isalnum ft_isascii ft_isdigit ft_isprint ft_itoa \
	ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd \
	ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr \
	ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper \

BSRC= ft_lstadd_back_bonus  ft_lstadd_front_bonus ft_lstclear_bonus ft_lstdelone_bonus ft_lstlast_bonus \
	ft_lstnew_bonus ft_lstsize_bonus ft_lstiter_bonus \


OBJ= $(SRC:=.o)
BOBJ= $(BSRC:=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BOBJ)
	$(AR) $(NAME) $(BOBJ)
clean: 
	@rm -f $(OBJ) $(BOBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all