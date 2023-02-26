#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	cout << (B%10)*A << endl;
	cout << ((B%100)/10)*A << endl;
	cout << (B/100)*A << endl;
	cout << A*B << endl;
	return 0;
}

/*
#include <iostream>
#include <cstdlib>  // atoi 함수가 선언된 헤더파일
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int A;
    char B[4];
 
    cin >> A;
    cin >> B;
 
    cout << A * (B[2] - '0') << "\n"; // - '0'은 문자를 상수 그대로로 바꿔준다
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * atoi(B) << "\n"; // atoi 는 입력된 문자열을 int형으로 바꿔준다
    return 0;
} 

#include <iostream>
#include <string>   // string, stoi()을 쓰기 위한 헤더파일
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int A;
    string B;
 
    cin >> A;
    cin >> B;
 
    cout << A * (B[2] - '0') << "\n";
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * stoi(B) << "\n";    // string -> int(10진수) 로 변환
    return 0;
}

*/
