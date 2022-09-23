/* #include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
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
    lli c=0;
    string cad1,cad2;
    getline(cin,cad1,'\n');
    getline(cin,cad2,'\n');

    if (cad1 == cad2){
        cout << 0 << ENDL;
    } else {
        fore(i,0,sz(cad2)){
            if(cad2[i] != cad1[i]) c++;
        }
        cout << c << ENDL;
    }



    return 0;
} */