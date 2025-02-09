/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:41:58 by codephenix5       #+#    #+#             */
/*   Updated: 2025/01/09 12:00:00 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef int	t_bool;

# define TRUE 1
# define FALSE (!TRUE)
# define SUCCESS 0
# define EVEN(n) ((n) % 2 == 0)
# define EVEN_MSG "I have an even number of arguments. \n"
# define ODD_MSG "I have an odd number of arguments. \n"

#endif
