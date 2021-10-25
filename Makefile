DIRS			=	src/

INCLUDE			=	includes/

MLXDIR			=	mlx/

# Main files

FLS				=	main.c

SRCS			=	${addprefix ${DIRS}, ${FLS}}

OBJS			=	${patsubst %.c,%.o,${SRCS}}

DFLS			=	${patsubst %.c,%.d,${SRCS}}

NAME			=	so_long


#Commands

CC				=	gcc

CFLAGS			=	-Wall -Werror -Wextra

OPFLAGS			=	-O2

RM				=	rm -f



%.o:			%.c Makefile
				${CC} ${CFLAGS} ${OPFLAGS} -Imlx -c $< -o $@ -I${INCLUDE} -MMD

# Main program rules

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} ${OBJS} -Lmlx -lmlx -framework OpenGL -framework AppKit -o ${basename ${NAME}}

clean:
				${RM} ${OBJS} ${DFLS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

# Features

.PHONY:			all clean fclean re bonus


# dependency file includes

include ${wildcard ${DFLS}}
