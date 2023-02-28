#include <iostream>
using namespace std;
int main(){
	int A, B, C;
	cin >> A >> B >> C;
	
	if(A!=B && B!=C && A!=C)
	{
		int Max;
		if(A>B)
			if(A>C)
				Max = A;
			else
				Max = C;
		else if(B>A)
			if(B>C)
				Max = B;
			else
				Max = C;
		else
				Max = A;
		
		cout << Max*100 << endl;
	}
	
	else if(A==B||A==C){
		if(B!=C)
			cout << 1000+A*100 << endl;
		else
			cout << 10000+A*1000 << endl;}
	else if(B==A||B==C){
		if(A!=C)
			cout << 1000+B*100 << endl;
		else
			cout << 10000+B*1000 << endl;
	}
	return 0;
}
/*
#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[]) {
 
	ios_base::sync_with_stdio(false);
 
	int a, b, c;
	cin >> a >> b >> c;
	// 만약 모든 변수가 다른 경우
	if (a != b && b != c && a != c) {
		int max;
		// 만약 a > b 라면
		if (a > b) {
			// c > a > b 라면
			if (c > a) {
				max = c;
			}
			// a > (b, c)
			else {
				max = a;
			}
		}
		// b > a 라면
		else {
			// c > b > a 라면
			if (c > b) {
				max = c;
			}
			// b > (a, c)
			else {
				max = b;
			}
		}
		cout << max * 100;
	}
	// 적어도 한 쌍 이상의 서로 같은 변수가 존재할 경우
	else {
		// 3개의 변수가 모두 같은 경우
		if (a == b && a == c) {
			cout << 10000 + a * 1000;
		} else {
			// a가 b혹은 c랑만 같은 경우
			if (a == b || a == c) {
				cout << 1000 + a * 100;
			}
			// b가 c랑 같은 경우
			else {
				cout << 1000 + b * 100;
			}
		}
	}
	return 0;
}