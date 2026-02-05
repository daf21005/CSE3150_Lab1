#include <iostream>
// #include "prefixSum.cpp"
#include "prefixSum.h"

using namespace std;

int main() {
    int lst[] = { 1, -1, 1, -1 };
    int lst2[] = {-1, 1, -1, 1};
    
    cout << non_neg_prefix_sum(lst, 4) << endl; // returns true
    cout << non_pos_prefix_sum(lst, 4) << endl; // returns false

    cout << non_neg_prefix_sum(lst2, 4) << endl; // return false
    cout << non_pos_prefix_sum(lst2, 4) << endl; // return true

    return 0;
}