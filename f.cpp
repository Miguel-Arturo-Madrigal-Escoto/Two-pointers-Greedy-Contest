#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <map>
#include <set>
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

int main()
{   
    map<char,bool> exists; // vector de existencia
    map<char,int> counter; // cantidad de ocurrencias
    string str = "", dist_str = "";
    int n; 
    char c;
    cin>>n; cin.ignore();

    // mayus
    fore(i,65,91){
        exists[(char)i] = false;
        counter[(char)i] = 0;
    }

    // minus
    fore(i,97,123){
        exists[(char)i] = false;
        counter[(char)i] = 0;
    }

    fore(j,0,n){
        cin>>c;
        str+=c; // cad
        if(!exists[c]){
            exists[c] = true;
            dist_str+=c; // cad_distinta
        }
    }
    int cnt = 0, left_p = 0, min_flats = 100001, start_p = -1;
    //aabbcab
    fore(i,0,sz(str)){
        counter[str[i]]++; //ocurrencias str[i]

        if(counter[str[i]] == 1) cnt++; // primer ocurrencia

        // encontrados
        if (cnt == sz(dist_str)){
            // acortar la ventana
            while(counter[str[left_p]]>1){
                counter[str[left_p]]--;
                left_p++;
            }

            int curr_flats = i - left_p + 1;
            if(curr_flats < min_flats){
                min_flats = curr_flats;
                start_p = left_p;
            }
            //cout << "curr: " <<(str.substr(start_p, min_flats))<<ENDL;
        }
    }

    cout << sz(str.substr(start_p, min_flats)) << ENDL;
  
    return 0;
}