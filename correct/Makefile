
CC=GCC
FLAGS= -Wall -Werror -Wextra -I libft.h
AR=ar crs
RM=rm -rf
FILES= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_strlen \
	   ft_toupper ft_tolower ft_strchr ft_strncmp \
	   ft_strnstr ft_strlcpy ft_strlcat ft_atoi ft_strdup \
	   ft_substr ft_split ft_strrchr ft_strjoin ft_strmapi \
	   ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_isprint \
	   ft_putnbr_fd ft_strtrim ft_memcpy ft_memmove ft_memset \
	   ft_memcmp ft_memchr ft_bzero ft_calloc ft_itoa

OBJ=$(FILES:=.o)
BOBJ=$(BFILES:=.o)
NAME=libft.a

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)
	@echo "$(RED)------safi done------$(RESET)"


$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	@echo "hani kan commpili$(GREEN)" $< "$(RESET)akhay sat"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)Cleaned$(RESET)"
	@$(RM) $(OBJ) $(BOBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
