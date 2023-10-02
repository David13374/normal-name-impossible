#include<iostream>
#include<vector>
#include<string>
using namespace std;
class adun
{
protected:
	string s;
public:
	adun(string s = 0)
	{
		this->s = s;
	}
	/*void revers()
	{
		vector<int> v1;
		for (int i = v.size() - 1; i >= 0; i--)
			v1.push_back(v[i]);
		s = v1;
	}
	adun operator+(const adun& obji)
	{
		adun res;
		adun obj;
		obj = obji;
		if (v.size() >= obj.v.size())
		{
#define objsize obj.v.size()
			for (int i = 0; i < objsize; i++)
			{
				res.v.push_back(v[i] + obj.v[i]);
				cout << res.v[i] << " ";
			}
			for (int i = objsize; i < v.size(); i++)
			{
				res.v.push_back(v[i]);
			}
		}
		else
		{
			
			for (int i = 0; i < v.size(); i++)
			{
				res.v.push_back(v[i] + obj.v[i]);
				cout << res.v[i] << " ";
			}
			for (int i = v.size(); i < objsize; i++)
			{
				res.v.push_back(obj.v[i]);
			}
		}
		for (int i = res.v.size() - 1; i >= 0; i--)
		{
			if (i == 0)
			{
				if (res.v[i] >= 10)
				{
					res.v[i] -= 10;
					res.revers();
					res.v.push_back(1);
					res.revers();
				}
			}
			if (res.v[i] >= 10)
				res.v[i - 1]++, res.v[i] -= 10;
		}
		for (int i = 0; i < res.v.size(); i++)
			cout << res.v[i] << " ";
		return res;
	}*/
	friend ostream& operator<<(ostream& os, const adun& obj) {
		os << obj.s;
		return os;
	}
	bool isSmaller(string str1, string str2)
	{
		int n1 = str1.length(), n2 = str2.length();

		if (n1 < n2)
			return true;
		if (n2 < n1)
			return false;

		for (int i = 0; i < n1; i++) {
			if (str1[i] < str2[i])
				return true;
			else if (str1[i] > str2[i])
				return false;
		}
		return false;
	}
	adun operator%(const adun& obji)
	{
		adun obj = obji;
		adun obj2 = s;
		adun d = obj2 - obj;
		while (d.s[0] != '-')
		{
			obj2 = obj2 - obj;
			d = d - obj;
		}
		return obj2;
	}
	string transf(int nr1)
	{
		return to_string(nr1);
	}
	adun operator/(const adun& obji)
	{
		adun obj = obji;
		adun obj2 = s;
		adun d = obj2 - obj;
		int nr1 = 0;
		while (d.s[0] != '-')
		{
			obj2 = obj2 - obj;
			d = d - obj;
			nr1++;
		}
		return transf(nr1);
	}
	adun operator-(const adun& obj)
	{
		string str1 = s;
		string str2 = obj.s;
		bool ok = 1;
		if (isSmaller(str1, str2))
			swap(str1, str2), ok = 0;

		string str = "";

		int n1 = str1.length(), n2 = str2.length();
		int diff = n1 - n2;

		int carry = 0;

		for (int i = n2 - 1; i >= 0; i--) {
			int sub = ((str1[i + diff] - '0') - (str2[i] - '0') - carry);
			if (sub < 0) {
				sub = sub + 10;
				carry = 1;
			}
			else
				carry = 0;

			str.push_back(sub + '0');
		}

		for (int i = n1 - n2 - 1; i >= 0; i--) {
			if (str1[i] == '0' and carry) {
				str.push_back('9');
				continue;
			}
			int sub = ((str1[i] - '0') - carry);
			if (i > 0 or sub > 0)
				str.push_back(sub + '0');
			carry = 0;
		}
		if (ok == 0)
			str.push_back('-');
		reverse(str.begin(), str.end());

		return str;
	}
	/*adun operator-(const adun& obji)
	{
		adun res, obj = obji;
		revers();
		obj.revers();
		bool ok = 0;
		while (obj.v.size() > v.size())
			v.push_back(0);
		while (v.size() > obj.v.size())
			obj.v.push_back(0);
		for (int i = 0; i < v.size(); i++)
		{
			v[i] -= obj.v[i];
		}
		for (int i = 0; i < v.size() - 1; i++)
		{
			if (v[i] < obj.v[i])
			{
				v[i + 1]--;
				v[i] += 10;
			}
			res.v.push_back(v[i] - obj.v[i]);
		}
		res.revers();
		cout << res;
		return res;
	}*/
};