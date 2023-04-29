# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 17:21:45 by mmarcott          #+#    #+#              #
#    Updated: 2022/11/11 17:21:50 by mmarcott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_putstr_fd.c ft_putchar_fd.c \
	ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c \
	ft_printf.c ft_put_p.c ft_put_u.c ft_put_hex.c ft_ulltoa.c ft_roman.c

SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJSB = ${SRCSB:.c=.o}

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC	 = gcc

CFLAGS = -Wall -Wextra -Werror

all	: ${NAME}

${NAME}: ${OBJS}
					@ar -rcs  ${NAME} ${OBJS}

clean  :
					@rm -f ${OBJS} ${OBJSB}

fclean : clean
					@rm -f ${NAME}

re     : fclean all

bonus : ${OBJSB}
				@ar -rcs  ${NAME} ${OBJSB}
