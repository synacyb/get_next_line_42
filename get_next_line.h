#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

//all prototype !!
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

#endif
