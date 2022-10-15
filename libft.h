/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymenyoub <ymenyoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 03:08:11 by ymenyoub          #+#    #+#             */
/*   Updated: 2022/10/15 23:38:25 by ymenyoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long size_t;
int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
int	    ft_isalnum(int	c);
int	    ft_isalpha(int	c);
int	    ft_isascii(int	c);
int	    ft_isdigit(int	c);
int	    ft_isprint(int	c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void	*b, int	c, size_t	len);
char    *ft_strchr(const char   *s,int  c);
size_t	ft_strlcat(char	*dst, const char	*src,	size_t dstsize);
size_t	ft_strlcpy(char	*dst,const char	*src,size_t	dstsize);
size_t	ft_strlen(const char	*s);
int	    ft_strncmp(const char	*s1,const char	*s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
int	    ft_tolower(int	c);
int	    ft_toupper(int	c);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strdup(const char *s1);
void    *ft_calloc(size_t count, size_t  size);

 
#endif