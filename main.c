#include "get_next_line.h"

int main()
{
	int fd = open("text.txt",O_RDONLY);
	char *str = NULL;
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break;
		printf("%s", str);
		free(str);
	}
	close(fd);
}