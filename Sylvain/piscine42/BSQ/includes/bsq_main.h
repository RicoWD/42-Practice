/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_main.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:50:01 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 18:54:24 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_MAIN_H
# define BSQ_MAIN_H

# include<fcntl.h>
# include<unistd.h>
# include"bsq_bsq.h"

int		fast_job(int file_desc, t_bsq *bsq);
char	*create_buffer(int size);
void	free_all(t_bsq *bsq);

#endif
