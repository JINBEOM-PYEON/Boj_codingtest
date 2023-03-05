#include <iostream>
using namespace std;
int main(){
	int arr;
	int max = -1;
	int maxindex = 0;
	for(int i = 0; i < 9; i++){
		cin >> arr;
			if(max < arr){
				max = arr;
				maxindex = i;
			}
	}
	cout << max << endl;
	cout << maxindex + 1 << endl;
	
	return 0;
}