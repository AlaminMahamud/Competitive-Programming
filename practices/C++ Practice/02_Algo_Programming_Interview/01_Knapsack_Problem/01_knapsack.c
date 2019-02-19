float w[100];
int b[100];
bool x[100];

// This is an optimization problem
// maximize the profit

// Summation 
// The Constraint is that 
// Summation i == M
// Solve 

// BRUTEFORCE Algorithm
// Try all possible subsets
// I will try all the possible subsets
// nC0 + nC1 + nC2 + nC3 + nC4
// O(2^n)


// We will try to solve this using Dynamic Programming

// two things are very important for Dynamic Programming
    // 1. Optimal Substructure - Main Problems can be solved by optimal Substructure
    // 2. Overlapping Subproblems

// Benefit(i,w) = MAX Benefit I get by choosing weights till ith item.
// I will be choosing only first ith item.
 