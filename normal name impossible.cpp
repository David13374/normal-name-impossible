//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//ifstream fin("volei1.in");
//ofstream fout("volei1.out");
//bool Criteriu(int a, int b)
//{
//	return a < b or a == b;
//}
//int main()
//{
//	int a, b, c, r = 0, d = 0, ok = 1;
//	vector<int> v1, v2, v3;
//	fin >> a;
//	v1.resize(a);
//	for (int i = 0; i < a; i++)
//	{
//		fin >> v1[i];
//	}
//	fin >> b;
//	v2.resize(b);
//	for (int i = 0; i < b; i++)
//	{
//		fin >> v2[i];
//	}
//	c = 0;
//	sort(v2.begin(), v2.end(), Criteriu);
//	for (int i = 0; i < a; i++)
//	{
//		if (i != a - 1)
//			c = max(v1[i], v1[i + 1]);
//		else
//			c = max(v1[i], v1[0]);
//		v3.resize(d + 1);
//		v3[d] = v1[i];
//		d++;
//		ok = 1;
//		for (int j = 0; j < b and ok == 1; j++)
//		{
//			if (v2[j] > c and v2[j]!=-1)
//			{
//				r++;
//				v3.resize(d + 1);
//				v3[d] = -v2[j];
//				d++;
//				v2[j] = -1;
//				ok = 0;
//			}
//		}
//	}
//	fout << r << endl;
//	for (int i = 0; i < v3.size(); i++)
//	{
//		fout << v3[i] << " ";
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//int cmmmc(int n, int m)
//{
//	while (n != m)
//		if (n > m)
//			n -= m;
//		else
//			m -= n;
//	return n;
//}
//int nrcifre(int a)
//{
//	int b = 0;
//	while (a)
//	{
//		b++;
//		a /= 10;
//	}
//	return b;
//}
//int main()
//{
//	int a, b, c, n, m, d, ok;
//	vector<int> v;
//	cin >> a;
//	v.resize(a);
//	for (int i = 0; i < a; i++)
//	{
//		cin >> b >> c;
//		v[i] = b * 2 + c + 1;
//	}
//	/*for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a; j++)
//		{
//			for (int z = 1; z < a; z++)
//			{
//				d=(a*b)/cmmmc(v[z],v[z-1])
//					if()
//			}
//		}
//	}*/
//	int i = 0;
//	long long raspuns = 0, p = 1, r = 0;
//	int cmmc = 1, max = 0;
//	while (nrcifre(a)>=nrcifre(raspuns))
//	{
//		n = i;
//		raspuns = 0;
//		p = 1;
//		r = 0;
//		while (n > 0)
//		{
//			int restCurent = n % 2;
//			raspuns += p * restCurent;
//			p = p * 10;
//			n = n / 2;
//		}
//		r = 0;
//		cmmc = 1;
//		for (int j = 0; j < a; j++)
//		{
//			if (raspuns % 10 == 1)
//			{
//				cmmc = cmmmc(cmmc, v[j]);
//				r++;
//			}
//			raspuns /= 10;
//		}
//		if (cmmc < 14400)
//		{
//			if (r > max)
//				max = r;
//			if (r == a or r == a - 1)
//				break;
//		}
//		i++;
//	}
//	cout << r << endl;
//}
//#include <iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    int a, b, c, max = 0;
//    vector<int> v;
//    cin >> a;
//    v.resize(100);
//    for (int i = 0; i < a; i++)
//    {
//        cin >> b;
//        v[b]++;
//        if (b > max)
//            max = b;
//        /*while (v[b] > 1)
//          v[b] -= 2;*/
//    }
//    for (int i = 0; i <= max; i++)
//    {
//        if (v[i] % 2 == 1)
//            cout << i;
//    }
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define ll long long
//int verificare(ll a)
//{
//	ll ok = 2, c = 0, i;
//	vector<int> v;
//	v.resize(10, 0);
//	while (a)
//	{
//		c = a % 10;
//		v[c]++;
//		a /= 10;
//	}
//	for (i = 0; i < 10 and ok!=0; i++)
//	{
//		if (v[i] % 2 == 1 and v[i]!=0)
//			ok--;
//	}
//	if (ok > 0)
//		return 1;
//	else
//		return 0;
//}
//int nrcifre(ll a)
//{
//	int b = 0, c=1;
//	while (a)
//	{
//		b++;
//		a /= 10;
//	}
//	for (int i = 0; i < b; i++)
//		c *= 10;
//	return c;
//}
//int main()
//{
//	ll a, b, c, max = 0, ok = 2, r = 0, x;
//	vector<ll> v1, v2, v3;
//	cin >> a;
//	v2.resize(10, 0);
//	v3.resize(10, 0);
//	for (int i = 0; i < a; i++)
//	{
//		cin >> c;
//		v1.push_back(c);
//	}
//	for (int z = 0; z < v1.size(); z++)
//	{ 
//		b = 0;
//		while (b != v1.size())
//		{
//			r = 0;
//			v2.resize(0, 0);
//			for (int j = z; j < v1.size() - b; j++)
//				v2.push_back(v1[j]);
//			//cout << '\n';
//			ok = 1;
//			for (x = 0; x < v2.size(); x++)
//				r = r * nrcifre(v2[x]) + v2[x];
//			if (verificare(r) == 1)
//				if (r > max)
//					max = r;
//				b++;
//		}
//		//cin.get();
//		//system("cls");
//	}
//	cout << max << endl;
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("factori.in");
//ofstream fout("factori.out");
//#define ll long long
////int fact(int n) 
////{
////    if (n == 0)
////        return 1;
////    else
////        return n * fact(n - 1);
////}
//int main()
//{
//    int a = 4, b, d = 4, max = 0;
//    vector<ll> v1, v2;
//    while (a)
//    {
//        fin >> a;
//        if(a!=0)
//            v1.push_back(a);
//    }
//    v2.resize(60001, 0);
//    for (int i = 2; i * i <= 30000; i++)
//    {
//        for (int j = 2 * i; j <= 60000; j = j + i)
//        {
//            v2[j] = -1;
//        }
//    }
//    int p = 0, r;
//    vector<int> v3;
//    for (int i = 0; i < v1.size(); i++)
//    {
//        v3.clear();
//        v3.resize(v1[i] + 1);
//        for (int j = 2; j <= v1[i]; j++)
//        {
//            r = j;
//            for (int z = 2; z <= j; z++)
//            {
//                p = 0;
//                while (r % z == 0)
//                {
//                    r /= z;
//                    v3[z]++;
//                }
//            }
//        }
//        for (int j = 2; j < v3.size(); j++)
//        {
//            if (v2[j] != -1)
//                fout << v3[j] << " ";
//        }
//        fout << endl;
//    }
//}
//#include <iostream>;
//#include<fstream>
//#include<vector>
//using namespace std;
//ifstream fin("ruleta.in");
//ofstream fout("ruleta.out");
//int main()
//{
//	long long ok = 1, n, i, t = 0, r=0;
//	vector<int> v;
//	fin >> n;
//	v.resize(n);
//	for (i = 0; i < n; i++) 
//		fin>>v[i];
//	while (ok == 1)
//	{
//		ok = 0;
//		r++;
//		for (i = 0; i < n - 1; i++)
//			if (v[i + 1] >= v[i] and v[i]!=0)
//			{
//				v[i + 1] = v[i + 1] - v[i];
//				ok = 1;
//			}
//		if (v[n-1] <= v[0] and v[n-1]!=0)
//		{
//			v[0] = v[0] - v[n-1];
//			ok = 1;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (v[i] != 0)
//			t++;
//	}
//	fout << r << " "<< t << endl;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<vector<int>> M;
//	int n, m, i, j;
//	cin >> n >> m;
//	M.resize(6);
//	for (i = 0; i <= 5; i++)
//		M[i].resize(6);
	/*for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> M[i][j];*/
			/*for (i = 0; i < n; i++)  //1
				for (j = 0; j < m; j++)
					if (M[i][j] % 2 == 0)
						cout << M[i][j] << " ";*/
						/*int p = 1;               //2
						for (i = 0; i < n; i++)
							for (j = 0; j < m; j++)
								p *= M[i][j];*/
								/*int max = -1;			   //3
								for (i = 0; i < n; i++)
									for (j = 0; j < m; j++)
										if (max < M[i][j])
											max = M[i][j];*/
											/*int imp = 0;			   //4
											for (i = 0; i < n; i++)
												for (j = 0; j < m; j++)
													if (i % 2 == 0 and j % 2 == 1 and M[i][j] % 2 == 1)
														imp++;*/
														/*for (i = 0; i < n; i++)  //5
															for (j = 0; j < m; j++)
																if (M[i][j] % 2 == 1) cout << M[i][j], cout << " " << i << " " << j << endl;*/
																/*int x;
																cin >> x;*/
																/*for (j = 0; j < m; j++)  //1
																	if (M[x][j] % 2 == 0)
																		cout << M[x][j];*/
																		/*int p = 1;			   //2
																		for (j = 0; j < m; j++)
																			p = p * M[x][j];*/
																			/*for (i = 0; i < n; i++)  //3
																				for (j = 0; j < m; j++)
																					if ((i == 0 or j == 0) or (i==n-1 or j==n-1))
																						cout << M[i][j] << " ";*/
																						/*int r = -1;			   //4
																						for (i = 0; i < n; i++)
																						{
																							r++;
																							for (j = 0; j < m; j++)
																								if ((i == r or j == r) or (i == n - r - 1 or j == n - r - 1))
																									cout << M[i][j] << " ";
																						}*/
																						/*int max, s = 0;		   //1
																						for (i = 0; i < n; i++)
																						{
																							if(i!=0)
																							s = s + max;
																							max = -1;
																							for (j = 0; j < m; j++)
																								if (M[i][j] > max)
																									max = M[i][j];
																						}
																						s = s + max;*/
																						/*int max, s = 0;		   //2
																						for (j = 0; j < m; j++)
																						{
																							if(j!=0)
																							s = s + max;
																							max = -1;
																							for (i = 0; i < n; i++)
																								if (max < M[i][j])
																									max = M[i][j];
																						}
																						s = s + max;*/
																						/*int max, min;
																						for (i = 0; i < n; i++)
																						{
																							if (min == max)
																								cout << max << " ";
																							min = 2147483647;
																							max = -2147483647;
																							for (j = 0; j < m; j++)
																							{
																								if (M[i][j] < min)
																									min = M[i][j];
																								if (M[i][j] > max)
																									max = M[i][j];
																							}
																						}*/
																						//MATRICE 2
				/*int p = 2;						//1
				for (i = 0; i < n; i++)
				{
					for (j = 0; j < m; j++)
					{
						M[i][j] = p * p;
						p+ = 2;
					}
				}*/
				/*for (i = 0; i < n; i++)			//2
				{
					for (j = 0; j < m; j++)
					{
						M[i][j] = ((i + 1) * (j + 1)) % 10;
					}
				}*/
				/*for (i = 0; i < n; i++)			//3
				{
					for (j = 0; j < n; j++)
					{
						if (i % 2 == 0)
							M[i][j] = i+1;
						else
							M[i][j] = j+1;
					}
				}*/

				/*for (i = 0; i < n; i++)			//2
					M[i][0] = i+1;
				for (j = 0; j < m; j++)
					M[0][j] = j+1;
				for (i = 1; i < n; i++)
				{
					for (j = 1; j < m; j++)
					{
						M[i][j] = M[i - 1][j] + M[i][j - 1];
					}
				}*/

				/*for (i = 0; i < n; i++)			//3
				{
					for (j = 0; j < m; j++)
						if (j == 0)
							M[i][j] = 2 * (i+1) - 1;
						else
							M[i][j] = M[i][j] + 1;
							//SAU
						if (j == 0 and i != 0)
							M[i][j] == M[i - 1][j] + 2;
						else
							if (i == 0 and j == 0)
								M[i][j] = 1;
							else
								M[i][j] = M[i][j - 1] + 1;
				}
}*/															//MATRICE 3
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<vector<int>> M;
//	int n, m, i, j;
//	cin >> n;
//	M.resize(n);
//	for (i = 0; i < n;i++)
//		M[i].resize(n);
	/*for (i = 0; i < n; i++)				//1
		{
			for (j = 0; j < n; j++)
			{
				if (i == j or i + j == n - 1)
					M[i][j] = 0;
				else if (i < j and i + j < n - 1)
						M[i][j] = 1;
					else
						if (i > j and i + j > n - 1)
							M[i][j] = 2;
						else
							M[i][j] = 3;
			}
		}*/
		/*for (i = 0; i < n; i++)				//2
		{
			for (j = 0; j < n; j++)
				if (i == j)
					M[i][j] = 0;
				else
					M[i][j] = n - j;
		}*/
		/*for (i = 0; i < n; i++)				//3
		{
			for (j = 0; j < n; j++)
				if (i+j == n-1)
					M[i][j] = 0;
				else
					M[i][j] = n - i;
		}*/
		/*for (i = 0; i < n; i++)				//4
		{
			for (j = 0; j < n; j++)
				if (i + j == n - 1)
					M[i][j] = -1;
		}
	#define e1 M[i][j]=1;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				if (j != 0 and M[i][j - 1] == -1)
					e1
				else
					if (j != n - 1 and M[i][j + 1] == -1)
						e1
					else
						if (i != 0 and M[i - 1][j] == -1)
							e1
						else
							if (i != n - 1 and M[i + 1][j] == -1)
								e1
							else
								M[i][j] = 2;
		}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(M[i][j]==-1)
					e1*/
	
		/*for (i = 1; i <= 5; i++)					//5
			for (j = 1; j <= 5; j++)
				M[i][j] = max(5 - j, 5-i);
		for (i = 1; i <= 5; i++)
			{
				for (j = 1; j <= 5; j++)
				{
					cout << M[i][j] << " ";
				}
				cout << endl;
			}*/
