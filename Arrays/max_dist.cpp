int Solution::maximumGap(const vector<int> &A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    int *lmin = new int[n], *rmax = new int[n];
    
    lmin[0] = A[0];
    for(auto i=1; i<n; i++)
    {
        lmin[i] = min(A[i], lmin[i-1]);
    }
    
    rmax[n-1] = A[n-1];
    for(auto i=n-2; i>=0; i--)
    {
        rmax[i] = max(A[i], rmax[i+1]);
    }
    
    int i = 0, j = 0, maxd = -1;
    while(i<n && j<n)
    {
        if(lmin[i] <= rmax[j])
        {
            maxd = max(maxd, j-i);
            j++;
        }
        else 
            i++;
    }
    
    return maxd;
    
}