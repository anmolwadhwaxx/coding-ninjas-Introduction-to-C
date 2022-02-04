Sum of two arrays
Two random integer arrays are given A1 and A2, in which numbers from 0 to 9 are present at every index (i.e. single digit integer is present at every index of both given arrays).
You need to find sum of both the input arrays (like we add two integers) and put the result in another array i.e. output array (output arrays should also contain only single digits at every index).
The size A1 & A2 can be different.
Note : Output array size should be 1 more than the size of bigger array and place 0 at the 0th index if there is no carry. No need to print the elements of output array.
Input format :
Line 1 : Integer n1 (A1 Size)
Line 2 : A1 elements (separated by space)
Line 3 : Integer n2 (A2 Size)
Line 4 : A2 elements (separated by space)
Output Format :
Output array elements in a single line (separated by space)
Constraints :
0 <= n1, n2 <= 10^6
Sample Input 1:
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0
Sample Input 2:
3
8 5 2
2
1 3
Sample Output 2:
0 8 6 5


/***************************************************** SOLUTION **************************************************************************/


void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    // Write your code here
    int maxIndex = size1;
    if (size1 < size2)
    {
        maxIndex = size2;
    }

    int i = size1 - 1;
    int j = size2 - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = input1[i--] + input2[j--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }

    while (i >= 0)
    {
        int sum = input1[i--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }

    while (j >= 0)
    {
        int sum = input2[j--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }

    while (maxIndex >= 0)
    {
        output[maxIndex--] = carry;
    }
}