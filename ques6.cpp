#include<iostream>
using namespace std;
int i;
s = input() + " "
i = 0
while i < len(s):
    while i < len(s) and not s[i].isdigit():
        i += 1
    j = i
    if j+1 <= len(s):
        if s[j] == s[j + 1]:
            while s[j] == s[j + 1]:
                j += 1
            break
        else:
            i += 1
if s[i:j+1] != "":
    print(s[i:j + 1])
else:
    print("No rep digits")
