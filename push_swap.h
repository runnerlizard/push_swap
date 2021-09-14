#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define INT32_MAX 2147483647
# define INT32_MIN (-INT32_MAX-1)

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int				fl (char c, unsigned long d);
long long int	ft_atoi(const char *str);
void			*ft_calloc(size_t n, size_t s);
int				ft_count (int d);
int			  	ft_hex (unsigned long n, int registr);
int				ft_hex_length (unsigned long n);
int				ft_hub_int (char c, int d);
int				ft_is_sorted (int *a, int n);
int				ft_isdigit (char *s);
int				ft_nearest (int *a, int middle);
int				ft_minus_first(int *a);
int				ft_pa (int **stack);
int				ft_pb (int **stack);
int				ft_plus_first(int *a, int n);
int				ft_print_p (unsigned long p);
int				ft_print_sign (int n);
int				ft_print_stack(int **stack);
int				ft_printf (const char *input, ...);
int				ft_putchar (int n);
int				ft_putnbr_fd (unsigned int n);
int				ft_putpercent(char c);
int				ft_putstr_fd (char *s, int fd);
int				ft_ra (int **stack);
int				ft_rb (int **stack);
int				ft_rr (int **stack);
int				ft_rra (int **stack);
int				ft_rrb (int **stack);
int				ft_rrr (int **stack);
int				ft_sa (int **stack);
int				ft_sb (int **stack);
int				ft_sort (int **stack);
int				ft_sort_four(int **stack);
int				ft_sort_many(int **stack);
int				ft_sort_three (int **stack);
int				ft_sort_two (int **stack);
char			**ft_split(char const *str, char ch);
int				ft_ss (int **stack);
char			*ft_strjoin (char *s1, char* s2);
size_t			ft_strlen (const char *str);
void			ft_write_hex (unsigned long d, int registr);

#endif