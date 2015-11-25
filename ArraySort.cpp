#include <iostream>
using namespace std;

int main(){
	int i, ind, min, a[10];

	for(i=0; i<5; i++){
		cin >> a[i];
	}

	min = a[i];
	ind = 5;

	for(i=0; i<5; i++){
		if (a[i] < min){
			ind = i+1;
			min = a[i];
		}
	}

	cout << "Minimum is : " << min << endl <<"Index Location is : " << ind <<endl;
	return 0;
}
