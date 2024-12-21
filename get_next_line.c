#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	src = (char *)s + start;
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		*str = *src;
		str++;
		src++;
		i++;
	}
	*str = '\0';
	str = str - i;
	return (str);
}
char *result(int fd, char **str, char *buffer)
{
    int n;
    char *tmp;
    while (1)
    {
        n = read(fd ,buffer, BUFFER_SIZE);
        if (n <= 0)
            return NULL;
        if (!(*str))
            (*str) = ft_strdup("");
        tmp = (*str);
        buffer[n] = '\0';
        (*str) = ft_strjoin((*str),buffer);
        free(tmp);
        tmp = NULL;
        if (ft_strchr(buffer, '\n'))
            break;
    }
    return (*str);
}
void    find_next_line(char **str)
{
    int i;
    int len;
    char *tmp;

    i = 0;
    tmp = *str;
    len = ft_strlen(*str);
    while (tmp[i] && tmp[i] != '\n')
        i++;
    if ((tmp[i]) == '\n')
        *str = ft_substr((*str), i + 1, len - i);
    // printf("(((((%s))))\n",*str);
    // if ((tmp[i]) == '\0')
}
char *get_next_line(int fd)
{
    static char *str;
    char *buffer;
    char *line; 

    buffer = malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);
    line = result(fd, &str, buffer);
    // find_next_line(&str);
    return line;
}