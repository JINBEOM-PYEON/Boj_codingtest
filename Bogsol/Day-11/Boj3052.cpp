#include <iostream>
using namespace std;
int main(){
	int arr[42] = {};
	int a;
	int b = 0;
		for (int i = 0; i < 10; i++){
			cin >> a;
			arr[a%42]++;
		}
		for (int i = 0; i < 42; i++){
			if (arr[i] != 0){
				b++;
			}
		}
	cout << b << endl;
	return 0;
}