#pragma once
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str);

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

char	*ft_strchr(char *s, int c);
