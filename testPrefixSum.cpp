#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 
#include "./include/doctest.h" 
#include "prefixSum.cpp"

// given example array
int lst[] = { 1, -1, 1, -1 };

int A[] = {1, 1, 1, 1};
int B[] = {-1, -1, -1, -1};
int C[] = {5, -3, 20};
int D[] = {};
int E[] = {0, 0, 0};


TEST_CASE("Testing non_neg_prefix_sum function") {
    CHECK(non_neg_prefix_sum(lst, 4));

}

TEST_CASE("Testing non_pos_prefix_sum function") {
    CHECK(non_pos_prefix_sum(lst, 4));

}