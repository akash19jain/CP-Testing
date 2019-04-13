# COMPETITIVE PROGRAMMING -Testing
Stress test your program to find counter test cases when you have a correct solution and a brute force solution for LINUX.

SAMPLE QUESTION for which the solutions and generater has been created.

You are given a sequence of DISTINCT numbers a[1], a[2], ..., a[N].
Find the second smallest element in the sequence.
2 <= N <= 10^6, 1 <= a[i] <= 10^9


inc.c - Optimized Solution that gives an incorrect solution.  
brute.cpp - Brute Force Soluion that gives the correct solution.  
inp - Sample Input  
gen.cpp - Test Case Generator (It generates a number N (the number of array elements) and then N distinct numbers between the given range.)  
s.sh - Bash Script that test inc.c and brute.cpp against each other with a common input and breaks when a difference is found.  
