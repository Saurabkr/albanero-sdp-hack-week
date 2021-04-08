#include <bits/stdc++.h>
using namespace std;
  

string is_isogram(string str)
{
    int len = str.length();
  
    
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
  
    sort(str.begin(), str.end());
  
    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1])
            return "False";
    }
    return "True";
}
  

int main()
{
    string str1 = "Algorism";
    cout << is_isogram(str1) << endl;
  
    string str3 = "Password";
    cout << is_isogram(str3) << endl;
  
    string str4 = "Consecutive";
    cout << is_isogram(str4) << endl;
  
    return 0;
}
  

