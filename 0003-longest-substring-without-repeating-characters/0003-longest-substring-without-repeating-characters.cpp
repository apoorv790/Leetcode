class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//        int len=0,mx=0;
//         while(j!=i)
//             int j=i+1;
//             if(s[j]!=s[i]) {
//                 len++;
//                 j++;
//             }
//             else if(s[j]==s[i]){
//                 len=0;
//             }            
//             mx=max(mx,len);
            
//         }
//         return mx;
        int n=s.size();
        int maxi=0;
        unordered_map<char,int> mp;
        int l=0;
        for(int r=0; r<n;r++){
            if(mp.find(s[r])!=mp.end()){
                l=max(l,mp[s[r]]+1);
            }
            
            maxi=max(maxi,r-l+1);
            mp[s[r]]=r;
        }
        return maxi;
    }
};