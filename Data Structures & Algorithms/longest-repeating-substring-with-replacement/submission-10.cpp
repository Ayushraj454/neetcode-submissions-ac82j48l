class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int ans = 0 ;
        int n = s.size();

        for(char c = 'A' ; c <= 'Z' ; c ++)
        {
            int i = 0 ;
            int j = 0 ;
            int replaced = 0 ;

            while(j < n)
            {
                // If the current character matches our target character,
                // we don't need to replace it, so expand the window

                if(s[j] == c)
                {
                    j ++ ;
                }

                // If the current character doesn't match, but we still
                // have replacements available, replace it and expand


                else if(replaced < k)
                {
                    j ++ ;
                    replaced ++ ;
                }

                // If we have already used all k replacements and the
                // character at the left boundary matches our target,
                // shrink the window by moving i forward

                else if(s[i] == c)
                {
                    i ++ ;
                }

                else {
                    i ++ ;
                    replaced -- ;
                }

                ans = max(ans,j-i);
            }
        }

        return ans ;
    }
};
