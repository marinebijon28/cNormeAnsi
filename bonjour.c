// include write
#include <unistd.h>
// printf
#include <stdio.h>

void  my_putchar(char c) {
	write(1, &c, 1);
}

int my_strlen(char *str)
{
	// boucle while
	int i = 0;
	while (str[i] != '\0')
		i++;
	
	// boucle for
	for (int i = 0; str[i] != '\0'; i++);

	return i;
}

void my_putstr(char *str) {
	// boucle while
	int i = 0;
	while (i < my_strlen(str))
		my_putchar(str[i++]);
	
	// boucle for
	for (int i = 0; i < my_strlen(str); i++)
		my_putchar(str[i]);
}

int main() {
	printf("bonjour, maître\n");
	printf("boni\tjour,\cmaître\n");
	my_putstr("bonjour, maître\n");
	return 0;
}
