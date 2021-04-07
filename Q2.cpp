#include <bits/stdc++.h>
using namespace std;
string sortString(string s) {
    vector<int> frq(26, 0);
    for(auto x: s)
        frq[x-'a']++;
    int par = false;
    string ans = " ";
    bool can = false;
    do{
        can = false;
        string ss = "";
        for(int i=0;i<26;i++)
            if(frq[i]){
                ss += (char)(i+'a');
                frq[i]--;
                can |= (frq[i] > 0);
            }
        if(par == true)
            reverse(ss.begin(), ss.end());
        par ^= 1;
        ans += ss;
    } while(can);
    return ans;
}
int main()
{
    cout<<sortString("aaaabbbbcccc");
}
