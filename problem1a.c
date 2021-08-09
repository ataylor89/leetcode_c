#include <stdio.h>
#include <stdlib.h> 

int * two_sum(int *nums, int size, int s) {
    int arr[2];
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == s) {
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    return 0;
}

int main(int argc, char **argv) { 
    int nums[10] = {1,2,3,4,5,1,2,3,4,5};
    int s = 2;
    int *arr = two_sum(nums, 10, s);
    if (arr != 0)
        printf(“Array elements at i=%d and j=%d sum to %d\n”, arr[0], arr[1], s);
    return 0;
}
