#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int l;

bool be(int left, int right) {
	return left <= l && l < right;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> l;

	if (be(380, 425)) {
		cout << "Violet";
	}
	else if (be(425, 450)) {
		cout << "Indigo";
	}
	else if (be(450, 495)) {
		cout << "Blue";
	}
	else if (be(495, 570)) {
		cout << "Green";
	}
	else if (be(570, 590)) {
		cout << "Yellow";
	}
	else if (be(590, 620)) {
		cout << "Orange";
	}
	else {
		cout << "Red";
	}

	return 0;
}