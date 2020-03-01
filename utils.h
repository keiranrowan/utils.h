#ifndef __utils_h
#define __utils_h

#define len(a) (sizeof(a)/sizeof(a[0]))
#define sortA(x) _Generic((*x), \
                    short int: sintSortA, \
                    int: intSortA, \
                    long int: lintSortA, \
                    long long int: llintSortA, \
                    unsigned short int: usintSortA, \
                    unsigned int: uintSortA, \
                    unsigned long int: ulintSortA, \
                    unsigned long long int: ullintSortA, \
                    float: floatSortA, \
                    double: doubleSortA, \
                    long double: ldoubleSortA, \
                    char: charSortA, \
                    unsigned char: ucharSortA, \
                    signed char: scharSortA, \
                    char *: stringSortA, \
                    default: "Error: Cannot Sort Type")(x, len(x))
#define sortZ(x) _Generic((*x), \
                    short int: sintSortZ, \
                    int: intSortZ, \
                    long int: lintSortZ, \
                    long long int: llintSortZ, \
                    unsigned short int: usintSortZ, \
                    unsigned int: uintSortZ, \
                    unsigned long int: ulintSortZ, \
                    unsigned long long int: ullintSortZ, \
                    float: floatSortZ, \
                    double: doubleSortZ, \
                    long double: ldoubleSortZ, \
                    char: charSortZ, \
                    unsigned char: ucharSortZ, \
                    signed char: scharSortZ, \
                    char *: stringSortZ, \
                    default: "Error: Cannot Sort Type")(x, len(x))

// Sorting Functions
void sintSortA(short int[], int);
void sintSortZ(short int[], int);
void intSortA(int[], int);
void intSortZ(int[], int);
void lintSortA(long int[], int);
void lintSortZ(long int[], int);
void llintSortA(long long int[], int);
void llintSortZ(long long int[], int);
void usintSortA(unsigned short int[], int);
void usintSortZ(unsigned short int[], int);
void uintSortA(unsigned int[], int);
void uintSortZ(unsigned int[], int);
void ulintSortA(unsigned long int[], int);
void ulintSortZ(unsigned long int[], int);
void ullintSortA(unsigned long int[], int);
void ullintSortZ(unsigned long int[], int);
void floatSortA(float[], int);
void floatSortZ(float[], int);
void doubleSortA(double[], int);
void doubleSortZ(double[], int);
void ldoubleSortA(long double[], int);
void ldoubleSortZ(long double[], int);
void charSortA(char[], int);
void charSortZ(char[], int);
void ucharSortA(unsigned char[], int);
void ucharSortZ(unsigned char[], int);
void scharSortA(signed char[], int);
void scharSortZ(signed char[], int);
void stringSortA(char *[], int);
void stringSortZ(char *[], int);

// Memory Functions
//void *realloc(void *);
//void *resize(void *);
//void *remove(void *);

// Argument Functions
//int argc();
//char argv(int);

#endif
