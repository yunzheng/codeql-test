#include <string.h>
#include <stdint.h>
#include <stdio.h>

int codeql_test(char *name)
{
    uint16_t u;
    uint32_t hash = strlen(name);
    for (u = 0; u < strlen(name); u++) {
        hash += name[u];
    }
    return 0;
}

int main(){
	printf("hello world2\n");
}
