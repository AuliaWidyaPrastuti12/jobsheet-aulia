#include <iostream>
#include <cstdlib>
using namespace std;

main (){
	int nim1[3][3];
	int nim2[3][3];
	int jml [2][2];
	int x, y;
	for (x = 0; x < 3; x++){
	for (y = 0; y < 2; y++){
	cout << "Masukkan index " << x << "," << y << " = ";
	cin >> nim1[x][y];
	}
	}
	for (x = 0; x < 3; x++){
	for (y = 0; y < 2; y++){
	cout << "Masukkan index " << x << "," << y << " = ";
	cin >> nim2[x][y];
		}
	}
	for (x = 0; x < 3; x++){
	for (y = 0; y < 2; y++){
	jml [x][y] = nim1[x][y]-nim2[x][y];
	cout << jml [x][y] <<" ";
	}
	cout << endl;
	}
}




