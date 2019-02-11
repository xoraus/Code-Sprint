// longest substring using 9 lines of code

int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }

// Simple two pointers sollution beats 98% cpp

int lengthOfLongestSubstring(string s) {
        int left = 0, a[26] = {0};
        int right = 0, ans = 1;
        for(int i = 0 ; i < 26; i++)
                a[i] = 0;
        for(;right < s.length(); right++){
                if(a[s[right] - 'a']){
                        while(s[left] != s[right]){
                                a[s[left]] = 0;
                                left++;
                        }
                        left++;
                }
                a[s[right] - 'a'] = 1;
                ans = max(ans, right-left + 1);
        }
        return ans;
}

// python

class Solution:
    def lengthOfLongestSubstring(self, s: 'str') -> 'int':
        max_len = 0
        s1 = ''
        for i_s in s:
            if i_s in s1:
                if len(s1) > max_len:
                    max_len = len(s1)

                s1 = s1[s1.index(i_s)+1:]+i_s
            else:
                s1 += i_s

        if len(s1) > max_len:
            max_len = len(s1)
        return max_len