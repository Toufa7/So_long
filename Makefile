NAME = so_long
 
BONUS = so_long_bonus

CFLAGS = -Wall -Werror -Wextra

MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit

RM = rm -rf

CC = gcc

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
			putting_moves_into_term.c\
			check_and_exit.c\
			checking_ber.c\
			destroy_window.c\
			print_error.c\
			get_keys.c\
			close_window.c\
			appels_animation.c\

FUNCTIONS_BONUS = 	gnl_so_long/gnl_so_long.c\
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
					check_and_exit.c\
					checking_ber.c\
					destroy_window.c\
					print_error.c\
					close_window.c\
					putting_moves_into_windows_bonus.c\
					appels_animation.c\
					get_keys_bonus.c\
					get_appels_positions_bonus.c\


OBJECTS = $(FUNCTIONS:.c=.o)

OBJECTS_BONUS =	$(FUNCTIONS_BONUS:.c=.o)

all : $(NAME)

bonus : $(BONUS)

$(NAME) :	$(OBJECTS)
			$(CC) $(OBJECTS) $(CFLAGS) $(MLX_FLAGS) main.c -o $(NAME)


$(BONUS) : $(OBJECTS_BONUS)

			$(CC) $(OBJECTS_BONUS) $(CFLAGS) $(MLX_FLAGS) main_bonus.c -o $(BONUS)

clean :
			$(RM)	$(OBJECTS)
	
fclean : clean
			$(RM) $(NAME) $(BONUS)

re : fclean all