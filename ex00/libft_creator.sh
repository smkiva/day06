# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smkiva <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 11:41:09 by smkiva            #+#    #+#              #
#    Updated: 2020/06/25 15:46:18 by smkiva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
gcc -Wall -Wextra -Werror -c ft*.c;
ar rc  libft.a ft*.o;
ranlib libft.a 
