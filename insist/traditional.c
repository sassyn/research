#include <assert.h>
#include <stdio.h>

int _strlen(const char *s)
{
	assert(s != NULL);

	int n = 0;
	while (*s++)
		n++;

	return n;
}

int main(int argc, char **argv)
{
	_strlen(NULL); /* should fail */
	return 0;
}
