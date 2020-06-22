#include <iostream>
#include <vector>

using namespace std;

vector<int> vc;

int fibonacci(int num)
{
	if (num == 0)
	{
		return 0;
	}
	
	if (num == 1)
	{
		return 1;
	}
	
	/* Dynamic Programming apply part */
	if (vc[num] != -1)
	{
		return vc[num];
	}

	vc[num] = fibonacci(num - 1) + fibonacci(num - 2);
	cout << num << "의 값" << vc[num] << endl;
	return vc[num];
}

int main()
{
	int value;
	cout << "피보나치 수열에 할당할 값 입력:";
	cin >> value;

	/* +1의 이유는 개행문자로 인함. 각각의 피보나치 수치를 -1로 초기화 */
	vc.resize(value + 1, -1);

	cout << "피보나치 수열 값의 합:" << fibonacci(value) << endl;
	system("pause");
}