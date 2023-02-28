#include <iostream>
using namespace std;
int main() {
	int T, A, B;
	int num = 0;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> A >> B;
		cout << "Case #" << i << ": " << A + B << endl;
	}
	return 0;
}