//#include <unistd.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer param.
 */
void puts2(char *str)
{
	int i = 0;
	int lenght = 0;

	while (str[lenght] != '\0')
		lenght++;

	for (i = 0; i <= lenght - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/*void puts2(char *str)
  {
  char c;

  c = '\n';
  while (*str)
  {
  write(1, str, 1);
  str += 2;
  }
  write(1, &c, 1);
  }*/
