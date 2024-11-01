NAME 		:= icecream

SRC_DIR		:= src
OBJ_DIR		:= obj
SRCS		:= \
	main.c		\
	arom/coco.c	\
	base/milk.c	\
	base/water.c
SRCS        	:= $(SRCS:%=$(SRC_DIR)/%)
OBJS        	:= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC 		:= cc
CFLAGS 		:= -Wall -Wextra -Werror

RM		:= rm -rf
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	$(info CREATED $(NAME))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) -c -o $@ $<
	$(info CREATED $@ WITH $<)

clean:
	$(RM) $(OBJS) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
.SUFFIXES:
# .SILENT:   #we can also silence a particular rule by prefixing it with @
