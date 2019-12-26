NAME = libftprintf.a

SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = ./inc/libft/includes
#inc//libft/includes
LIB_PATH = ./inc/libft/
INC_LIB = ./inc/libft/includes

SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I, $(INC_PATH))
# INC_L = $(addprefix -I, $(INC_LIB))
#2 files are missing
SRC_NAME =	ft_bits.c \
			ft_multcolumn.c \
			ft_printcount.c \
			ft_printf.c  \
			ft_printf_f.c \
			ft_sumdegree.c 
OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	make lib_refresh
#	mkdir -p $(OBJ_PATH)
	echo compile libftprintf
#	gcc -Wall -Wextra -Werror $(INC) -o $@ -c $<
	ar -rc $(NAME) $?
#	gcc -o $(NAME) $(OBJ) -L  -lft
#$(LIB_PATH)
$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(OBJ_PATH)
	gcc -Wall -Werror -Wextra $(INC) $(INC_L)-o $@ -c $<

lib_refresh:
	make -C $(LIB_PATH)

norm:
	norminette -R CheckForbiddenSourceHeader

clean:
	/bin/rm -rf $(OBJ_PATH)
	make clean -C $(LIB_PATH)

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C $(LIB_PATH)

re: fclean all
