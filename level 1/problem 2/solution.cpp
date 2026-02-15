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
    stack<char> st;
    string s;
    cin>>s;
    for(char& c:s)
    {
        if(!st.empty() && st.top()==c) st.pop();
        else st.emplace(c);
    }
    cout<<st.size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    run_case();
    cerr<<endl;
    return 0;
}
