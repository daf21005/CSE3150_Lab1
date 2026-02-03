#include "prefixSum.h"

// returns true if this never goes below 0
bool non_neg_prefix_sum(int numbers[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += numbers[i];
        if (sum < 0){
            return false;
        }
    }
    return true;
}

// returns true if this never goes above 0
bool non_pos_prefix_sum(int numbers[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += numbers[i];
        if (sum > 0){
            return false;
        }
    }
    return true;
}