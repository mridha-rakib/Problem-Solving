#include<bits/stdc++.h>
using namespace std;

vector<int> array_queries(int N, int M, vector<int> A, vector<int> B, int Q, vector<vector<int> > queries) {
    vector<int> results;
    for (auto query : queries) {
        int type = query[0];
        if (type == 1) {
            int i = query[1];
            int x = query[2];
            A[i-1] = x;
        } else if (type == 2) {
            int j = query[1];
            int y = query[2];
            B[j-1] = y;
        } else if (type == 3) {
            int l = query[1];
            int r = query[2];
            int sumA = 0, sumB = 0;
            for (int i = l-1; i <= r-1; i++) {
                sumA += A[i];
                sumB += B[i];
            }
            results.push_back(sumA);
            results.push_back(sumB);
        }
    }
    return results;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
            cin >> A[i_A];
        }
        vector<int> B(M);
        for(int i_B = 0; i_B < M; i_B++)
        {
            cin >> B[i_B];
        }
        int Q;
        cin >> Q;
        vector<vector<int> > queries(Q, vector<int>(3));
        for (int i_queries = 0; i_queries < Q; i_queries++)
        {
            for(int j_queries = 0; j_queries < 3; j_queries++)
            {
                cin >> queries[i_queries][j_queries];
            }
        }

        vector<int> out;
        out = array_queries(N, M, A, B, Q, queries);

