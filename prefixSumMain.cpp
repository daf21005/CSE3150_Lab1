#include <iostream>
#include "prefixSum.cpp"

using namespace std;

int main() {
    int lst[] = { 1, -1, 1, -1 };
    
    cout << non_neg_prefix_sum(lst, 4) << endl;
    cout << non_pos_prefix_sum(lst, 4) << endl;

    return 0;
}