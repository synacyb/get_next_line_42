#include "get_next_line.h"

int main()
{
	char bufer[50];
	ssize_t bytes_read;
	int fd = open("text.text", O_RDONLY, 0777);
	static char c;
	int j = 0;
	while (j < 9)
	{
		bytes_read = read(fd, bufer, BUFFER_SIZE);
		bufer[bytes_read + 1] = '\0';
		int i = 0;
		while (bufer[i] != '\0')
			write(1, &bufer[i++], 1);
		j++;
	}
	close(fd);
	return 0;
}