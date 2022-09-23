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

int main(){ IO
    int r,c,n,ccount=0,rcount=0, a=0,b=0; cin>>r>>c>>n;

    fore(i,0,c){
        ccount += r;
        if(ccount<n) a++;
        else if(ccount==n) {  a++; break; }
        else if(ccount>n){  a++; break; }
    }
    fore(i,0,r){
        rcount += c;
        if(rcount<n) b++;
        else if(rcount==n) {  b++; break; }
        else if(rcount>n){  b++; break; }
    }

    cout << min(a,b) << ENDL;

    return 0;
} */