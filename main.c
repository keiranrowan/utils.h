#include <stdio.h>
#include "utils.h"

int main(int argc, char *argv[])
{
//	float arr[] = { 1.0, 4.2, 4.3, 6.4, 5.0 };
//	printf("%lu %lu %lu\n", len(arr), sizeof(arr), sizeof(arr[0]));
//	sortZ(arr);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%f\n", arr[i]);
//	}
    char *arr[] = { "test", "apple", "vagrant", "Wii U" };
    printf("%lu %lu %lu\n", len(arr), sizeof(arr), sizeof(arr[0]));
    sortA(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", arr[i]);
    }
	return 0;
}
