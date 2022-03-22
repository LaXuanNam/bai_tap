#include<iostream>
using namespace std;

int main() {
	string a;
	cout << "nhap ho va ten: "; getline(cin, a);
	cout << "ho cua nguoi do: ";
	for(int i = 0; i < a.length(); i++) {
		cout << a[i];
		if(a[i] == ' ') {
			break;
		}
	}
	int b;
	for(int i = a.length() - 1; i >= 0; i--) {
		if(a[i] == ' ') {
			b = i;
			break;
		}
	}
	cout << "\nten cua nguoi do: ";
	for(int i = b + 1; i < a.length(); i++) {
		cout << a[i];
	}
}