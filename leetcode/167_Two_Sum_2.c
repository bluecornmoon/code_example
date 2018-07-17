#include <stdio.h>
#include <stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* resultSize) {
    *resultSize = 0;
    if (!nums || numsSize < 1) return NULL;
    int i = 0, j = numsSize - 1;
    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            *resultSize = 2;
            int *result = malloc(*resultSize * sizeof(int));
            result[0] = i + 1;
            result[1] = j + 1;
            printf("result[0]: %d, result[1]: %d\n", result[0], result[1]);
            return result;
        }
    }
    return NULL;
}


int main () 
{
    int nums[4] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = 4;
    int result_size;
    int *resultSize = &result_size;
    int *result;

    result = twoSum(nums, numsSize, target, resultSize);

    printf("result: %d, %d\n", result[0], result[1]);

    free(result);

    return 1;
}
