#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 *main-entry path
 *
 *Return : Always 1 (success)
 *
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, ch, sizeof(ch));	
	return (1);
}
