class Solution
{
public:
    long long minimumTime(vector<int>& time, int totalTrips)
    {
        long long start=1, end=1ll*(*max_element(time.begin(), time.end()))*totalTrips;
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            if(check(time, totalTrips, mid)) end=mid-1;
            else start=mid+1;
        }
        return start;
    }

private:
    bool check(vector<int>& time, int totalTrips, long long guess)
    {
        long long trips=0;
        for(int& t:time)
        {
            trips+=guess/t;
            if(trips>=totalTrips) return true;
        }
        return false;
    }
};
