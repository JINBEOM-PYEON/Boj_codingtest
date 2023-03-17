#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int N, M, a, b, temp;
	cin >> N >> M;
		for (int i = 0; i < N; i++){
			arr[i]= i+1;
		}
		for (int i = 0; i < M; i++){
			cin >> a >> b;
			temp = arr[a-1];
			arr[a-1] = arr[b-1];
			arr[b-1] = temp;
		}
		for (int i = 0; i < N; i++){
			cout << arr[i] << " ";
		}
}
