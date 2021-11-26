#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

char *stringduplicator(char *s, int times) {
    assert(s); // Assert should check if the array is null and not if it's not null
    assert(times > 0);
    int LEN = strlen(s); // first bug removing the *
    char *out = malloc(LEN * times);
    char *beginning = out; // We want to return beginning and not out since its modified
    assert(out); // This shouldn't be an 'assert' but 'if(out == NULL)'
    for (int i = 0; i < times; i++) {
        strcpy(out, s); // First put s then increment out
        out = out + LEN;
    }
    return beginning;
}

int main(){
    char str[] = "1234";
    printf("%s", stringduplicator(str,1));
}