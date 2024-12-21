#include "get_next_line.h"

int main()
{
	int fd = open("text.text",O_RDONLY);

	printf("%s",  get_next_line(fd));
	// printf("%s",  get_next_line(fd));
	// printf("%s",  get_next_line(fd));
	// printf("%s",  get_next_line(fd));
	// printf("%s",  get_next_line(fd));
	// printf("%s",  get_next_line(fd));
	close(fd);
}