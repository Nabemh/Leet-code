#include <stdio.h>
#include <stdlib.h>


void two_sum (int nums[], int nums_size, int target, int output[]){
    int checks;
    //int nums_size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < nums_size; i++){
        for (int n = i + 1; n < nums_size; n++){
                checks = nums[i] + nums[n];
                if (checks == target){
                    output[0] = i;
                    output[1] = n;
                    return;
                }
        }
    output[0] = -1;
    output[1] = -1;
    }
}

int main(void){
    int nums[] = {1, 2, 3, 4, 5, 6};
    int target = 6;
    int output[2];
    int nums_size = sizeof(nums) / sizeof(nums[0]);

    two_sum(nums, nums_size, target, output);

    if (output[0] != -1){
        printf("Output [%d, %d]\n", output[0], output[1]);
    } else{
        printf("No valid pairs found\n");

    }
    return (0);
}