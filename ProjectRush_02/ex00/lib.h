/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 17:01:09 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/14 19:34:25 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	millares(unsigned int value, char *buf, char *dest);
char	*reverse_atoi(unsigned int num);
void	writenum(char *buf, char *src, char *final);
char	*ft_justone(char *src, char *extra);
char	*ft_strstr(char *buf, char *to_find);
char	*file_open(char *filename);
void	error();
void	final_touches(char *final);
void	write_final(char *final);
#endif
