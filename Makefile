# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhaaydi <muhaaydi@student.42.tr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 12:46:09 by muhaaydi          #+#    #+#              #
#    Updated: 2022/10/22 15:28:06 by muhaaydi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
FLAGS	= -Wall -Wextra -Werror
LIB	= ar -rcs
NAME	= libft.a
RM	= rm -f
SRC	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	  ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRC_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJECTS	= ${SRC:%.c=%.o}

BOBJECTS	= ${SRC_BONUS:%.c=%.o}

all:	$(NAME)

$(NAME):	$(OBJECTS)
	$(LIB) $(NAME) $(OBJECTS)

bonus: $(BOBJECTS) $(OBJECTS)
	$(LIB) $(NAME) $(OBJECTS) $(BOBJECTS)

clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

fclean:
	$(RM) $(NAME)

re:	fclean all

.PHONY: all fclean clean re bonus 
