#include<iostream>
#include<algorithm>
#include<string>
 
using namespace std;
//t = x + t - t;
//a = y + a - a;
//y = y + t - y;
//x = x + a - x;
 
int main()
{
	int t = 0;
	int a = 0;
	string s;
	cin >> s;
	int n = s.size();// 2+1+3
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '+')
			{
				if (s[i - 1] > s[i + 1])
				{
					t = s[i - 1];
					a = s[i + 1];
					s[i + 1] = t;
					s[i - 1] = a;
				}
			}
		}
	}
	cout << s<< endl;
		return 0;
}                   
