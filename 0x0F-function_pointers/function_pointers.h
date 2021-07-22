#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_

void print_name(char *name, void (*f)(char *));
{
	if (f)
		f(name);
}

#endif // FUNCTION_POINTERS_
