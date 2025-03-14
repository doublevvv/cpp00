# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 15:43:22 by vlaggoun          #+#    #+#              #
#    Updated: 2025/03/12 14:47:51 by vlaggoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SOURCES = megaphone.cpp

SRCS = $(SOURCES)

#SRCS = $(addprefix $(OBJ_DIR)/, $(SOURCES))

OBJ_DIR = objs

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
#CFLAGS = -g3

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(@D)
		$(CXX) $(CXXFLAGS) -cpp $< -o $@

DEP =	$(OBJ:.o=.d)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(OBJ_DIR) $(DEP)

re: fclean
	make all

.PHONY: all clean fclean re

-include $(DEP)
