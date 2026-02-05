#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 
#include "./include/doctest.h" 
#include "prefixSum.h"

// given example array
int lst[] = { 1, -1, 1, -1 };
int lst2[] = {-1, 1, -1, 1};

// Valid inputs, consists of +1 or -1
int lstA[] = {1, 1, 1, 1};
int lstB[] = {-1, -1, -1, -1};
// Invalid inputs, doesn't consists of +1 and -1
int lstC[] = {5, -3, 20, -100};
int lstD[] = {};
int lstE[] = {0, 0, 0, 0};


TEST_CASE("Testing non_neg_prefix_sum function with a simple array") {
    CHECK(non_neg_prefix_sum(lst, 4) == true);
    CHECK(non_neg_prefix_sum(lst2, 4) == false);
}

TEST_CASE("Testing non_pos_prefix_sum function with a simple array") {
    CHECK(non_pos_prefix_sum(lst, 4) == false);
    CHECK(non_pos_prefix_sum(lst2, 4) == true);
}


TEST_CASE("Testing non_neg_prefix_sum function with more complex array"){
    CHECK(non_neg_prefix_sum(lstA, 4) == true);
    CHECK(non_neg_prefix_sum(lstB, 4) == false);
    CHECK(non_neg_prefix_sum(lstC, 4) == false);
    CHECK(non_neg_prefix_sum(lstD, 0) == false);
    CHECK(non_neg_prefix_sum(lstE, 4) == false);

}

TEST_CASE("Testing non_pos_prefix_sum function with more complex array"){
    CHECK(non_pos_prefix_sum(lstA, 4) == false);
    CHECK(non_pos_prefix_sum(lstB, 4) == true);
    CHECK(non_pos_prefix_sum(lstC, 4) == false);
    CHECK(non_pos_prefix_sum(lstD, 0) == false);
    CHECK(non_pos_prefix_sum(lstE, 4) == false);

}

TEST_CASE("Testing when we give a negative number of array size"){
    CHECK(non_neg_prefix_sum(lst, -4) == false);
    CHECK(non_pos_prefix_sum(lst, -4) == false);

}