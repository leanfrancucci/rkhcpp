#ifndef __FOOBAR_H__
#define __FOOBAR_H__

/* ---------------------- External C language linkage ---------------------- */
#ifdef __cplusplus
extern "C" {
#endif

typedef struct ActObj ActObj;
struct ActObj
{
    int id;
    char name[16];
    void (*effect)(ActObj *me);
};

int foobar_print(void);
void foobar_set(ActObj *ao);

/* -------------------- External C language linkage end -------------------- */
#ifdef __cplusplus
}
#endif

#endif
