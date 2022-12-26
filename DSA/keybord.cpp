#include<iostream>
#include<stdio.h>
#include<string.h>
 
using namespace std;

class Solution {
public:
    Solution(){
        hash.resize(26);
        vector<string> key{"qwertyuiop","asdfghjkl","zxcvbnm"};
        for(int i=0;i<key.size();i++){
            for(auto j: key[i])
                hash[j-'a']=i;
        } 
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> re;
        for(auto i : words){
            if(same(i)&&i.size())
                re.push_back(i);
        }
        return re;
    }
    bool same(string str){
        if(!str.size()) return true;
        int cur = hash[tolower(str[0])-'a'];
        for(int i=1;i<str.size();i++){
            if(hash[tolower(str[i])-'a']!=cur)
                return false;
        }
        return true;
    }
private:
    vector<int> hash;
};