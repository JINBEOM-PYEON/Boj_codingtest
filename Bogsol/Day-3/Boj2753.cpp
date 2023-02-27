#include <iostream>
using namespace std;
int main(){
	int A;
	cin >> A;
	if((A%4==0)&&!(A%100==0)){
		cout << "1" << endl;
	}
	else if(A%400==0){
		cout << "1" << endl;
	}
	else{
		cout << "0" << endl;
	}
	return 0;
	}
/*#include <iostream>
using namespace std;
int main(void){
    int a;
    cin>>a;
    if(a % 4 == 0)
        if(a % 100 != 0 || a % 400 == 0)
            cout<<1;
        else
            cout<<0;
    else
        cout << 0;
}