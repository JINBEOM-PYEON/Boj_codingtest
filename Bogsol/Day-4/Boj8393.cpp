#include <iostream>
using namespace std;
int main(){
	int N;
	int sum = 0;
	cin >> N;
	for(int i=0; i<=N; i++){
		sum = sum + i;
	}
		cout << sum << endl;
	return 0;
}
/*
#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
int N;
cin >> N;
cout << N * (N + 1) / 2;
return 0;
}