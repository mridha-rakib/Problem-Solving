#include <bits/stdc++.h>
using namespace std;
vector<int> subset;
vector<vector<int> > res;
void subsetsUtil(vector<int>& arr, int index)
{
	res.push_back(subset);
	for (int i = index; i < arr.size(); i++) {
        cout << i << endl;
		subset.push_back(arr[i]);
		subsetsUtil(arr, i + 1);
		subset.pop_back();
	}

	return;
}

vector<vector<int> > subsets(vector<int>& arr)
{
	int index = 0;
	subsetsUtil(arr,index);

	return res;
}
int main()
{
	vector<int> array = { 1, 2, 3 };
	vector<vector<int> > res = subsets(array);

	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
	return 0;
}

