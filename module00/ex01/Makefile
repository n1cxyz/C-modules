NAME		= phoneBook
CXX			= c++
BIN			= bin
SRC			= src/main.cpp src/Contact.cpp src/PhoneBook.cpp
OBJS		= $(SRC:src/%c=$(BIN)/%o)
INCS		= include
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
IFLAGS		= -I$(INCS)
RM			= rm -rf
VALGRIND	= @valgrind --leak-check=full --show-leak-kinds=all
#--track-origins=yes --quiet --tool=memcheck --keep-debuginfo=yes --track-fds=yes

all: $(NAME)

$(NAME): ${BIN} ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} ${IFLAGS} -o ${NAME}

$(BIN)/%o: src/%c
	${CXX} ${CXXFLAGS} -c $< ${IFLAGS} -o $@

$(BIN):
	mkdir -p $(BIN)

clean:
	$(RM) $(BIN)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean