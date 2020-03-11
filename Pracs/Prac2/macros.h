#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE !FALSE
#endif

#ifndef BETWEEN
#define BETWEEN(x_min, x_max, x) (((x) >= (x_min)) && ((x) <= (x_max)))
#endif

