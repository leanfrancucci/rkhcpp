#include <stdio.h>
#include "foocfg.h"
#include "foobar.h"

static ActObj *foobarObj;

int
foobar_print(void)
{
#if 0
    printf("Hello I'm bar\n");
#if (CFG_OPT_A == 1)
    printf("...I'm configurated as option B: %s\n", CFG_OPT_B);
#endif
#ifdef __LNXGNU__
    printf("...__LNXGNU__\n");
#endif
#ifdef FOO_COMPILE_OPT
    printf("FOO_COMPILE_OPT is defined as %d\n", FOO_COMPILE_OPT);
#endif
#endif
    if (foobarObj->effect != NULL)
    {
        printf("Call c++ callback from foobar\n");
        printf("ActObj::id = %d - ActObj::name = %s\n", 
                foobarObj->id, foobarObj->name);
        foobarObj->effect(foobarObj);
    }
    return 0;
}

void
foobar_set(ActObj *ao)
{
    foobarObj = ao;
}
