#include <iostream>
#include <set>
#include <queue>
#include <algorithm>
#include <numeric>

using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;

#define F first
#define S second
#define E emplace
#define EB emplace_back
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) (int)(x).size()
#define REP(i,a,b) for (int i = a; i <= b; i++)

#ifndef LOCAL
#define cerr if(false) cerr
#endif

// constexpr int mod=10e8+7;

// bool realEqual(const double& a, const double& b, const double e=1e-9)
// {
//     return abs(a-b) < e;
// }

// long long mypow(int a, int b){
//     long long ans=1;
//     while(b-- >0){
//         ans*=a;
//     }
//     return ans;
// }

bool check(vector<int> &arr, int k, int pageLimit)
{
    int cnt=1, pageSum=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(pageSum+arr[i]>pageLimit)
            {cnt++; pageSum=arr[i];}
        else pageSum+=arr[i];
    }
    return (cnt<=k);
}

void run_case()
{
    int n, k;
    cin>>n;
    vi pages(n);
    for(int i=0; i<n; i++) cin>>pages[i];
    cin>>k;
    if(k>n) {cout<<-1; return;}

    int start=*min_element(pages.begin(), pages.end()), end=accumulate(pages.begin(), pages.end(), 0);
    while(end>=start)
    {
        int mid=start+(end-start)/2;
        if(check(pages, k, mid)) end=mid-1;
        else start=mid+1;
    }
    cout<<start;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    run_case();
    cerr<<endl;
    return 0;
}
