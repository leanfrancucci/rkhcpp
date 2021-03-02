#include <stdio.h>
#include "foocfg.h"

int
foozap_print(void)
{
    printf("Hello I'm zap\n");
#if (CFG_OPT_A == 1)
    printf("...I'm configurated as option B: %s\n", CFG_OPT_B);
#endif
#ifdef __LNXGNU__
    printf("...__LNXGNU__\n");
#endif
    return 0;
}
