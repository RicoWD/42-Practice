OUTPUT = bsq

SRCS = bsq_core.c \
      bsq_disp.c \
      bsq_free.c \
      bsq_main.c \
      bsq_malloc.c \
      bsq_chars.c \
      bsq_read.c \
      bsq_rows.c \
      bsq_header.c
      
HEADERS = bsq_bsq.h \
	bsq_chars.h \
	bsq_core.h \
	bsq_disp.h \
	bsq_free.h \
	bsq_main.h \
	bsq_malloc.h \
	bsq_read.h \
	bsq_header.h \
	bsq_rows.h \
	common.h \

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
