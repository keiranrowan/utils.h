#include "utils.h"

void sintSortA(short int arr[], int n) {
    int i, j;
    short int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void sintSortZ(short int arr[], int n) {
    int i, j;
    short int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void intSortA(int arr[], int n) {
    int i, j, t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void intSortZ(int arr[], int n) {
    int i, j, t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void lintSortA(long int arr[], int n) {
    int i, j;
    long int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void lintSortZ(long int arr[], int n) {
    int i, j;
    long int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void llintSortA(long long int arr[], int n) {
    int i, j;
    long long int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void llintSortZ(long long int arr[], int n) {
    int i, j;
    long long int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void usintSortA(unsigned short int arr[], int n) {
    int i, j;
    unsigned short int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void usintSortZ(unsigned short int arr[], int n) {
    int i, j;
    unsigned short t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void uintSortA(unsigned int arr[], int n) {
    int i, j;
    unsigned int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void uintSortZ(unsigned int arr[], int n) {
    int i, j;
    unsigned int t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ulintSortA(unsigned long int arr[], int n) {
    int i, j;
    unsigned long t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ulintSortZ(unsigned long int arr[], int n) {
    int i, j;
    unsigned long t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ullintSortA(unsigned long int arr[], int n) {
    int i, j;
    unsigned long long t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ullintSortZ(unsigned long int arr[], int n) {
    int i, j;
    unsigned long long t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void floatSortA(float arr[], int n) {
    int i, j;
    float t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void floatSortZ(float arr[], int n) {
    int i, j;
    float t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void doubleSortA(double arr[], int n) {
    int i, j;
    double t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void doubleSortZ(double arr[], int n) {
    int i, j;
    double t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ldoubleSortA(long double arr[], int n) {
    int i, j;
    long double t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ldoubleSortZ(long double arr[], int n) {
    int i, j;
    long double t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void charSortA(char arr[], int n) {
    int i, j;
    char t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void charSortZ(char arr[], int n) {
    int i, j;
    char t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ucharSortA(unsigned char arr[], int n) {
    int i, j;
    unsigned char t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void ucharSortZ(unsigned char arr[], int n) {
    int i, j;
    unsigned char t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void scharSortA(signed char arr[], int n) {
    int i, j;
    signed char t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void scharSortZ(signed char arr[], int n) {
    int i, j;
    signed t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void stringSortA(char * arr[], int n) {
    int i, j;
    char *t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j][0] > arr[j+1][0])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void stringSortZ(char * arr[], int n) {
    int i, j;
    char *t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (arr[j][0] < arr[j+1][0])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
