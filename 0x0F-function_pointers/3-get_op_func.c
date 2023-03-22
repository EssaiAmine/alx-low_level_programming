
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the
 *               operation specified by the user
 *
 * @s: the operator passed as a command line argument
 *
 * Return: a pointer to the corresponding operation function, or NULL
 *         if the operator is not recognized
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}

return (NULL);
}
