#include <stdlib.h>
#inclde "function_pointers.h"

/**
 * ptint_name - prjnt a name
 * @name: name to print
 * @f: pointer to the printint function
 */

void print_name(char *name, void (*f)(char *));
{
	if (!name || !f)
		return;
	f(name);
}
