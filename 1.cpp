#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <utility>
#include <queue>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#define PI 3.14
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=1,temp=1;
    char last=s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]==last){
            temp++;   
            ans=max(temp,ans);
        }
        else{
            temp=1;
            last=s[i];
        }
    }
    cout<<ans<<"\n";
}