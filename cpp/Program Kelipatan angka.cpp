#include <iostream>

using namespace std;

int main(){
	cout << "PROGRAM KELIPATAN BILANGAN" << endl;
	
	int awal,akhir;
	cout << "Masukkan Bilangan Awal :" << endl;
	cin >> awal;
	cout << "Masukkan Kelipatan berapa :" << endl;
	cin >> akhir;
	
	int bentukkelipatan;
	for (int i = 1; i <= akhir; i++){
		int kelipatan = awal * i;
 		cout << "kelipatan dari " << awal << " adalah : " << kelipatan << endl;
	}
	
	return 0;
}
