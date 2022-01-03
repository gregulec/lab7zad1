#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	int n, d;
	cout << "Podaj rozmair n ";
	cin >> n;
	for (int i = 0; i < n; i++){
		v.push_back(rand() % 11);
		cout << v[i] << " ";
	}
	cout << endl << "Podaj liczbe do usuniecia ";
	cin >> d;
	for (auto it = v.begin(); it != v.end(); it++){
		if (*it == d){
			it = v.erase(it);
			it--;
		}
	}
	for (auto it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	for (auto it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
}