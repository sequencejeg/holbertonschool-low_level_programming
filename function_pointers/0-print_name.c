#include "main.h"
/**
 * print_name - Prints a name
 * @name: String that hold name
 * @f: points to function
*/

void print_name(char *name, void (*f)(char *))
{
    if (!name || !f)
    {
        return;
    }
    
    f(name);
}
