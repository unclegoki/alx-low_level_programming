#include <string.h>
/**
 * struct op - struct op
 * @op: The operator
 * @f: the associated functiokn
 */
typedef struct op op_t
{
	char *op;
	int (*f)(int a, int b);
}

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
