#include<vector>
#include<iostream>
using namespace std;
class vect
{
protected:
	vector<int> v;
public:
	vect(vector<int> v = { })
	{
		this->v = v;
	}
	int size()
	{
		return v.size();
	}
	void pushb(int nr = 0)
	{
		v.push_back(nr);
	}
	int min(int a, int b)
	{
		return a < b;
	}
	vect operator+(vect const& obj)
	{
		vect res;
		int size1 = v.size(), size2 = obj.v.size();
		if (size1 < size2)
		{
			for (int i = 0; i < size1; i++)
			{
				res.pushb(v[i] + obj.v[i]);
			}
			for (int i = size1; i < size2; i++)
				res.pushb(obj.v[i]);
		}
		else
		{
			for (int i = 0; i < size2; i++)
			{
				res.pushb(v[i] + obj.v[i]);
			}
			for (int i = size2; i < size1; i++)
				res.pushb(obj.v[i]);
		}
		return res;
	}
	vect operator*(vect const& obj)
	{
		vect res;
		int size1 = v.size(), size2 = obj.v.size();
		if (size1 < size2)
		{
			for (int i = 0; i < size1; i++)
			{
				res.pushb(v[i] * obj.v[i]);
			}
			for (int i = size1; i < size2; i++)
				res.pushb(obj.v[i]);
		}
		else
		{
			for (int i = 0; i < size2; i++)
			{
				res.pushb(v[i] * obj.v[i]);
			}
			for (int i = size2; i < size1; i++)
				res.pushb(obj.v[i]);
		}
		return res;
	}
	vect operator-(vect const& obj)
	{
		vect res;
		int size1 = v.size(), size2 = obj.v.size();
		if (size1 < size2)
		{
			for (int i = 0; i < size1; i++)
			{
				res.pushb(v[i] - obj.v[i]);
			}
			for (int i = size1; i < size2; i++)
				res.pushb(obj.v[i]);
		}
		else
		{
			for (int i = 0; i < size2; i++)
			{
				res.pushb(v[i] - obj.v[i]);
			}
			for (int i = size2; i < size1; i++)
				res.pushb(obj.v[i]);
		}
		return res;
	}
	vect operator/(vect const& obj)
	{
		vect res;
		int size1 = v.size(), size2 = obj.v.size();
		if (size1 < size2)
		{
			for (int i = 0; i < size1; i++)
			{
				res.pushb(v[i] / obj.v[i]);
			}
			for (int i = size1; i < size2; i++)
				res.pushb(obj.v[i]);
		}
		else
		{
			for (int i = 0; i < size2; i++)
			{
				res.pushb(v[i] / obj.v[i]);
			}
			for (int i = size2; i < size1; i++)
				res.pushb(obj.v[i]);
		}
		return res;
	}
	vect operator%(vect const& obj)
	{
		vect res;
		int size1 = v.size(), size2 = obj.v.size();
		if (size1 < size2)
		{
			for (int i = 0; i < size1; i++)
			{
				res.pushb(v[i] % obj.v[i]);
			}
			for (int i = size1; i < size2; i++)
				res.pushb(obj.v[i]);
		}
		else
		{
			for (int i = 0; i < size2; i++)
			{
				res.pushb(v[i] % obj.v[i]);
			}
			for (int i = size2; i < size1; i++)
				res.pushb(obj.v[i]);
		}
		return res;
	}
	void update(vector<int> v)
	{
		this->v.clear();
		this->v.resize(v.size());
		for (int i = 0; i < v.size(); i++)
			this->v[i] = v[i];
	}
	void print()
	{
		for (int i = 0; i < v.size(); i++)
			cout << this->v[i] << " ";
		cout << '\n';
	}
	friend ostream& operator<<(ostream& os, const vect& obj) {
		for (int i = 0; i < obj.v.size(); i++)
			os << obj.v[i] << " ";
		return os;
	}
};