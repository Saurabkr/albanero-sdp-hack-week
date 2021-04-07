#include <bits/stdc++.h>
using namespace std;
 
bool check(string pattern, string word)
{
    if (pattern.length() != word.length())
        return false;
 
    char ch[128] = { 0 };
 
    int len = word.length();
 
    for (int i = 0; i < len; i++) {
        if (ch[pattern[i]] == 0)
            ch[pattern[i]] = word[i];
        else if (ch[pattern[i]] != word[i])
            return false;
    }
 
    return true;
}
 

void findMatchedWords(unordered_set<string> dict,
                      string pattern)
{
    
    int len = pattern.length();
 
    
    for (string word : dict) {
 
        if (check(pattern, word))
            cout << word << " ";
    }
}
 

int main()
{
    unordered_set<string> dict = { "abb", "abc", "xyz", "xyy" };
    string pattern = "foo";
 
    findMatchedWords(dict, pattern);
 
    return 0;
}