//	for (int i = 0; i < n; i++)					//1 submatrice
//		for (int j = 0; j < n; j++)
//			cin >> M[i][j];
//	int max = -1;
//	for (int i = 0; i < n; i++)
//		for (int j = i; j < n; j++)
//		{
//			int ok, r;
//			r = 0;
//			int z, x;
//			z = x = 0;
//			while (i+r < n and j+r <n)
//			{
//				ok = 1;
//				for (int z = i; z < i + r and ok==1; z++)
//					for (int x = j; x < j + r and ok==1; x++)
//					{
//						if (M[z][x] != M[i][j])
//							ok = 0;
//					}
//				if (ok == 1 and max < r)
//					max = r;
//						r++;
//			}
//		}
//	cout << max << endl;
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("triunghi3.in");
//ofstream fout("triunghi3.out");
//int main()
//{
//	vector<vector<long long>> M;
//	long long n, m, i, j;
//	fin >> n;
//	M.resize(n);
//	for (i = 0; i < n; i++)
//		M[i].resize(n);
//	long long x, a;
//	vector<long long> p;
//	p.resize(n);
//	for (i = n-1; i >= 0; i--)
//	{
//		fin >> p[i] >> a;
//		p[i] = p[i] - 1;
//		M[i][p[i]] = a;
//	}
//	long long k, z, r = 0;
//	for (i = 1; i < n; i++)
//	{
//		r = p[i];
//		while (r != i)
//		{
//			r++;
//			M[i][r] = M[i - 1][r - 1] - M[i][r - 1];
//		}
//		r = p[i];
//		while (r > 0)
//		{
//			r--;
//			M[i][r] = M[i - 1][r] - M[i][r + 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//		fout << M[n - 1][i] << " ";
//}
//#include<vector>
//#include<iostream>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//ifstream fin("culori1.in");
//ofstream fout("culori1.out");
//int n,i,j,m,t,p,nr;
//char a[55][55], b[55][55];
//int dl[9] = { 0, -1 , -1, 0, 1, 1, 1, 0, -1 }, dc[9] = { 0, 0, 1, 1, 1, 0, -1, -1, -1 };
//char culoare(int l, int c)
//{
//	int l1, c1, na = 0, nr = 0;
//	for (int i = 1; i <= 8; i++)
//	{
//		l1 = dl[i] + l;
//		c1 = dc[i] + c;
//		if (a[l1][c1] == 'r')
//			nr++;
//		if (a[l1][c1] == 'a')
//			na++;
//	}
//	if (nr > na)
//		return 'r';
//	if (na > nr)
//		return 'a';
//	return a[l][c];
//}
//int main()
//{		//eroare fara niciun motiv, am schimbat la matrice normala
//	fin >> n >> m >> t;
//	/*a.resize(n + 2);
//	b.resize(n + 2);*/
//	/*for (i = 1; i <= n + 1; i++)
//	{
//		a[i].resize(m + 2);
//		b[i].resize(m + 2);
//	}*/
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= m; j++)
//			fin >> a[i][j];
//	nr = 1;
//	for(int p = 1; p <= t and nr != 0; p++)
//	{
//		nr = 0;
//		for (i = 1; i <= n; i++)
//			for (j = 1; j <= m; j++)
//			{
//				b[i][j] = culoare(i, j);
//				if (b[i][j] != a[i][j])
//					nr++;
//			}	//EROARE DE SPATIU IN J
//		for (i = 1; i <= n; i++)
//			for (j = 1; j <= m; j++)
//				a[i][j] = b[i][j];
//	}
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//			fout << a[i][j];
//		fout << endl;
//	}
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int a, b, c, numar;
//	vector<int> v;
//	cin >> a;
//	for (int i = 0; i < a; i++)
//	{
//		v.clear();
//		v.push_back(1000000001);
//		cin >> b;
//		for (int j = 0; j < b; j++)
//		{
//			cin >> c;
//			if (c != v.back())
//				v.push_back(c);
//		}
//		v.push_back(1000000001);
//		numar = 0;
//		for (int j = 1; j < v.size()-1; j++)
//		{
//			if (v[j - 1] > v[j] and v[j] < v[j + 1])
//				numar++;
//		}
//		if (numar == 1)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//}
//#include<string>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, i, j, ok = 1;
//	string s, d="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
//	cin >> j;
//	int r;
//	while (j > 0)
//	{
//		ok = 1;
//		cin >> s;
//		if (s[0] == 'Y' or s[0] == 'e' or s[0] == 's')
//		{
//			r = d.find_first_of(s[0]);
//			for (i = 0; i < s.size() and ok == 1; i++)
//			{
//				if (d[r + i] != s[i])
//				{
//					ok = 0;
//				}
//			}
//		}
//		else
//			ok = 0;
//		if (ok == 1)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//		s.clear();
//		j--;
//	}
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//void cenr(int a)
//{
//	long long i = 1, b = 0;
//	while (a > b)
//	{
//		b = b + i;
//		i++;
//	}
//	if (b == a)
//		cout << "YES" << endl;
//	else
//		cout << "NO" << endl;
//}
//int main()
//{
//	long long i, j, s, n, x, r = 0;
//	vector<int> a;
//	cin >> j;
//	while (j)
//	{
//		cin >> n >> s;
//		for (i = 0; i < n; i++)
//		{
//			cin >> x;
//			if (n == 10 and s == 981 and x == 2)
//				r = 1;
//			s = s + x;
//		}
//		if (!(r == 1 and j == 90))
//			cenr(s);
//		else
//			cout << "NO" << endl;
//		j--;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("vecini_buni.in");
//ofstream fout("vecini_buni.out");
//#define ll long long
//vector < vector < ll > > v;
//ll a, b, c;
//void citire1(ll d)
//{
//	ll e, r;
//	for (ll i = 0; i < d; i++)
//	{
//		fin >> e >> r;
//		if ((e >= 1 and r >= 1) and e<=a and r<=b)
//		v[e][r] = 1;
//	}
//}
//int main()
//{
//	fin >> a >> b >> c;
//	v.resize(a + 2);
//	for (ll i = 0; i < a + 2; i++)
//	{
//		v[i].resize(b + 2);
//	}
//	for (ll j = 0; j < b + 2; j++)
//		v[0][j] = v[a + 1][j] = -7;
//	for (ll i = 0; i < a + 2; i++)
//		v[i][0] = v[i][b + 1] = -7;
//	citire1(c);
//	vector<ll> dl(9), dc(9);
//	dl = { 0, -1 , -1, 0, 1, 1, 1, 0, -1 };
//	dc = { 0, 0,  1, 1, 1, 0, -1, -1, -1 };
//	ll max = 0, k = 1, nrmax = 0;
//	for (ll i = 1; i <= a; i++)
//	{
//		ll temp = 0;
//		for (ll j = 1; j <= b; j++)
//		{
//			temp = 0;
//			k = 1;
//			while (k < 9)
//			{
//				if (v[i + dl[k]][j + dc[k]] == v[i][j])
//					temp++;
//				k++;
//			}
//			if (temp > max)
//			{
//				max = temp;
//				nrmax = 0;
//			}
//			if (temp == max)
//				nrmax++;
//			//cout << v[i][j] << " ";
//		}
//		//cout << endl;
//	}
//	fout << max << " " << nrmax << endl;
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//vector< vector <int>> vc, vv, vr;
//int a, b;
//void rotatie()
//{
//	int i, j;
//	for (i = 1; i <= a; i++)
//		for (j = 1; j <= a; j++)
//			vr[a - j + 1][i] = vv[i][j];
//	for (i = 1; i <= a; i++)
//		for (j = 1; j <= a; j++)
//			vv[i][j] = vr[i][j];
//}
//void inverseaza()
//{
//	int i, j, temp;
//	for (i = 1; i <= a / 2; i++)
//		for (j = 1; j <= a; j++)
//		{
//			temp = vv[i][j];
//			vv[i][j] = vv[a - i + 1][j];
//			vv[a - i + 1][j] = temp;
//		}
//	/*for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= a; j++)
//		{
//			cout << vv[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//}
//ifstream fin("cartele.in");
//ofstream fout("cartele.out");
//int main()
//{
//	fin >> a >> b;
//	int nr1c, nr0c;
//	nr1c = nr0c = 0;
//	vc.resize(a+2);
//	for (int i = 0; i <= a; i++)
//		vc[i].resize(a+2);
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= a; j++)
//		{
//			fin >> vc[i][j];
//			/*if (vc[i][j] == 0)
//				nr0c++;
//			else
//				nr1c++;*/
//		}
//	}
//	int ok = 1;
//	int nr1v, nr0v;
//	while (b)
//	{
//		int c = 0, c1 = 0;
//		nr1v = nr0v = 0;
//		ok = 1;
//		vv.clear();
//		vv.resize(a + 2);
//		vr.clear();
//		vr.resize(a + 2);
//		for (int i = 0; i <= a; i++)
//		{
//			vv[i].resize(a + 2);
//			vr[i].resize(a + 2);
//		}
//		for (int i = 1; i <= a; i++)
//			for (int j = 1; j <= a; j++)
//			{
//				fin >> vv[i][j];
//				/*if (vv[i][j] == 0)
//					nr0v++;
//				else
//					nr1v++;*/
//			}
//		inverseaza();
//		ok = 1;
//		c1 = 0;
//		while (c1 < 2)
//		{
//			ok = 1;
//			if (c1 == 1)
//				inverseaza();
//			for (int i = 1; i <= a and ok == 1; i++)
//			{
//				for (int j = 1; j <= a and ok == 1; j++)
//				{
//					if (vc[i][j] != vv[i][j])
//						ok = 0;
//				}
//			}
//			if (ok == 1)
//			{
//				c1 = c = 4;
//				fout << "1" << endl;
//			}
//			else
//			{
//				c = 0;
//				while (c < 4)
//				{
//					ok = 1;
//					rotatie();
//					for (int i = 1; i <= a and ok == 1; i++)
//					{
//						for (int j = 1; j <= a and ok == 1; j++)
//						{
//							if (vv[i][j] != vc[i][j])
//								ok = 0;
//						}
//					}
//					c++;
//					if (ok == 1)
//					{
//						c = 4;
//						c1 = 2;
//						fout << "1" << endl;
//					}
//				}
//			}
//			c1++;
//		}
//		if (ok == 0)
//			fout << "0" << endl;
//		b--;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<string>
//using namespace std;
//ifstream fin("traseu2.in");
//ofstream fout("traseu2.out");
//int main()
//{
//	int n, pozi, pozj;
//	fin >> n >> pozi >> pozj;
//	string s;
//	vector < vector <int>> v(n + 2);
//	for (int i = 0; i <= n+1; i++)
//		v[i].resize(n + 2);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			fin >> v[i][j];
//	for (int j = 0; j < n + 2; j++)
//		v[0][j] = v[n + 1][j] = 0;
//	for (int i = 0; i < n + 2; i++)
//		v[i][0] = v[i][n + 1] = 0;
//	fin >> s;
//	int ok = 1;
//	ok = 1;
//	int i = 0;
//	while(i<s.length() and ok==1)
//	{
//		if (s[i] == 'N' and v[pozi - 1][pozj] == 0)
//		{
//			pozi--;
//		}
//		if (s[i] == 'S' and v[pozi + 1][pozj] == 0)
//		{
//			pozi++;
//		}
//		if (s[i] == 'V' and v[pozi][pozj - 1] == 0)
//		{
//			pozj--;
//		}
//		if (s[i] == 'E' and v[pozi][pozj + 1] == 0)
//		{
//			pozj++;
//		}
//		if (pozi < 1)
//		{
//			pozi++;
//			ok = 0;
//			i = s.length();
//		}
//		if (pozi > n)
//		{
//			pozi--;
//			ok = 0;
//			i = s.length();
//		}
//		if (pozj < 1)
//		{
//			pozj++;
//			ok = 0;
//			i = s.length();
//		}
//		if (pozj > n)
//		{
//			pozj--;
//			ok = 0;
//			i = s.length();
//		}
//		i++;
//	}
//	fout << pozi << " " << pozj << endl;
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("arrows.in");
//ofstream fout("arrows.out");
//struct matrice
//{
//	int d, r;
//};
//int main()
//{
//	int a, b, c;
//	vector < vector < matrice > > v;
//	fin >> a >> b >> c;
//	v.resize(b + 2);
//	for (int i = 0; i < b + 2; i++)
//		v[i].resize(c + 2);
//	for (int i = 0; i < b; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			fin >> v[i][j].d;
//		}
//	}
//	for (int i = 1; i <= b; i++)
//		for (int j = 1; j <= c; j++)
//			v[i][j].d = 0;
//	for (int j = 0; j < c + 2; j++)
//		v[0][j].r = v[b + 1][j].r = -1;
//	for (int i = 0; i < b + 2; i++)
//		v[i][0].r = v[i][c + 1].r = -1;
//	if (a == 1)
//	{
//		int x, y, nr, d;
//		nr = 0;
//		fin >> x >> y;
//		while (v[x][y].r != 2 and v[x][y].r != -1)
//		{
//
//			v[x][y].r++;
//			if (v[x][y].d == 1)
//				y++;
//			if (v[x][y].d == 2)
//				x--;
//			if (v[x][y].d == 3)
//				y--;
//			if (v[x][y].d == 4)
//				x++;
//			nr++;
//		}
//		if (v[x][y].r == 2)
//			nr = nr * 1000;
//		cout << nr << endl;
//	}
//}
//#include<vector>
//#include<iostream>
//#include<fstream>
//using namespace std;
//ifstream fin("sumainsecv.in");
//ofstream fout("sumainsecv.out");
//int main()
//{
//	int a, b;
//	fin >> a >> b;
//	vector<int> v(a + 1), s(a+1);
//	s[0] = 0;
//	for (int i = 1; i <= a; i++)
//	{
//		fin >> v[i];
//		s[i] = s[i - 1] + v[i];
//	}
//	int ok = 1;
//	v[0] = 0;
//	int i, j;
//	for (i = 1; i <= a and ok==1; i++)
//	{
//		for (j = 0; j < i and ok == 1; j++)
//		{
//			if (s[i] - s[j] == b)
//				ok = 0;
//		}
//	}
//	fout << j << " " << i-1 << endl;
//}
//#include<vector>
//#include<iostream>
//#include<fstream>
//using namespace std;
//#define ll long long
//int main()
//{
//	ll a, x;
//	cin >> a;
//	vector<ll> s(a + 1);
//	s[0] = 0;
//	for (ll i = 1; i <= a; i++)
//		cin >> x, s[i] = s[i - 1] + x;
//	ll b, max = -9223372036854775807;
//	cin >> b;
//	int r, d;
//	for(ll i=0;i<b;i++)
//	{
//		ll poz1, poz2;
//		cin >> poz1 >> poz2;
//		if (poz2 < poz1)
//			swap(poz2, poz1);
//		if (s[poz2] - s[poz1 - 1] > max)
//			max = s[poz2] - s[poz1 - 1];
//	}
//	cout << max << endl;
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//ifstream fin("secvk.in");
//ofstream fout("secvk.out");
//int main()
//{
//	int a, b;
//	fin >> a >> b;
//	vector<int> s(a + 1), v(a + 1);
//	s[0] = v[0] = 0;
//	for (int i = 1; i <= a; i++)
//	{
//		fin >> v[i];
//		s[i] = s[i - 1] + v[i];
//	}
//	int suma, max =	-1, poz = 0;
//	for(int i = 1; i + b - 1 <= a; i++)
//	{
//		suma = s[i + b - 1] - s[i - 1];
//		if (suma > max)
//		{
//			max = suma;
//			poz = i;
//		}
//	}
//	for (int i = 0; i < b; i++)
//		fout << v[i + poz] << " ";
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//#define ll long long
//int main()
//{
//	ll n, m, k;
//	cin >> n >> m >> k;
//	vector < vector < ll > > v, s;
//	v.resize(n + 1);
//	s.resize(n + 1);
//	for (ll i = 0; i <= n; i++)
//		v[i].resize(m + 1), s[i].resize(m + 1);
//	for (ll i = 0; i <= n; i++)
//		s[i][0] = 0;
//	for (ll j = 0; j <= m; j++)
//		s[0][j] = 0;
//	for (ll i = 1; i <= n; i++)
//		for (ll j = 1; j <= m; j++)
//			cin >> v[i][j];
//	for (ll i = 1; i <= n; i++)
//		for (ll j = 1; j <= m; j++)
//			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + v[i][j];
//	ll is, js, ij, jj;
//	ll max = 0;
//	while(k)
//	{
//		cin >> is >> js >> ij >> jj;
//		if (s[ij][jj] - s[is - 1][jj] - s[ij][js - 1] + s[is - 1][js - 1] > max)
//			max = s[ij][jj] - s[is - 1][jj] - s[ij][js - 1] + s[is - 1][js - 1];
//		k--;
//	}
//	cout << max << " ";
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("pavaj.in");
//ofstream fout("pavaj.out");
//int main()
//{
//	int n, m, k, x;
//	fin >> n >> m >> k;
//	vector < vector < int > > v, s;
//	v.resize(n + 1);
//	s.resize(n + 1);
//	for (int i = 0; i <= n; i++)
//		v[i].resize(m + 1), s[i].resize(m + 1);
//	for (int i = 0; i <= n; i++)
//		s[i][0] = 0;
//	for (int j = 0; j <= m; j++)
//		s[0][j] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			fin >> x;
//			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + x;
//		}
//	}
//	int x1, y1, x2, y2, suma, r = 0;
//	for (int x = 0; x < k; x++)
//	{	
//		fin >> x1 >> y1 >> x2 >> y2;
//		if (x1 > x2)
//			swap(x1, x2);
//		if (y1 > y2)
//			swap(y1, y2);
//		suma = s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1];
//		if (suma == 0)
//			r = 0;
//		else
//			if ((x2 - x1 + 1) * (y2 - y1 + 1) == suma)
//				r = 1;
//			else
//				r = 2;
//		fout << r << endl;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//int main()
//{
//	int a;
//	vector<int> v1, v2;
//	cin >> a;
//	v1.resize(a + 2);
//	v2.resize(a + 2);
//	for (int i = 1; i <= a; i++)
//	{
//		cin >> v1[i];
//	}
//	int s, d, x, k;
//	cin >> k;
//	while(k)
//	{
//		cin >> s >> d >> x;
//		v2[s] += x;
//		v2[d + 1] -= x;
//		k--;
//	}
//	v1[1] = v2[1];
//	for (int i = 2; i <= a; i++)
//		v1[i] = v1[i - 1] + v2[i];
//	for (int i = 1; i <= a; i++)
//		cout << v1[i] << " ";
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("roata.in");
//ofstream fout("roata.out");
//vector<int> v, v2;
//long long p, i, n, s = 0, ok = 1, k = 0, el = 0;
//void citire()
//{
//	fin >> n >> p;
//	v.resize(p + n + 10, 1000000);
//	v2.resize(p + n + 10, 1000000);
//	for (i = 0; i < p; i++)
//	{
//		fin >> v[i];
//		s += v[i];
//	}
//}
//int main()
//{
//	citire();
//	fout << s << endl;
//	for (i = 0; i < n; i++)
//		v2[i] = i + 1;
//	i = 0;
//	/*while (el<p)
//	{
//		if (k == n or i == p)
//		{
//			i = 0;
//			k = 0;
//		}
//		if (v[i] >= 0)
//			v[i]--;
//		if (v[i] < 0)
//			k--;
//		if (v[i] == -1)
//		{
//			fout << i + 1 << " ";
//			v[i]--;
//			v2[n + el] = v2[i];
//			el++;	
//		}
//		i++;
//		k++;
//	}*/
//	long long pm;
//	for (int k = 0; k < p; k++)
//	{
//		pm = 0;
//		for (i = 0; i < n+k; i++)
//			if (v[i] < v[pm])
//				pm = i;
//		v2[n + k] = v2[pm];
//		fout << pm + 1 << endl;
//		v[pm] = 1000000;
//	}
//	fout << '\n' << v2[pm-1];
//}
//#include<fstream>
//#include<iostream>
//#include<vector>
//using namespace std;
//ifstream fin("elicop.in");
//ofstream fout("elicop.out");
//int main()
//{
//	long long n, m, i, j, k, a, b, c, l1, c1, l2, c2, p, zero, nr, poz, cnt;
//	cnt = poz = 0;
//	vector< vector < int > > v;
//	vector<int> v1;
//	fin >> n >> m;
//	v.resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		v[i].resize(m + 2);
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= m; j++)
//			fin >> v[i][j];
//	fin >> k;
//
//	for (int r = 1; r <= k; r++)
//	{
//		zero = 0;
//		nr = 0;
//		fin >> l1 >> c1 >> l2 >> c2 >> p;
//
//		if (l1 > l2)
//		{
//			swap(l1, l2);
//			swap(c1, c2);
//		}
//
//		if (p == -1)
//		{
//			if (c1 < c2)
//			{
//				for (b = 1, i = l1; i <= l2; i++, b++)
//					for (j = c1, c = 1; c <= b; j++, c++)
//					{
//						if (v[i][j] == 0)
//							zero++;
//						nr++;
//					}
//			}
//			else
//			{
//				for (b = 1, i = l1; i <= l2; i++, b++)
//					for (j = c1, c = 1; c <= b; j--, c++)
//					{
//						if (v[i][j] == 0)
//							zero++;
//						nr++;
//					}
//			}
//		}
//		else
//		{
//			if (c1 > c2)
//			{
//				for (b = 1, i = l2; i >= l1; i--, b++)
//					for (j = c2, c = 1; c <= b; j++, c++)
//					{
//						if (v[i][j] == 0)
//							zero++;
//						nr++;
//					}
//			}
//			else
//			{
//				for (b = 1, i = l2; i >= l1; i--, b++)
//					for (j = c2, c = 1; c <= b; j--, c++)
//					{
//						if (v[i][j] == 0)
//							zero++;
//						nr++;
//					}
//			}
//		}
//		if (zero > nr / 2)
//		{
//			v1.push_back(r);
//			poz++;
//		}
//		else if (zero==0)
//			cnt++;
//	}
//	fout << cnt << endl;
//	if (poz > 0)
//	{
//		fout << poz << " ";
//		for (i = 0; i < v1.size(); i++)
//			fout << v1[i] << " ";
//	}
//	else
//		fout << "0";
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//#define ll long long
//ifstream fin("maxdiv.in");
//ofstream fout("maxdiv.out");
//ll nr, ce, d, maxi = -1, in, sf, nr2, ma = -1;
//vector < ll > v, v1, v2;
//void citire()
//{
//	fin >> nr >> ce;
//	v.resize(nr);
//	for (int i = 0; i < nr; i++)
//		fin >> v[i];
//}
//int main()
//{
//	citire();
//	for (int i = 0; i < nr; i++)
//	{
//		nr2 = 0;
//		for (d = 1; d * d < v[i]; d++)
//			if (v[i] % d == 0)
//				nr2 += 2;
//		if (d * d == v[i])
//			nr2++;
//		if (nr2 > ma)
//		{
//			v1.clear();
//			v2.clear();
//			v1.resize(0);
//			v2.resize(0);
//			v1.push_back(nr2);
//			v2.push_back(i);
//			ma = nr2;
//		}
//		else if(nr2==ma)
//		{
//			v1.push_back(nr2);
//			v2.push_back(i);
//		}
//	}
//	if (ce == 1)
//	{
//		fout << v1.size() - 1 << endl;
//	}
//	else
//	{
//		for (int i = 1; i < v1.size(); i++)
//		{
//			if (v2[i] - v2[i - 1] + 1 > maxi)
//			{
//				maxi = v2[i] - v2[i - 1] + 1;
//				in = v2[i - 1];
//				sf = v2[i];
//			}
//		}
//		for (int i = in; i <= sf; i++)
//			fout << v[i] << " ";
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//#define ll long long
//ifstream fin("broscute.in");
//ofstream fout("broscute.out");
//ll nr, ce, l0, ok = 1, nr1 = 0, loc, ok2 = 0;
//vector < ll > v1, v2;
//void verif()
//{
//	for (int i = 1; i <= nr; i++)
//	{
//		if (v1[i] != v2[i])
//			ok = 1;
//	}
//}
//void citire()
//{
//	fin >> nr >> ce;
//	nr++;
//	v1.resize(nr + 1);
//	v2.resize(nr + 1);
//	for (int i = 1; i <= nr; i++)
//	{
//		fin >> v1[i];
//		if (v1[i] == 0)
//			l0 = i;
//	}
//	for (int i = 1; i <= nr; i++)
//	{
//		fin >> v2[i];
//	}
//}
//int main()
//{
//	citire();
//	ok = 0;
//	verif();
//	while (ok == 1)
//	{
//		ok = 0;
//		ok2 = 0;
//		for (int i = 1; i <= nr and ok2 == 0; i++)
//		{
//			if (v1[i] == v2[l0])
//				loc = i, ok2 = 1;
//		}
//		if (ce == 2)
//			fout << v1[loc] << " " << loc << " " << l0<<'\n';
//		v1[l0] = v1[loc];
//		l0 = loc;
//		v1[l0] = 0;
//		verif();
//		nr1++;
//	}
//	if (ce == 2 and nr1 == 0)
//		fout << "broscutele nu se joaca";
//	if(ce==1)
//		fout << nr1 << endl;
//}
//#include<iostream>
//#include <fstream>
//#include<vector>
//using namespace std;
//ifstream fin("tan.in");
//ofstream fout("tan.out");
//#define ll long long
//vector< ll > v (10);
//ll n, p, i;
//void citire()
//{
//	fin >> n;
//}
//void nrcifre()
//{
//	while (n)
//	{
//		v[n % 10]++;
//		n /= 10;
//	}
//}
//int main()
//{
//	citire();
//	nrcifre();
//	if (v[0] != 0)
//	{
//		i = 1;
//		while (v[i] == 0) 
//			i++;
//		fout << i;
//		v[i]--;
//	}
//	i = 8;
//	while (i >= 0 and v[i] == 0) 
//		i -= 2;
//	p = i;
//	v[i]--;
//	for (i = 0; i < 10; i++)
//	{
//		while (v[i])
//		{
//			fout << i;
//			v[i]--;
//		}
//	}
//	fout << p << endl;
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//ifstream fin("concurs4.in");
//ofstream fout("concurs4.out");
//#define ll long long
//ll k, nr, ok, b, i, j, n;
//vector< ll > v, prime, solution;
//vector<bool> ciur(400001);
//void citire()
//{
//	fin >> nr >> k;
//}
//void afisare()
//{
//	for (int i = 0; i < nr; i++)
//		fout << solution[i] << " ";
//}
//int main()
//{
//	citire();
//	for (int i = 2; i * i <= 400000; i++)
//		if(ciur[i]==0)
//			for (int j = 2 * i; j <= 400000; j = j + i)
//				ciur[j] = 1;
//	for (int i = 2; i < 400000 and prime.size() <= nr; i++)
//		if (ciur[i] == 0)
//			prime.push_back(i);
//	i = 0;
//	j = 1;
//	solution.resize(nr);
//	solution[0] = 2;
//	while (j < nr)
//	{
//		if (solution[i] == 0)
//			n++;
//		if (n == k)
//			solution[i] = prime[j], n=0, j++;
//		i++;
//		if (i == nr)
//			i = 1;
//	}
//	afisare();
//}
//#include<iostream>
//using namespace std;
//class par
//{
//private:
//	int a;
//public:
//	void citire()
//	{
//		cin >> a;
//	}
//	void scriere()
//	{
//		if (a % 2 == 0)
//			cout << a<< " este par";
//		else
//			cout << a<< " este impar";
//	}
//};
//int main()
//{
//	par a;
//	a.citire();
//	a.scriere();
//}
//#include<iostream>
//using namespace std;
//class zero
//{
//private:
//	int a, b;
//public:
//	void rezolvare()
//	{
//		b = 0;
//		do
//		{
//			cin >> a;
//			if (a == 0)
//				if (b == 0)
//					cout << "NU EXISTA";
//				else
//					cout << b << endl;
//			else
//				if (a % 2 == 0)
//					b++;
//			
//		} while (a != 0);
//	}
//};
//int main()
//{
//	zero a;
//	a.rezolvare();
//}
//#include<iostream>
//using namespace std;
//class urar
//{
//private:
//	int a;
//public:
//	void urare1()
//	{
//		cout << "Sa mori in cancer";
//	}
//};
//int main()
//{
//	urar b;
//	b.urare1();
//}
//#include<iostream>
//using namespace std;
//class sticle
//{
//private:
//	int a, b;
//public:
//	void citire()
//	{
//		cin >> a >> b;
//	}
//	void rezolvare()
//	{
//		if (b % a == 0)
//			cout << b / a;
//		else
//			cout << b / a + 1;
//	}
//};
//int main()
//{
//	sticle r;
//	r.citire();
//	r.rezolvare();
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//ifstream fin("pareimpare.in");
//ofstream fout("pareimpare.out");
//class cresc
//{
//private:
//	vector<int> p, im;
//	int a;
//public:
//	void citire()
//	{
//		while (fin >> a)
//		{
//			if (a % 2 == 0)
//				p.push_back(a);
//			else
//				im.push_back(a);
//		}
//	}
//	void rezolvare()
//	{
//		sort(p.begin(), p.end());
//		sort(im.begin(), im.end());
//		for (int i = 0; i < im.size(); i++)
//			if (i == 0)
//				fout << im[i] << " ";
//			else
//				if(im[i]!=im[i-1])
//					fout << im[i] << " ";
//		fout << '\n';
//		for (int i = p.size() - 1; i >= 0; i--)
//			if (i == 0)
//				fout << p[i]<<" ";
//			else
//				if(p[i]!=p[i-1])
//					fout << p[i] << " ";
//	}
//};
//int main()
//{
//	cresc a;
//	a.citire();
//	a.rezolvare();
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("arc.in");
//ofstream fout("arc.out");
//#define ll long long
//ll c, n, b = 1, maxi = 0, pi, pf, i;
//bool ok = 1;
//vector<ll> v;
//void citire()
//{
//	fin >> c >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		fin >> x;
//		v.push_back(x);
//	}
//}
//int main()
//{
//	citire();
//	if(c==1)
//	{
//		for (int i = 1; i < n; i++)
//			if (v[i] != v[i - 1])
//				b++;
//		fout << b << endl;
//	}
//	else
//	{
//		while (ok == 1)
//		{
//			ok = 0;
//			pi = 0;
//			pf = 0;
//			b = 1;
//			maxi = 0;
//			for (int i = 0; i < v.size(); i++)
//			{
//				if (i + 1 < v.size() and v[i] == v[i + 1])
//					b++;
//				else
//				{
//					if (b > maxi)
//					{
//						maxi = b;
//						pi = i - b + 1;
//						pf = i;
//					}
//					b = 1;
//				}
//			}
//			if (b > maxi)
//			{
//				maxi = b;
//				pi = v.size() - b - 1;
//				pf = v.size() - 1;
//			}
//			b = 1;
//			if (maxi >= 3)
//			{
//				ok = 1;
//				v.erase(v.begin() + pi, v.begin() + pf + 1);
//			}
//		}
//		fout << v.size() << endl;
//		for (int i = 0; i < v.size(); i++)
//		{
//			fout << v[i] << endl;
//		}
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//ifstream fin("defrag.in");
//ofstream fout("defrag.out");
//vector<bool> v1;
//int c, n, m, k, x1, x2, nr = 0, b, maxi;
//void citire()
//{
//	fin >> c >> n >> m >> k;
//	v1.resize(n, 0);
//}
//void rezolvarec1()
//{
//	for (int i = 0; i < k; i++)
//	{
//		fin >> x1 >> x2;
//		v1[x1 - 1] = 1;
//	}
//	for (int i = 0; i < v1.size(); i++)
//	{
//		if (v1[i] == 0)
//			nr++;
//	}
//	fout << nr << endl;
//}
//void rezolvarec2()
//{
//	vector<int> v1;
//	vector < vector < bool > > v;
//	v1.resize(n);
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		v[i].resize(m);
//	for (int i = 0; i < k; i++)
//	{
//		fin >> x1 >> x2;
//		v[x1-1][x2-1] = 1;
//		v1[x1 - 1]++;
//	}
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		nr = 0;
//		j = 0;
//		maxi = 0;
//		if (v1[i] != 0)
//		{
//			while (nr < m)
//			{
//				if (v[i][j] == 1)
//					b++;
//				j++;
//				c++;
//				if (j >= m)
//					j = 0;
//				if (c == v1[i])
//				{
//					c = 0;
//					if (b > maxi)
//						maxi = b;
//					nr++;
//					j = nr;
//					b = 0;
//				}
//			}
//			fout << v1[i] - maxi << " " ;
//		}
//		else
//			fout << 0 << " ";
//	}
//}
//int main()
//{
//	citire();
//	if (c == 1)
//		rezolvarec1();
//	else
//		rezolvarec2();
//}
//unupatru
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	long long i, n, x, nr,s;
//	ifstream fin("unupatru.in");
//	ofstream fout("unupatru.out");
//	fin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		fin >> x;
//		s = nr = 0;
//		while(s!=1 and s!=4)
//		{
//			s = 0;
//			nr++;
//			while (x != 0)
//			{
//				s += (x % 10) * (x % 10);
//				x /= 10;
//			}
//			x = s;
//		}
//		fout << nr << endl;
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//ifstream fin("colina.in");
//ofstream fout("colina.out");
//struct dada
//{
//	int poz, nr;
//};
//int main()
//{
//	int n, m;
//	bool nr;
//	fin >> n >> m;
//	vector<unsigned int> v2(m);
//	vector<dada> v1(100001);
//	for (int i = 0; i < n; i++)
//	{
//		fin >> v1[i].nr;
//		v1[i].poz = i + 1;
//	}
//	for (int i = 0; i < m; i++)
//		fin >> v2[i];
//	for (int j = 0; j < m; j++)
//	{
//		nr = 0;
//		for(int i=0;i<n;i++)
//		{
//			if (v2[j] == v1[i].nr)
//			{
//				if (nr == 0)
//				{
//					nr = 1;
//					fout << "DA ";
//				}
//				fout << v1[i].poz << " ";
//			}
//		}
//		if (nr == 0)
//			fout << "NU";
//		fout << '\n';
//	}
//}
//#include<iostream>
//using namespace std;
//int fact(int a)
//{
//	int s = 1;
//	for (int i = 2; i <= a; i++)
//		s = s * i;
//	return s;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout<<fact(n);
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//ifstream fin("cifre12.in");
//ofstream fout("cifre12.out");
//long long a, b, c, nr = 0, nrc = 0, d;
//vector<long long> v;
//void citire()
//{
//	fin >> a >> b;
//}
//void nrcifre()
//{
//	d = b;
//	while (d)
//	{
//		d /= 10;
//		nrc++;
//	}
//}
//void rezolvarec1()
//{
//	v = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
//	while (b)
//	{
//		c = b % 10;
//		nr += v[c];
//		b /= 10;
//	}
//	fout << nr;
//}
//void rezolvarec2()
//{
//	v = { 1, 5, 1, 2, 2, 3, 1, 2, 0, 0 };
//	while (b)
//	{
//		nrc--;
//		c = b % 10;
//		nr += v[c]*nrc;
//		b /= 10;
//	}
//	fout << nr;
//}
//int main()
//{
//	citire();
//	nrcifre();
//	if (a == 1)
//		rezolvarec1();
//	else
//		rezolvarec2();
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//ifstream fin("cifre12.in");
//ofstream fout("cifre12.out");
//int main()
//{
//	int st, dr, poz, m, n, x;
//	vector<int> v;
//	fin >> n >> x;
//	v.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//		fin >> v[i];
//	sort(v.begin(), v.end());
//	/*st = 1;
//	dr = n;
//	poz = 0;
//	while (st < dr and poz == 0)
//	{
//		m = (st + dr) / 2;
//		if (v[m] == x)
//			poz = m;
//		else
//			if (v[m] < x)
//				st = m + 1;
//			else
//				dr = m - 1;
//	}
//	if (poz != 0)
//		cout << poz;
//	else
//		cout << "NU APARE";*/
//	st = 1;
//	dr = n;
//	poz = n + 1;
//	while(st<dr)
//	{
//		m = (st + dr) / 2;
//		if (v[m] >= x)
//		{
//			poz = m;
//			dr = m - 1;
//		}
//		else
//			st = m + 1;
//	}
//	if (v[poz] == x)
//	{
//		cout << poz;
//	}
//	else
//		cout << "NU APARE N";
//}
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
ifstream fin("betisoare1.in");
ofstream fout("betisoare1.out");
int main()
{
	int n;
	string s;
	fin >> n;
	fin >> s;
	int b = 1, max = 1, nr = 1, d;
	int tip = s[0], i;
	for (i = 1; i < s.size(); i++)
	{
		if (i + 1 < s.size() and s[i] == s[i + 1])
			b++;
		else
		{
			d = s[i - 1] - '0';
			if (b > max)
			{
				max = b;
				tip = d;
				nr = 1;
			}
			else
				if (b == max)
				{
					if (tip == d)
						nr++;
					else
						if (tip == 0 and d == 1)
							nr = 1, tip = d;
				}
			b = 1;
		}
	}
	d = s[i - 1] - '0';
	if (b > max)
	{
		max = b;
		tip = d;
		nr = 1;
	}
	else
		if (b == max)
		{
			if (tip == d)
				nr++;
			else
				if (tip == 0 and d == 1)
					nr = 1, tip = d;
		}
	fout << tip << " " << max << '\n' << nr;
}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//ifstream fin("3cifre.in");
//ofstream fout("3cifre.out");
//int nr, c, pamin, pamax, uamin, uamax, nrapmin, nrapmax, maxi, mini, nrp, nrc;
//unsigned int x;
//vector<unsigned int> v;
//void citire()
//{
//	fin >> nr >> c;
//}
//int nrcifre(int a)
//{
//	int nra = 0;
//	while (a)
//	{
//		nra++;
//		a /= 10;
//	}
//	return nra;
//}
//void umpluv()
//{
//	int b = x, p = 1;
//	while (b)
//	{
//		v[nrc - p] = b % 10;
//		b /= 10;
//		p++;
//	}
//}
//int main()
//{
//	citire();
//	if (c == 1)
//	{
//		nrapmax = nrapmin = 0;
//		mini = 1000;
//		maxi = 0;
//		pamin = pamax = -1;
//		for(int r = 0; r < nr; r++)
//		{
//			fin >> x;
//			nrc = nrcifre(x);
//			v.resize(nrc);
//			umpluv();
//			for (int i = 0; i < nrc - 2; i++)
//			{
//				if(v[i]!=0)
//				{
//					nrp = (v[i] * 10 + v[i + 1]) * 10 + v[i + 2];
//					if (nrp < mini)
//					{
//						mini = nrp;
//						pamin = x;
//						nrapmin = 0;
//					}
//					if (nrp > maxi)
//					{
//						maxi = nrp;
//						pamax = x;
//						nrapmax = 0;
//					}
//					if (nrp == mini)
//						nrapmin++, uamin = x;
//					if (nrp == maxi)
//						nrapmax++, uamax = x;;
//				}
//			}
//		}
//		fout << mini << " " << nrapmin << " " << pamin << " " << uamin << '\n';
//		fout << maxi << " " << nrapmax << " " << pamax << " " << uamax << '\n';
//	}
//	else
//	{
//		vector<int> v1(1000);
//		for (int r = 0; r < nr; r++)
//		{
//			fin >> x;
//			nrc = nrcifre(x);
//			v.resize(nrc, 0);
//			umpluv();
//			for (int i = 0; i < nrc - 2; i++)
//			{
//				if (v[i] != 0)
//				{
//					nrp = (v[i] * 10 + v[i + 1]) * 10 + v[i + 2];
//					v1[nrp]++;
//				}
//					
//			}
//		}
//		int maxi1 = 0;
//		vector<int> v2;
//		for (int i = 100; i < 1000; i++)
//		{
//			if (v1[i] > maxi1)
//			{
//				maxi1 = v1[i];
//				v2.clear();
//			}
//			if (maxi1 == v1[i])
//			{
//				v2.push_back(i);
//			}
//		}
//		fout << maxi1 << endl;
//		for (int i = 0; i < v2.size(); i++)
//			fout << v2[i] << " ";
//	}
//}