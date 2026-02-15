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

void run_case()
{
    size_t n;
    cin>>n;
    vector<int> arr(n);
    for(size_t i=0; i<n; i++) cin>>arr[i];

    priority_queue<int> maxHeap(arr.begin(), arr.end());
    long long op=0;
    while(maxHeap.size()>=2)
    {
        int f=maxHeap.top();
        maxHeap.pop();
        int s=maxHeap.top();
        maxHeap.pop();

        if(f!=s)
        {
            maxHeap.E(max(f, s)-min(f, s));
            op+=min(f, s);
        }
        else
        {
            if(!maxHeap.empty())
            {
                int next=maxHeap.top();
                if(next!=1)
                {
                    maxHeap.E(next-1);
                    maxHeap.E(next-1);
                    op+=f-next+1 + s-next+1;
                }
                else op+=f;
            }
            else op+=f;
        }
    }
    cout<<op;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    run_case();
    cerr<<endl;
    return 0;
}
