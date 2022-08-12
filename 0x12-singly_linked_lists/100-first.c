#include "lists.h"
#include <stdio.h>

void myfunction(void) __attribute__ ((constructor));

/**
  myfunction - print line before ..
 * Return: nothing
 **/
void myfunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
