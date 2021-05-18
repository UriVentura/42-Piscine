SRCS	= main.c ft_atoi.c ft_error.c ft_input_read.c ft_input_verif.c

OBJS	= ${SRC:.c=.0})

NAME	= rush-02

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	&{CC} ${CFLAGS} -c &< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${CC} -o ${NAME} ${OBJS}
all:	${NAME}

clean:
	${RM} ${OBJS}
fclean:
	clean
		${RM} ${NAME}
re:	fclean all

.PHONY:	all clean fclean re
