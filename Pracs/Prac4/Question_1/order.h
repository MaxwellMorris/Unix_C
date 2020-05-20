void ascending3(int* v1, int* v2, int* v3);

void descending3(int* v1 , int* v2, int* v3);
typedef void (*order3)(int* ,int*, int*);
order3 order(char);
