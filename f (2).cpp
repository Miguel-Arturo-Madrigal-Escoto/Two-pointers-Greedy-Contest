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
    map<char,int> mapa; 
    map<char,bool> visited; 
    string str = "", dist_str = "";
    int n; 
    char c;
    cin>>n; cin.ignore();

    // mayus
    fore(i,65,91){
        mapa[(char)i] = 0;
        visited[(char)i] = false;
    }

    // minus
    fore(i,97,123){
        mapa[(char)i] = 0;
        visited[(char)i] = false;
    }

    fore(j,0,n){
        cin>>c;
        str+=c;
        if(!visited[c]){
            visited[c]=true;
            dist_str+=c;
        }
    }

    int left = 0, startp = -1, cnt = 0, min_window = 100001;
    fore(i,0,sz(str)){
        mapa[str[i]]++;

        if(mapa[str[i]] == 1) cnt++;

        if(cnt == sz(dist_str)){
            // erecortar la ventana
            while(mapa[str[left]]>1){
                mapa[str[left]]--;
                left++;
            }
            int curr_window = i - left + 1;
            if (curr_window < min_window){
                min_window = curr_window;
                startp = left;
            }
        }
    }

    cout <<  str.substr(startp, min_window)  << ENDL;

    return 0;
}