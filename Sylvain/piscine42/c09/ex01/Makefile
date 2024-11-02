# Variables
FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
HEADERS = ft.h
SRC = ./srcs
INC = ./includes
LIB = libft.a


# Commandes
CC = cc
AR = ar -r
RL = ranlib

FLAGS = -Wall -Wextra -Werror

RMOBJ = rm -f $(OBJECTS)
RMLIB = rm -f $(LIB)

# substituer UNIQUEMENT dans la liste FILES les noms *.c en ./srcs/*.o
OBJECTS = $(patsubst %.c, $(SRC)/%.o, $(FILES))

# Regle par defaut appelee en premier si make seul
all: $(LIB)

# Regle de creation de la librairie
$(LIB): $(OBJECTS)
	$(AR) $(LIB) $(OBJECTS) 
	$(RL) $(LIB)

# Regle statique pour ne compiler uniquement le contenu de la liste
$(OBJECTS): $(SRC)/%.o: $(SRC)/%.c $(INC)/$(HEADERS)
	$(CC) $(FLAGS) -I$(INC) -c $< -o $@

clean:
	$(RMOBJ)

# utilisation de $(MAKE) clean, car clean tout seul veut pas marcher
fclean:
	$(MAKE) clean
	$(RMLIB)

re:
	$(MAKE) fclean
	$(MAKE) all

# Pour ne pqs confondre les noms qvec des noms de fichiers
.PHONY:	all clean fclean re
