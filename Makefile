NAME = wolf3d

MAKE = make
CC = gcc
COPT = 
CFLAGS = -Wall -Wextra -Werror

CFILES = src/core/core.c \
	src/core/core_point.c \
	src/core/core_window.c \
	src/core/core_error.c \
	src/main.c
OFILES = $(CFILES:%.c=%.o)

LIBPATH = libs/

FT = ft
LFTPATH = $(addprefix $(LIBPATH), $(FT))/
LFT = $(addprefix  lib, $(addsuffix .a, $(FT)))
LIBFT = -L$(LFTPATH) -l$(FT)
MKFT = $(MAKE) -C $(LFTPATH)

MLX = mlx
LMLXPATH = $(addprefix $(LIBPATH), $(MLX))/
LMLX = $(addprefix  lib, $(addsuffix .a, $(MLX)))
LIBMLX = -L$(LMLXPATH) -l$(MLX)
MKMLX = $(MAKE) -C $(LMLXPATH)

SRC = $(CFILES)
OBJS = $(OFILES)

INCPATH = includes/
INCLUDES = -I$(LFTPATH) -I$(LMLXPATH) -I$(INCPATH)
LIB = -lm $(LIBFT) $(LIBMLX)

FRAMEWORKS = -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(LFT) $(LMLX) $(OBJS)
	$(CC) $(COPT) -o $(NAME) $(INCLUDE) $(LIB) $(FRAMEWORKS) $(OBJS)
	-@echo "\nWolf' It."

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $(INCLUDES) -c $<

$(LFT):
	$(MKFT)

$(LMLX):
	$(MKMLX)

clean:
	$(MKFT) clean
	$(MKMLX) clean
	rm -f $(OBJS)

fclean: clean
	$(MKFT) fclean
	rm -f $(NAME)

re: fclean all

cleanfast:
	rm -f $(OBJS)

fcleanfast: cleanfast
	rm -f $(NAME)

fast: fcleanfast $(OBJS)
	$(CC) $(OPT) -o $(NAME) $(INCLUDE) $(LIB) $(FRAMEWORKS) $(OBJS)
	rm -f $(OBJS)
