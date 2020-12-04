#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	int i = 0;	
	bool flag = false; 
	do
	{
		int a = static_cast<int>(s1[i]);
		int b = static_cast<int>(s2[i]);
		if (a > b)
		{
			cout << "1" << endl;
			flag = true;
			break;
		} else if  (b > a)
		{
			cout << "-1" << endl;
			flag = true;
			break;
		}
		i++;
	}while (i < s1.size());
	if (!flag)
	{
		cout << "0" << endl;
	}
	
}

