void printword(char *word)
{
	int i = 0;

	while (i < strlen(word))
	{
		putchar(word[i]);
		i++;
	}
}
