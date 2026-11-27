class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char,int>mp1,mp2 ;

        for(char ch : s1)
        {
            mp2[ch] ++ ;
        }

        int i = 0 ;
        int j = 0 ;
        int k = s1.size();
        int n = s2.size();

        while(j < n)
        {
            mp1[s2[j++]] ++ ;

            if(j-i == k)
            {   
                if(mp1 == mp2)
                return true ;
            

            mp1[s2[i]] -- ;

            if(mp1[s2[i]] == 0)
            mp1.erase(s2[i]);

            i++ ;

            }
        }

        return false ;
    }
};
