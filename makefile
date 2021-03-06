NAME = libft.a

SRC = ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memrcpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strlcat.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strsub.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_iswhitespace.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_putendl.c\
	  ft_putnbr.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_countword.c\
	  ft_strsplit.c\
	  ft_itoa.c\
	  ft_abs.c\
	  ft_lstnew.c\
	  ft_lstdelone.c\
	  ft_lstdel.c\
	  ft_lstadd.c\
	  ft_lstiter.c\
	  ft_lstmap.c

SRCO = 	$(SRC:.c=.o)
HEADER = ./libft.h

CFLAGS = -Werror -Wextra -Wall -c 
CC = gcc

all : $(NAME) 

$(NAME): $(SRCO) $(HEADER)
		@ar -rc $(NAME) $(SRCO)

%.o:%.c #priorise cette regle pour la dependance srco plus que la regle implicite  $@nom de la regle  $^ nom de la dependance 
		@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling:\033[0m" $< 
		@$(CC) $(CFLAGS) -o $@ $^ 

clean :
		@rm -rf $(SRCO)
		@echo "\033[32;01mciao .o !\033[0m"
 
fclean : clean
		@rm -rf $(NAME)
		@echo "\033[32;01mciao lib !\033[0m"

re : fclean all

.PHONY: clean re all fclean #protege les regles au cas ou un fichier a la mm denomination