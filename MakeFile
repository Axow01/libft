#------------------------------------------------------------------------------#
#                                  GENERICS                                    #
#------------------------------------------------------------------------------#

# Special variables
DEFAULT_GOAL: all
.DELETE_ON_ERROR: $(NAME)
.PHONY: all bonus clean fclean re
# 'HIDE = @' will hide all terminal output from Make
HIDE =


#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I. -I./$(INCDIR)
RM		=	rm -f
LIBCMP	=	ar -rcs
# Output file name
NAME	=	libft.a

# Sources are all .c files
SRCDIR	=	src/
SRCS	=	$(wildcard $(SRCDIR)*.c) # Wildcard for sources is forbidden by norminette

# Objects are all .o files
OBJDIR	=	bin/
OBJS	=	$(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))

# Includes are all .h files
INCDIR	=	include/
INC		=	$(wildcard $(INCDIR)*.h)


#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(NAME)

fclean: clean
	$(HIDE)$(RM) $(NAME)

# Generates output file
$(NAME): $(OBJS)
	$(HIDE) $(LIBCMP) $(NAME) $(OBJS)

# Compiles sources into objects
$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c $(INC) | $(OBJDIR)
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

# Creates directory for binaries
$(OBJDIR):
	$(HIDE)mkdir -p $@

# Removes objects
clean:
	$(HIDE)$(RM) $(OBJS)
# Removes objects and executables

bonus:
# Removes objects and executables and remakes
re: fclean all

