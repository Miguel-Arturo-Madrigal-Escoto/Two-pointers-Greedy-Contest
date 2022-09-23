#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <cstdlib>
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
typedef signed long long ulli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;

#define deb(x) cout << #x": " << (x) << endl;

int main(){
    lli c, t, ct, r = 0LL; cin>>c>>t;
    vi cities, towers;

    fore(i,0,c){
        cin>>ct;
        cities.pb(ct);
    }
    fore(i,0,t){
        cin>>ct;
        towers.pb(ct);
    }

    lli cp = 0, tp = 0;
    while(cp < c){
        while(tp + 1 < t && abs(cities[cp] - towers[tp]) >= abs(cities[cp] - towers[tp + 1])) tp++;
        r = max(r, abs(cities[cp] - towers[tp]));
        cp++;
    }
 
    cout << r << ENDL;

    return 0;
}