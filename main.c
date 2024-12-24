#include "get_next_line.h"

int main()
{
	int fd = open("text.txt",O_RDONLY);
	char *str = NULL;
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	close(fd);
}
