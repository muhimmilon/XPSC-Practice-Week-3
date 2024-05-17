#include <bits/stdc++.h>
using namespace std;

string enc(char type, const vector<string>& values)
{
  stringstream nt;
  nt << "{" << type << ":";
  for (size_t i = 0; i < values.size(); ++i)
  {
    if (i > 0) nt << ",";
    nt << values[i];
  }
  nt << "}";
  return nt.str();
}

string sum(int N, const vector<double>& values, int start = 1)
{
  if (N <= 2000)
  {
    vector<string> indices;
    for (int i = start; i <= N; ++i)
    {
      indices.push_back(to_string(i));
    }
    return enc('d', indices);
  }

  int ch_size = 1000;
  int end = min(start + ch_size - 1, N);
  vector<string> ch_indices;
  for (int i = start; i <= end; ++i)
  {
    ch_indices.push_back(to_string(i));
  }
  string ch_result = enc('h', ch_indices);

  return enc('s', vector<string>{sum(N - end, values, end + 1), ch_result});
}

int main()
{
  int N;
  cin >> N;
  vector<double> val(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> val[i];
  }

  string result = sum(N, val);
  cout << result << endl;
  return 0;
}
