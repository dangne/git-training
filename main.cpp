#include <bits/stdc++.h>
using namespace std;

void Mu_n(){
    int a, n;
    cout << "Input a, n"; cin >> a > n;
    cout << pow(a,n) << endl;
}
void Cos_Functions(){
	float X;
    cout << "Input X = "; cin >> X;
    else cout << cos(X);
}
void multiply(){
	float a, b;
    cout << "Input 2 number" << endl;
    cin >> a >> b;
    cout << a * b;
}
void Subtract(){
	float a, b;
	cout << "Input 2 numbers:";
	cin >> a >> b;
	cout << endl << "Subtract 2 number, ans= " << a - b << endl;
}
void sum(){
    int a,b;
    cout<<"nhap a and b"<<endl;
    cin>>a>>b;
    cout<<"sum is "<<a+b;
}
int main(){
    int cmd;
    cout << "=== Main menu ===" << endl;
    cout << "1. Cong" << endl;
    cout << "2. Tru" << endl;
    cout << "3. Nhan" << endl;
    cout << "4. Chia" << endl;
    cout << "5. Mu n" << endl;
    cout << "6. Sin" << endl;
    cout << "7. Cos" << endl;
    cout << "8. Tan" << endl;
    cout << "9. Cotan" << endl << endl;

    cout << "Input your choice: ";
    cin >> cmd;

    switch (cmd){
        case 1:sum();
        case 2:Subtract();
        case 3:multiply();
        case 4:;
        case 5:Mu_n();
        case 6:;
        case 7:Cos_Function();
        case 8:;
        case 9:;
        default: cout << "Invalid input" << endl;
    }
    return 0;
}
