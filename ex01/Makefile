# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 15:43:22 by vlaggoun          #+#    #+#              #
#    Updated: 2025/03/12 14:25:22 by vlaggoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

SOURCES =

SRCS = $(SOURCES)

#SRCS = $(addprefix $(OBJ_DIR)/, $(SOURCES))

OBJ_DIR = objs

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
#CFLAGS = -g3

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(@D)
		$(CC) $(CFLAGS) -cpp $< -o $@

DEP =	$(OBJ:.o=.d)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(OBJ_DIR) $(DEP)

re: fclean
	make all

.PHONY: all clean fclean re

-include $(DEP)
