#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target){
    int* arr = (int *) malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            // printf("nums[%d] == %d and nums[%d] == %d\n", i, nums[i], j, nums[j]);
            if (nums[i] + nums[j] == target) {
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    return 0;
}

int main(int argc, char **argv) {
    int nums[3] = {3,2,4};
    int* arr = twoSum(nums, 3, 6);
    if (arr != NULL)
        printf("The result is {%d, %d}\n", arr[0], arr[1]);
    return 0;
}
