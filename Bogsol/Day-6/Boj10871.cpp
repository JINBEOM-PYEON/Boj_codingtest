#include <iostream>
using namespace std;
int main() {
	int N, x;
	int arr[100000];
	cin >> N >> x;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] < x) {		
			cout << arr[i] << " ";
		}
	}
	return 0;
}
/* 