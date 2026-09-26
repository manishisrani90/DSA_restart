// trying bruteforce of plaindromic strings leetcode

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "namrata";
    int count = 0;
    int i = 0;
    vector<char> new_string;

    while (i < s.length())
    {
        new_string.push_back(s[i]);
        i++;
    }
    for(int k=0;k<s.length();k++){
        cout<<new_string[k]<<" ";
    }
    return 0;
    count =count+new_string.length();
    int c=0;
    int d=s.length()-1;
int mid=c+(d-c)/2;
c=mid;
d=mid;
// while(c!=0 && d!=s.length()-1){
//     c--;
//     d++;
//     if(s[c]==s[d]){
        
//     }
// }
  //confused and stopped here!!
}