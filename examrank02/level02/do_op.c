/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:09:56 by nkietwee          #+#    #+#             */
/*   Updated: 2022/12/06 13:42:53 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 4)
    {
        if (argv[2][0] == '*')
            printf( "%d", (atoi(argv[1]) * atoi(argv[3])));
        else if (argv[2][0] == '+')
            printf( "%d", (atoi(argv[1]) + atoi(argv[3])));
        else if (argv[2][0] == '-')
            printf( "%d", (atoi(argv[1]) - atoi(argv[3])));
        else if (argv[2][0] == '/')
            printf( "%d", (atoi(argv[1]) / atoi(argv[3])));
    }
    write (1, "\n", 1);
    return (0);
}
