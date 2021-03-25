/* 
 * Given a sorted array nums, remove the duplicates 
 * in-place such that each element appears only once 
 * and returns the new length.
 *
 * https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/
 * */

#include <stdlib.h>
#include <stdio.h>
#include "arrays.h"

int main(void) {
    int numsSize = 10;
    int nums[] = {
        [0] = 0,
        [1] = 0,
        [2] = 1,
        [3] = 1,
        [4] = 1,
        [5] = 2,
        [6] = 2,
        [7] = 3,
        [8] = 3,
        [9] = 4,
    };
    int u = numsSize - 1;   // last unique element pointer

    print_array(nums, numsSize);

    for (int i = u - 1; i >= 0; i--) {
        if (nums[i] == nums[u]) {
            for (int p = u; p < numsSize - 1; p++) {
                nums[p] = nums[p + 1];
            }
            numsSize--;
        }
        u--;

        // print_array(nums, numsSize);
    }

    print_array(nums, numsSize);

    return EXIT_SUCCESS;
}

