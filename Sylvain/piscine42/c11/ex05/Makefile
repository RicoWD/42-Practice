OUTPUT = do-op

SRCS = do_op.c ops.c display.c ft_atoi.c
HEADERS = do_op.h ops.h

SRC_DIR = src
INCLUDE_DIR = includes


CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR)


SRC_PATH = $(addprefix $(SRC_DIR)/, $(SRCS))
INC_PATH = $(addprefix $(INCLUDE_DIR)/, $(HEADERS))

OBJECTS = $(SRC_PATH:.c=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: $(SRC_DIR)/%.c $(INC_PATH)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean re
