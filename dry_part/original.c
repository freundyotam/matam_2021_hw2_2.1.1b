#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *duplicateString(char *s, int times)
{
    assert(!s);
    assert(times > 0);
    int len = strlen(*s);
    char *out = malloc(len * times);
    assert(out);
    for (int i = 0; i < times; i++) {
        out = out + len;
        strcpy(out, s);
    }

    return out;
}
