#include <iostream>
#include <set>
#include <queue>

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
    unordered_map<int, int> mp;
    ll count=0;
    int n;
    cin>>n;

    vi arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        count+=mp.count(-arr[i]);
        mp[arr[i]]++;
    }
    cout<<count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    run_case();
    cerr<<endl;
    return 0;
}
