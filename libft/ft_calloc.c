#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	size_t fullsize;
	char *buf;

	if (nmemb == 0 || size == 0)
		return NULL;

	i = 0;
	fullsize = nmemb * size;

	buf = malloc(fullsize);
	if (buf == NULL)
		return NULL;

	while (i < fullsize)
	{
		buf[i] = 0;
		i++;
	}
	return buf;
}
int main() {
    // Test 1: Normal allocation (small values)
    int *arr1 = (int *)ft_calloc(5, sizeof(int));
    if (arr1 == NULL) {
        printf("Test 1 failed: Allocation returned NULL\n");
    } else {
        printf("Test 1 passed: Allocation succeeded\n");
        for (int i = 0; i < 5; i++) {
            if (arr1[i] != 0) {
                printf("Test 1 failed: Array not zero-initialized\n");
                break;
            }
        }
        free(arr1);
    }

    // Test 2: Zero allocation (nmemb = 0)
    int *arr2 = (int *)ft_calloc(0, sizeof(int));
    if (arr2 == NULL) {
        printf("Test 2 passed: Returned NULL for zero elements\n");
    } else {
        printf("Test 2 failed: Should return NULL for zero elements\n");
        free(arr2);
    }

    // Test 3: Zero allocation (size = 0)
    int *arr3 = (int *)ft_calloc(5, 0);
    if (arr3 == NULL) {
        printf("Test 3 passed: Returned NULL for zero size\n");
    } else {
        printf("Test 3 failed: Should return NULL for zero size\n");
        free(arr3);
    }

    // Test 4: Large allocation (to check for overflow detection)
    size_t large_size = SIZE_MAX / 2 + 1;
    int *arr4 = (int *)ft_calloc(large_size, 2);
    if (arr4 == NULL) {
        printf("Test 4 passed: Overflow correctly detected\n");
    } else {
        printf("Test 4 failed: Should detect overflow\n");
        free(arr4);
    }

    // Test 5: Edge case (allocation of 1 element of large size)
    int *arr5 = (int *)ft_calloc(1, large_size);
    if (arr5 == NULL) {
        printf("Test 5 passed: Overflow correctly detected with large size\n");
    } else {
        printf("Test 5 failed: Should detect overflow\n");
        free(arr5);
    }

    return 0;
}

