#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include "generate.h"
int main()
{
    char *str;
    generate_str(&str,string_type(),string_size());
    printf("String:%s\n",str);
    free(str);
    return 0;
}
