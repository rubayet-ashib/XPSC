// User function template for C++

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int l = 0, r = 0, ans = -1;
        map<char, int> m;

        while (r < s.size())
        {
            m[s[r]]++;

            if (m.size() == k)
                ans = max(ans, r - l + 1);

            else if (m.size() > k)
            {
                while (m.size() > k)
                {
                    m[s[l]]--;

                    if (m[s[l]] == 0)
                    {
                        m.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }

        return ans;
    }
};