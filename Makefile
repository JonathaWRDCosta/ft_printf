# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 13:24:28 by jonathro          #+#    #+#              #
#    Updated: 2024/11/21 14:07:55 by jonathro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Directories
SRCDIR = srcs
OBJDIR = objs
INCDIR = include
LIBDIR = lib

# Library
NAME = $(LIBDIR)/libftprintf.a

# Source files
SRC = ft_printf.c ft_printhex.c ft_printpma.c ft_printunsigned.c \
      ft_putchar.c ft_putnbr.c ft_putstr.c

# Prepend directories
FULL_SRC = $(addprefix $(SRCDIR)/, $(SRC))

# Object files
OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

# Default Target
all: $(NAME)

# Build the library
$(NAME): $(OBJS)
	@mkdir -p $(LIBDIR)
	@echo "Archiving library $(NAME)"
	@ar rcs $@ $^

# Compile source files into object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo "Compiling $(notdir $<) -> $(notdir $@)"
	@$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# Clean up
clean:
	@rm -rf $(OBJDIR)
	@echo "Cleaned object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned library file."

re: fclean all

.PHONY: all clean fclean re