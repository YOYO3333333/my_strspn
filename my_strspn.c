#include "my_strspn.h"

size_t my_strspn(const char *s, const char *accept)
{
    size_t cmpt = 0;
    for (size_t i = 0; s[i] != '\0'; i++)
    {
        for (int j = 0; accept[j] != 0; j++)
        {
            if (accept[j] == s[i])
            {
                cmpt += 1;
                break;
            }
        }
        if (cmpt != i + 1)
            return cmpt;
    }
    return cmpt;
}
