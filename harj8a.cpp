#include <iostream>
using namespace std;
int main() {
	int luku1, luku2, luku3, pienin, suurin;

	cout << "Anna kolme kokonaislukua"; 
	cin >> luku1 >> luku2 >> luku3; 

	suurin = luku1; 

	if (luku2 > suurin) 
		suurin = luku2;

	if (luku3 > suurin) 
		suurin = luku3;

	pienin = luku1; 

	if (luku2 < pienin)
		pienin = luku2;

	if (luku3 < pienin)
		pienin = luku3;

	int keski;
	keski = luku1 + luku2 + luku3;
	keski = keski / 3;
	
	cout << "\n" << pienin;
	cout << "\n" << keski;
	cout << "\n" << suurin << "\n";

	return 0;
}



