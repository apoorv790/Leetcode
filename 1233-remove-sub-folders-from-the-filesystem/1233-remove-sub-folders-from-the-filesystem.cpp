class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector < string > res;
        sort(folder.begin(),folder.end());
        int n = folder.size();
          for(int i = 0; i < n;)
          { 
            int len = folder[i].length() + 1;
            int j = i + 1;
            while(j < n)
            {
                if(folder[j].substr(0, len) == (folder[i] + "/"))
                    j++;
                else 
                    break;
            }
            res.push_back(folder[i]);
            i = j;
          }

        return res;
    }
};