///#1159

#include<iostream>
#include<string>
using namespace std;

int main() {
	string name;
	int n; cin >> n;
	int a[26] = {};
	for (int i = 0; i < n; i++) {
		cin >> name;
		int num_of_alph=*name.begin()-'a';
		a[num_of_alph]++;
	}
	bool ok = false;
	for (int i = 0; i < 26; i++) {
		if (a[i] > 4) {
			cout << (char)(i + 'a');
			ok = true;
		}
	}
	if (ok == false)cout << "PREDAJA";
	return 0;
}