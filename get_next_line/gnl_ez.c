#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer;
	char	rtn[999999];
	int		x;
	int		i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	i = 0;
	x = read(fd, &buffer, 1);
	while (x > 0)
	{
		rtn[i++] = buffer;
		if (buffer == '\n')
			break ;
		x = read(fd, &buffer, 1);
	}
	rtn[i] = 0;
	if (x <= 0 && i == 0)
		return (0);
	return (ft_strdup(rtn));
}

/*int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("test.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}*/
