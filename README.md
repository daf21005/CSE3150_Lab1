# CSE 3140 Lab 1 - Prefix Sums Lab Exercise  
In this lab we are creating two functions that both return a boolean both behave polar opposite from one another.  
The functions we have are `non_neg_prefix_sum()` where if the added array were to go over 0 it'll return false (0 when it gets printed) and `non_pos_prefix_sum()` where it returns a false if the sumation goes over 0.  

## Edge Cases  
Such edge cases is when:
- Array doesn't consists +1 or -1 (ex. {5, -3, 20})
- Array is empty
- Array size is negative

## Compilation and Execution
Compile and run main program:
```
g++ prefixSum.cpp prefixSumMain.cpp -o mainProg
./mainProg
```

Compile and run unit test:
```
g++ prefixSum.cpp testPrefixSum.cpp -o test_PrefixSum
./test_PrefixSum
```

### David Flores
