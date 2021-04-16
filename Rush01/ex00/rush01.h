/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:58:04 by jchoi-ro          #+#    #+#             */
/*   Updated: 2020/11/30 01:48:40 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <stdlib.h>
# include <unistd.h>

void	ft_error(int *flag);
void	*ft_matrix_alloc(char **mat);
void	ft_matrix_free(char **mat);
void	ft_matrix_printer(char **mat);
void	ft_validation(char **v, int *flag, int argc, char *argv);
void	ft_solver(char **m, char **v, int *flag);
void	ft_input_check(char *str, int *flag);
int		ft_strlen(char *str);
void	ft_wp_trimmer(char **v, char *str);
void	ft_spacenumber(char *str, int *flag);
void	ft_filler(char **m, int num, int col, char *fill);
void	ft_test_caller(char **m, char **v, int *flag, int lin_col);
void	ft_test_runner(char **m, char **v, int *flag, int col);
int		ft_zero_counter(char **m);
void	ft_tester1(char **m, char **v, int *flag, int *params);
void	ft_tester2(char **m, char **v, int *flag, int *params);
void	ft_tester3(char **m, char **v, int *flag, int *params);
void	ft_tester4(char **m, char **v, int *flag, int *params);
void	ft_tester_12(char **m, int *flag, int num, int col);
void	ft_tester_13(char **m, int *flag, int num, int col);
void	ft_tester_14(char **m, int *flag, int num, int col);
void	ft_tester_21(char **m, int *flag, int num, int col);
void	ft_tester_22(char **m, int *flag, int num, int col);
void	ft_tester_22_part2(char **m, int *flag, int num, int col);
void	ft_tester_23(char **m, int *flag, int num, int col);
void	ft_tester_31(char **m, int *flag, int num, int col);
void	ft_tester_32(char **m, int *flag, int num, int col);
#endif
