#include <iostream>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);	// C, C++ 동기화 해제
cin.tie(NULL);	// 입력과 출력을 분리
	
	int T, A, B;
	cin >> T;
	
	
	for(int i=1; i<=T; i++){
		cin >> A >> B;
		cout << A + B << "/n";
	}
	return 0;
}