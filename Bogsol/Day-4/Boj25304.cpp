#include <iostream>
using namespace std;
int main(){
	int X;
	int N, A, B;
	int sum = 0;
	cin >> X;
	cin >> N;
for (int i = 1; i <= N; i++){
	cin >> A >> B;
	sum = sum + (A*B);
	}
		if(sum == X)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
			
	return 0;	
}
/*
#include <iostream>

using namespace std;

int main() {

    int x, t, a, b;

    cin >> x;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        x -= a * b;
    }

    if (x == 0) cout << "Yes";
    else cout << "No";

    

    return 0;
}