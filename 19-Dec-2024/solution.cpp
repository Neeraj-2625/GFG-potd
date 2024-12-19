#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n = arr.size();
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]] = 1;
        }
        
        int i=1;
        
        while(true){
            if(mp.find(i)==mp.end()){
                k--;
                if(k==0)
                  return i;
                i++;  
            }else{
                i++;
            }
        }
        
        return -1;
    }
};