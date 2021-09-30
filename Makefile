CC = gcc

NAME = push_swap.a

NAME_BONUS = checker.a

PROGRAM = push_swap

PROGRAM_BONUS = checker

LIST =	ft_rb.c ft_rrb.c ft_sort_many_add.c ft_plus_first.c ft_minus_first.c ft_split_atoi.c ft_printf.c ft_putchar.c ft_putnbr_fd.c push_swap.c ft_is_sorted.c ft_sort.c ft_print_stack.c ft_sort_four.c ft_sort_three.c ft_sort_many.c ft_sort_two.c ft_nearest.c ft_pa.c ft_pb.c ft_ra.c ft_rra.c ft_sa.c ft_strjoin.c ft_strlen.c ft_calloc.c 

LIST_BONUS = ft_memcmp.c ft_calloc.c ft_strjoin.c ft_ra.c ft_rb.c ft_rr.c ft_pa.c ft_pb.c ft_sa.c ft_sb.c ft_ss.c ft_rra.c ft_rrb.c ft_rrr.c checker.c ft_is_sorted.c ft_printf.c ft_putchar.c ft_putnbr_fd.c ft_split_atoi.c ft_strlen.c ft_plus_first.c ft_minus_first.c 

HEADER = push_swap.h

HEADER_BONUS = checker.h

OBJ	=	$(LIST:.c=.o)

OBJ_BONUS	=	$(LIST_BONUS:.c=.o)

FLAGS	=	-Wall -Wextra -Werror -g
OPTFLAGS	=	-O2

all:	$(PROGRAM)

bonus:	$(PROGRAM_BONUS)

$(PROGRAM):	$(NAME)
	@$(CC) -o $(PROGRAM) $(NAME)

$(PROGRAM_BONUS):	$(NAME_BONUS)
	@$(CC) -o $(PROGRAM_BONUS) $(NAME_BONUS)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(NAME_BONUS): $(OBJ_BONUS)
	@ar rcs $(NAME_BONUS) $(OBJ_BONUS)

.c.o:	$(LIST) $(LIST_BONUS)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	-@rm $(OBJ) $(OBJ_BONUS) 2>/dev/null || true

fclean:clean
	-@rm $(NAME) $(PROGRAM) $(NAME_BONUS) $(PROGRAM_BONUS) 2>/dev/null || true

re:	fclean all

re_bonus:	fclean bonus

.PHONY:	all clean fclean re re_bonus