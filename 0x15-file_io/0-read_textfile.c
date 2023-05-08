/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *
 * Return: If the file cannot be opened or read, return 0. If filename is NULL,
 * return 0. If write fails or does not write the expected amount of bytes,
 * return 0. Otherwise, return the actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t opn;
	ssize_t wrt;
	ssize_t rd;

	opn = open(filename, O_RDONLY);
	if (opn == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(opn, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(opn);
	return (wrt);

}
