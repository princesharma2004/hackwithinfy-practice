class Solution
{
  public:
    int aggressiveCows(vector<int> &stalls, int k)
    {
        sort(stalls.begin(), stalls.end());
        int start=1, end=stalls.back()-stalls.front();
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(check(stalls, k, mid)) start=mid+1;
            else end=mid-1;
        }
        return end;
    }
    
  private:
    bool check(vector<int> &stalls, int k, int guess)
    {
        int cows=1, lastp=0;
        lastp=stalls[0];
        for(int i=1, n=stalls.size(); i<n; i++)
        {
            if(stalls[i]-lastp>=guess)
            {
                cows++;
                lastp=stalls[i];
            }
        }
        return cows>=k;
    }
};
