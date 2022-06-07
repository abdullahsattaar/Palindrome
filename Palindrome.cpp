#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(char data[])
{
	int len = strlen(data);
	int st = 0;
	int end = len - 1;
	while (st < end)
	{
		if (data[st] != data[end])
			return false;
		st++;
		end--;

	}
	return true;
}
int main()
{
	char data[10];
	cout << "Enter what you want" << endl;
	cin >> data;
	int z = palindrome(data);

	if (z == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	system("pause");
	return 0;

}