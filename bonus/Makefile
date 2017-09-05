# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboussau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/04 20:17:56 by cboussau          #+#    #+#              #
#    Updated: 2017/09/05 18:42:42 by cboussau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen

NAME2 = Grace

NAME3 = Sully

SRC = src/Colleen.cpp src/Grace.cpp src/Sully.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

.SILENT:

all: $(NAME) $(NAME2) $(NAME3)

$(NAME): $(OBJ)
		echo "\\033[1;34mCompiling Colleen...\\033[0;39m"
		g++ $(FLAGS) -o $(NAME) src/Colleen.o
		echo "\\033[32m$(NAME) has been created !\\033[0;39m"

$(NAME2): $(OBJ)
		echo "\\033[1;34mCompiling Grace...\\033[0;39m"
		g++ $(FLAGS) -o $(NAME2) src/Grace.o
		echo "\\033[32m$(NAME2) has been created !\\033[0;39m"

$(NAME3): $(OBJ)
		echo "\\033[1;34mCompiling Sully...\\033[0;39m"
		g++ $(FLAGS) -o $(NAME3) src/Sully.o
		echo "\\033[32m$(NAME3) has been created !\\033[0;39m"

%.o: $.c
	g++ $(FLAGS) -o $@ -c $<
	echo "\\033[1;34mGenerating objects... PLease wait\\033[0;39m"

clean:
	rm -rf $(OBJ)
	rm -rf Grace_kid.cpp Sully_0.cpp Sully_1.cpp Sully_2.cpp Sully_3.cpp \
		Sully_4.cpp Sully_5.cpp Sully_0 Sully_1 Sully_2 Sully_3 Sully_4 Sully_5
	echo "\\033[31mObjects files has been removed !\\033[0;39m"

fclean: clean
	rm -f $(NAME)
	echo "\\033[31m$(NAME) has been removed !\\033[0;39m"
	rm -f $(NAME2)
	echo "\\033[31m$(NAME2) has been removed !\\033[0;39m"
	rm -f $(NAME3)
	echo "\\033[31m$(NAME3) has been removed !\\033[0;39m"
re: fclean all

.PHONY: clean all fclean re
