#ifndef __utils_h
#define __utils_h

#define len(a) (sizeof(a)/sizeof(a[0]))

// Sorting Functions
void intSortA(int[], int);
void intSortZ(int[], int);
void floatSortA(float[], int);
void floatSortZ(float[], int);
void charSortA(char[], int);
void charSortZ(char[], int);

// Memory Functions
//void *ealloc(void *);
//void *resize(void *);
//void *remove(void *);

// Argument Functions
//int argc();
//char argv(int);

#endif
