#include "main.h"
/**
  * _reverse_array - function name
  * @a: parameter one
  * @n: parameter 2
  * Return: void
  */

void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0; i < n / 2; i++)
{
	j = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = j;
}

}
