#include <bits/stdc++.h>
using namespace std;
#define PTR template<typename T> void printer(T&con,int end=0,string sp=" ") \
{if constexpr(is_integral<T>::value){cout<<con<<sp;}else \
if constexpr(is_pointer<T>::value){fr(i,end){printer(*con,0,sp);con++;} \
cout<<endl;}else if constexpr(is_same<T,string>::value){cout<<con<<sp;}else \
if constexpr(is_same <T,pair<int,int>>::value or is_same <T,pair<char,int>>::value) \
{cout<<"("<<con.f<<","<<con.s<<")"<<sp;}else{for(auto&it:con)printer(it,0,sp); \
cout<<endl;}}struct PRINT{template<typename T>auto operator<<(T con){printer(con);return *this;} \
template<typename T>auto operator()(T con,int end=0,string sp=" ") \
{printer(con,end,sp);return *this;}}print
#define endl '\n'
#define ll long long
#define vi vector<int>
#define vvi vector < vi >
#define pii pair<int,int>
#define mod 1000000007
#define inf 0x3f3f3f3f;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fr(x,to) for(int x=0;x<to;x++)
#define frg(x,to) for(int x=1;x<=to;x++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
PTR;
void reset(int n=0)
{
}
int main()
{
    #ifndef ONLINE JUDGE
    freopen("C:\\Programs\\in.txt","r",stdin);
    freopen("C:\\Programs\\out.txt","w",stdout);
    #endif
    IOS;
    int T=1;
    cin>>T;
    while(T--)
    {
    	vector<pii>vp{{3,4},{3,2}};
    	print<<vp<<vp;
    }
    return 0;
}
