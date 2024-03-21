// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int pat_size = pat.size(), txt_size = txt.size(), cnt = 0;

        if (pat_size > txt_size)
            return 0;

        vector<int> pat_freq(26, 0);
        vector<int> txt_freq(26, 0);

        for (int i = 0; i < pat_size; i++)
        {
            pat_freq[pat[i] - 'a']++;
            txt_freq[txt[i] - 'a']++;
        }

        if (pat_freq == txt_freq)
            cnt++;

        for (int i = pat_size; i < txt_size; i++)
        {
            txt_freq[txt[i] - 'a']++;
            txt_freq[txt[i - pat_size] - 'a']--;

            if (pat_freq == txt_freq)
                cnt++;
        }

        return cnt;
    }
};