//count no of set in binary representation of given number
int count_one (int n)
{
    int count = 0;
    while( n )
    {
        n = n&(n-1);
        count++;
    }
    return count;
}

// is given no is power of two
bool isPowerOfTwo(int x)
    {
        // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
        return (x && !(x & (x - 1)));
    }

// Check if the ith bit is set in the binary form of the given number
bool check (int N)
    {
        if( N & (1 << i) )
            return true;
        else
            return false;
    }

// How to generate all the possible subsets of a set ?

void possibleSubsets(char A[], int N)
    {
        for(int i = 0;i < (1 << N); ++i)
        {
            for(int j = 0;j < N;++j)
                if(i & (1 << j))
                    cout << A[j] << ‘ ‘;
            cout << endl;
    }
    }


// Find the largest power of 2 (most significant bit in binary form), which is less than or equal to the given number N.

long largest_power(long N)
    {
        //changing all right side bits to 1.
        N = N| (N>>1);
        N = N| (N>>2);
        N = N| (N>>4);
        N = N| (N>>8);


    //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by 2.
                return (N+1)>>1;

    }






