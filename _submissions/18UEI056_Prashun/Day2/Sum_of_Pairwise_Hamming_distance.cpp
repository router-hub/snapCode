/*
Hamming distance between two non-negative integers is defined as the number of positions at which the corresponding bits are different.

Given an array A of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array. Return the answer modulo 1000000007.
*/

//code
int Solution::hammingDistance(const vector<int> &A) {
   int bit_idx = 0;
int num_idx = 0;
unsigned long long int total_sum = 0, ones = 0, zero = 0;

for (bit_idx = 0; bit_idx < 32; bit_idx++)
{
    ones = 0;
    zero = 0;

    for (num_idx = 0; num_idx < A.size(); num_idx++)
    {
        if (A[num_idx] < 0)
            continue;
        if (1 == A.size())
            break;    
        if ((A[num_idx] >> bit_idx) & 1)
        {
            ones++;
        }
        else
        {
            zero++;
        }
    }
    total_sum += (ones * zero);
}
return ((total_sum * 2)%(1000000007));
}
