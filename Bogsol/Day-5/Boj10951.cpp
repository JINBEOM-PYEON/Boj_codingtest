#include <iostream> // cin이 조건식에 있으면 bool 값이 반환되도록 오버로딩 된 방식을 활용
using namespace std;
 
int main(int argc, const char *argv[]) {
 
	int a, b;
	while (cin >> a >> b) {
		cout << a + b << "\n";
	}
 
	return 0;
}

/*#include <iostream>
using namespace std;
 
int main(int argc, const char *argv[]) {
 
	int a, b;
	while (!(cin >> a >> b).eof()) {	// 혹은 eof() 대신 fail()을 사용해도 된다.
		cout << a + b << "\n";
	}
 
	return 0;
} */