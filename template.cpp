//------------------------------------------
// C++ templete
//------------------------------------------
#include <bits/stdc++.h>
#define int long long
using namespace std;

//type
//------------------------------------------
using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
using vs=vector<string>;

//REPEAT
//------------------------------------------
#define REP(i,a,b) for(int i=(a);i<(b);++i)

//container util
//------------------------------------------
#define pb push_back
#define paired make_pair
#define ALL(a) (a).begin(),(a).end()
#define PRINT(V) for (auto v : (V)) cout << v << " "
#define SORT(V) sort((V).begin(),(V).end())
#define RSORT(V) sort((V).rbegin(), (V).rend())
#define SZ(x) ((int)(x).size())

//constant
//------------------------------------------
const int MOD = 1000000007;
const int INF = 2147483647;//1061109567;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

//math
//------------------------------------------
int QP(int a,int b){int ans=1;do{if(b&1)ans=1ll*ans*a%MOD;a=1ll*a*a%MOD;}while(b>>=1);return ans;}
int QP(int a,int b,int MOD){int ans=1;do{if(b&1)ans=1ll*ans*a%MOD;a=1ll*a*a%MOD;}while(b>>=1);return ans;}
int GCD(int a,int b){return b?GCD(b,a%b):a;}

//debug
//------------------------------------------
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

//grobal variable
//------------------------------------------
ll N, M;

//main
//------------------------------------------

signed main(){

}
