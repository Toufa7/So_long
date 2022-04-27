NAME = so_long

CFLAGS = -Wall -Werror -Wextra

MLX_FLAGS = -fsanitize=address -g -lmlx -framework OpenGL -framework AppKit

RM = rm -rf

CC = gcc

AR = ar rcs

FUNCTIONS =	gnl_so_long/gnl_so_long.c\
			gnl_so_long/gnl_so_long_utils.c\
			libft/ft_split.c\
			libft/ft_strlcpy.c\
			libft/ft_strlen.c\
			libft/ft_itoa.c\
			libft/ft_putstr.c\
			libft/ft_strcmp.c\
			map_filling.c\
			get_player_positions.c\
			nbr_of_appels.c\
			map_checking/checking_bottom.c\
			map_checking/checking_componenets.c\
			map_checking/checking_left.c\
			map_checking/checking_right.c\
			map_checking/checking_top.c\
			map_checking/final_check.c\
			map_checking/height_width.c\
			map_checking/map_reading.c\
			moves_down.c\
			moves_left.c\
			moves_right.c\
			moves_up.c\
			putting_moves_into_windows.c\
			check_and_exit.c\
			checking_ber.c\
			destroy_window.c\
			print_error.c\
			get_keys.c\
			close_window.c\
			appels_animation.c\


OBJECTS =	$(FUNCTIONS:.c=.o)

all : $(NAME)


$(NAME) :	$(OBJECTS)
			$(CC) $(OBJECTS) $(CFLAGS) $(MLX_FLAGS) main.c -o $(NAME)

clean :
			$(RM)	$(OBJECTS)
	
fclean : clean
			$(RM) $(NAME) $(BONUS)

re : fclean all