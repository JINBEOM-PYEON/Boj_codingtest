#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N, M;
	int a, b;
		cin >> N >> M;
	vector<int> v(N);
		for (int i = 0; i < N; i++){
			v[i] = i+1;
		}
		for (int i = 0; i < M; i++){
			cin >> a >> b;
			for (int j = 0; j < (b-a+1)/2; j++){
			swap(v[a+j-1], v[b-j-1]);
			}
		}
		for (int i = 0; i < N; i++){
			cout << v[i] << " ";
			}
	return 0;
}