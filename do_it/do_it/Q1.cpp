#include <iostream>
#include <vector>

using namespace std;
// N���� ���ڰ� ���� ���� ���� �ִ�. �� ���ڸ� ��� ���� ����ϴ� ���α׷� �ۼ�

int main(void) {

	int n = 0;
	string numbers;

	cin >> n; // 6
	cin >> numbers; // 2468107

	int sum = 0;
	for (int i = 0; i < numbers.length(); i++) {
		sum += numbers[i] - '0';
		// 0 = 0 + (50 - 48) 2
		// 2 = 2 + (52 - 48) 4
		// 6 = 6 + (54 - 48) 6
		// 12 = 12 + (56 - 48) 8
		// 20 = 20 + (49 - 48) 1
		// 21 = 21 + (48 - 48) 0
		// 21 = 21 + (55 - 48) 7
		// sum = 28
	}
	cout << sum << '\n';

	

	return 0;
}