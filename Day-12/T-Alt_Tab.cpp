#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<string> program;
    unordered_set<string> asr;

    for (int i = 0; i < N; ++i)
    {
        string pr;
        cin >> pr;

        if (asr.find(pr) != asr.end())
        {
            program.erase(remove(program.begin(), program.end(), pr), program.end());
        }

        program.push_back(pr);
        asr.insert(pr);
    }

    for (auto ntr = program.rbegin(); ntr != program.rend(); ++ntr)
    {
        cout << ntr->substr(ntr->size() - 2);
    }
    cout << endl;

    return 0;
}
