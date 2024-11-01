NAME 		:= icecream

SRCS 		:= main.c
OBJS 		:= main.o

CC 		:= cc
CFLAGS 		:= -Wall -Wextra -Werror

RM		:= rm -f
MAKEFLAGS	+= --no-print-directory

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -o $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
.SUFFIXES:
