#include<iostream>
#include<cmath>

using namespace std;

void main() {
	int nInput;
	cout << "0���� 100,00������ ������ �Է��ϼ���: ";
	cin >> nInput;

	int nNumbers[5] = { 0,0,0,0,0 };

	int nIndex = 0;
	for (int i = sizeof(nNumbers) / sizeof(nNumbers[0]); i > 0; i--) {
		int nValue = nInput % (int)(pow(10, i)) / (int)(pow(10, i - 1));
		if (nValue == 0) continue;

		nNumbers[nIndex] = nValue;
		nIndex++;

	}
	int nSum = 0;
	for (int i = 0; i < nIndex; i++) {
		if (nNumbers[i] == 0) continue;

		nSum += nNumbers[i];
		cout << nNumbers[i];
		cout << (i == (nIndex - 1) ? "=" : "+");
	}
	cout << nSum << endl;
}