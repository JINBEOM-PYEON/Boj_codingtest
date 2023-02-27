#include <iostream>
using namespace std;
int main(){
	int H, M;
	cin >> H >> M;
	if(H>=1 && M<45){
		cout << H-1<<" "<< (M+15) << endl;
	}
	else if(H==0 && M<45){
		cout <<23<<" "<< (M+15) << endl;
	}
	else{
		cout << H <<" "<< M-45 << endl;
	}
	return 0;
}
/*#include <iostream>
using namespace std;
int main(void){
    int a, b;
    cin >> a >> b;
    if(b < 45){
        b += 15;
        if(--a < 0)
        	a = 23;
    }
    else
        b -= 45;

    cout << a << " "<< b;
}