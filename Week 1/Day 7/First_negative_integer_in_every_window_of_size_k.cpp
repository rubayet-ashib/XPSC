vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    queue<long long> q;
    vector<long long> ans;
    long long i = 0, j = 0;

    while (j < N)
    {
        if (A[j] < 0)
            q.push(A[j]);

        if (j - i + 1 == K)
        {
            if (q.size() == 0)
                ans.push_back(0);
            else

                ans.push_back(q.front());

            if (A[i] == q.front())
                q.pop();

            i++;
        }

        j++;
    }

    return ans;
}