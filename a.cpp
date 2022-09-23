/* #include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
#define deb(x) cout << #x": " << (x) << endl;

int main(){
    lli coins, yen500=0LL, yen5=0LL, rest;
    cin>>coins;

    if (coins==0){
        cout << 0 << ENDL;
    } else {
        yen500 = coins/500LL;
        rest = coins%500LL;
        if(rest>=5){     
            yen5 = rest/5;
        }

        cout << (yen500 * 1000LL) + (yen5*5LL) << ENDL;
    }


    return 0;
} */