#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

using vt = vector<tuple<int, int, int, int>>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto vec = vt(n);
	for (auto i = 0; i < n; ++i) {
		int s, c, l;
		cin >> s >> c >> l;

		vec[i] = { -s, c, l, i + 1 };
	}

	sort(vec.begin(), vec.end());

	cout << get<3>(vec[0]);

	return 0;
}