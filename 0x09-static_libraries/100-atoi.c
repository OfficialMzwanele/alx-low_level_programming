/**
 * _atoi - convert string into an integer
 * @s: pointer to a characterstring
 * Return: Always 0
 */
int _atoi(char *s)
{
	int sign;
	unsigned int n;
	char *temp;

	temp = s;
	n = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
		{
			sign *= -1;
		}
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			n = n * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (n * sign);
}
