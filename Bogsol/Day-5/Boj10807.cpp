#include <iostream>
using namespace std;
int main() {
	int N, V;
	int arr[101];
	int ars = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		}
	cin >> V;
	for (int i = 0; i < N; i++) {
		if (arr[i] == V) {
			ars++;
		}
	}
	cout << ars << endl;
	return 0;
}