#include "prefixSum.h"
// cmath was added so I can use the abs() function
#include <cmath>

// returns true if the sum never goes below 0
bool non_neg_prefix_sum(int numbers[], int n) {
    int sum = 0;
    // if the array size is empty or negative return false
    if (n < 1) return false;
    // edge case to check the given array consists of +1 and -1
    for (int i = 0; i < n; i++){
        if (abs(numbers[i]) != 1){
            return false;
        }
        sum += numbers[i];
        if (sum < 0){
            return false;
        }
    }
    return true;
}

// returns true if the sum never goes above 0
bool non_pos_prefix_sum(int numbers[], int n){
    int sum = 0;
    if (n < 1) return false;
    for (int i = 0; i < n; i++){
        if (abs(numbers[i]) != 1){
            return false;
        }
        sum += numbers[i];
        if (sum > 0){
            return false;
        }
    }
    return true;
}