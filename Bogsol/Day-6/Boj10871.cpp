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
/* int main() {
 
	int N;
	int X;
	cin >> N >> X;	// N과 X 입력
 
	int val;
	for(int i = 0; i < N; i++) {
		// 입력을 받은 값이 X보다 작을 경우 출력
		cin >> val;
		if(val < X) {
			cout << val;
		}
	}
 
}