#include <stdio.h>
/**
 * _atoi - convert string to int
 * @s: The string to be converted
 *
 * Return: the int equiv of  s
 */
int _atoi(char *s)
{
        int i, j, k, l, m, digit;

        i = 0;
        j = 0;
        k = 0;
        l = 0;
        m = 0;
        digit = 0;

        while (s[l] != '\0')
                l++;

        while (i < l && m == 0)
        {
                if (s[i] == '-')
                        ++j;

                if (s[i] >= '0' && s[i] <= '9')
                {
                        digit = s[i] - '0';
                        if (j % 2)
                                digit = -digit;
                        k = k * 10 + digit;
                        m = 1;
                        if (s[i + 1] < '0' || s[i + 1] > '9')
                                break;
                        m = 0;
                }
                i++;
        }

        if (m == 0)
                return (0);

        return (k);
}
