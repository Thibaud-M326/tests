NAME 		:= icecream

SRC_DIR		:= src
OBJ_DIR		:= obj
SRCS		:= \
	arom/coco.c	\
	base/milk.c	\
	base/water.c
SRCS        := $(SRCS:%=$(SRC_DIR)/%)
OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC 		:= cc
CFLAGS 		:= -Wall -Wextra -Werror

RM		:= rm -f
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	$(info CREATED $(NAME))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	echo "created $(@D)"
	$(CC) $(CFLAGS) -c -o $@ $<
	$(info CREATED $@ WITH $<)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
# .SILENT:   #we can also silence a particular rule by prefixing it with @
# .SUFFIXES:
