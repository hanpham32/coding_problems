#include <iostream>
#include <string>

using namespace std;

int main() {
	string  n1, n2;
	cin >> n1 >> n2;
	string ans = "";
	for (int i=0; i<n1.length(); i++) {
		if (n1[i] != n2[i]) {
			ans += "1";
		} else {
			ans += "0";
		}
	}
	cout << ans << "\n";
	return 0;
}
