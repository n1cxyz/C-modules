NAME		= megaphone
CXX			= c++
BIN			= bin
SRC			= megaphone.cpp
OBJS		= $(SRC:src/%c=$(BIN)/%o)
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM			= rm -rf
VALGRIND	= @valgrind --leak-check=full --show-leak-kinds=all
#--track-origins=yes --quiet --tool=memcheck --keep-debuginfo=yes --track-fds=yes

all: $(NAME)

$(NAME): ${BIN} ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

$(BIN)/%o: src/%c
	${CC} ${CXXFLAGS} -c $< -o $@

$(BIN):
	mkdir -p $(BIN)

clean:
	$(RM) $(BIN)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean
