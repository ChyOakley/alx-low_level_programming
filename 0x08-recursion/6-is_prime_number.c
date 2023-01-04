#include "main.h"

/**
 * prime_number - check description
 * Description: function that reurns 1
 * @i: integer
 * @m: input
 * Return:0
 */

int prime_number(int i, int m)
{
if (m < 2 || m % i == 0)
{
return (0);
}
else if (i > m / 2)
{
return (1);
}
else
{
return (prime_number(i + 1, m));
}
}
