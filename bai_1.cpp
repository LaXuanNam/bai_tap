#include<iostream>
using namespace std;
void nhap(int a[], int &n) {
	cout << "nhap so phan tu : " ;
	cin >> n;
	for (int i=0 ; i<n ; i++) {
		cout << "a[" << i << "] = " ;
		cin >> a[i] ;
	}
}
void sapxeptang(int a[], int n) {
	int tg;
	for(int i=0 ; i<n-1 ; i++) {
		for(int j = i + 1 ; j<n ; j++) {
			if(a[i] > a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}	
}
void Xuat(int a[], int n) {
	for(int i=0 ; i<n ; i++) {
			cout << "a[" << i <<"] = " << a[i] << endl;
	} 
}

void chan(int a[], int &n) {	
	for(int i=0 ; i<n ; i++) {
		if(a[i]%2==0) {
			cout << "a[" << i <<"] = " << a[i] << endl;
		}
	}
}
void sapxepgiam(int a[], int n)
{
int tg;
	for(int i=0 ; i<n-1 ; i++) {
		for(int j=i+1 ; j<n ; j++) {
			if(a[i]<a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}	
}
void le(int a[], int n) {	
	for(int i=0 ; i<n ; i++) {	
		if(a[i]%2!=0) {
			cout << "a[" << i <<"] = " << a[i] << endl;
		}
	}
}
void xoa(int a[],int &n)
{
	int x;
	cout << " nhap vao so can xoa : " ;
	cin >> x;
	int dem = 0, vitri;
	for(int i=0 ; i<n ; i++)
	{
		if(x==a[i])
		{
			dem++;
			for (int j=i; j<n; j++)
			{
				a[j]= a[j+1];
			}
			n--;
			i--;
		}	
	}
	if (dem==0)
	{
		cout << "Khong tim thay so can xoa" << endl;
	}
}
int main()
{
	int a[1000];
	int n;
	nhap(a,n);
	sapxeptang(a,n);
	cout << "cac phan tu sau khi sap xep : " << endl;
	Xuat(a,n);
	cout << "sau khi sap xep chan tang dan : " << endl;
	chan(a,n);
	cout << "sau khi sap xep le giam dan : " << endl;
	sapxepgiam(a,n);
	le(a,n);
	xoa(a,n);
	cout << "mang sau khi xoa la : " << endl ;
	Xuat(a,n);
}