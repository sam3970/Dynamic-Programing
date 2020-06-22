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
	cout << num << "�� ��" << vc[num] << endl;
	return vc[num];
}

int main()
{
	int value;
	cout << "�Ǻ���ġ ������ �Ҵ��� �� �Է�:";
	cin >> value;

	/* +1�� ������ ���๮�ڷ� ����. ������ �Ǻ���ġ ��ġ�� -1�� �ʱ�ȭ */
	vc.resize(value + 1, -1);

	cout << "�Ǻ���ġ ���� ���� ��:" << fibonacci(value) << endl;
	system("pause");
}