#include <iostream>
using namespace std;
int main(){
	int arr[101];
	int N, M;
	cin >> N >> M;
		while(M--){
			int i, j, k;
			cin >> i >> j >> k;
			for(int o = i; o < j; o++){
				k = arr[o];
			}
		}
			for(int i = 1; i <= N; i++){
				cout << arr[i] << " ";
			}
	return 0;
}