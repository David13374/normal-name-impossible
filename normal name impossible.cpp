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
//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//ifstream fin("betisoare1.in");
//ofstream fout("betisoare1.out");
//int main()
//{
//	int n;
//	string s;
//	fin >> n;
//	fin >> s;
//	int b = 1, max = 1, nr = 1, d;
//	int tip = s[0], i;
//	for (i = 1; i < s.size(); i++)
//	{
//		if (i + 1 < s.size() and s[i] == s[i + 1])
//			b++;
//		else
//		{
//			d = s[i - 1] - '0';
//			if (b > max)
//			{
//				max = b;
//				tip = d;
//				nr = 1;
//			}
//			else
//				if (b == max)
//				{
//					if (tip == d)
//						nr++;
//					else
//						if (tip == 0 and d == 1)
//							nr = 1, tip = d;
//				}
//			b = 1;
//		}
//	}
//	d = s[i - 1] - '0';
//	if (b > max)
//	{
//		max = b;
//		tip = d;
//		nr = 1;
//	}
//	else
//		if (b == max)
//		{
//			if (tip == d)
//				nr++;
//			else
//				if (tip == 0 and d == 1)
//					nr = 1, tip = d;
//		}
//	fout << tip << " " << max << '\n' << nr;
//}
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
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//ifstream fin("roboti2.in");
//ofstream fout("roboti2.out");
//vector < int > v;
//int c, n, x;
//void citire()
//{
//	fin >> c >> n;
//	for (int i = 0; i < n; i++)
//		fin >> x, v.push_back(x);
//}
//int main()
//{
//	citire();
//	if (c == 1)
//	{
//		v.push_back(v[0]);
//		int max;
//		max = -1;
//		int k = 1, i = 0, b = 1;
//		i = 0;
//		while (k <= 2)
//		{
//			if (v[i] < v[i + 1])
//				b++;
//			else
//			{
//				if(max<b)
//					max = b;
//				b = 1;
//			}
//			i++;
//			if (i == n)
//			{
//				i = 0;
//				k++;
//			}
//		}
//		cout << max << endl;
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//ifstream fin("castel.in");
//ofstream fout("castel.out");
//vector < int > v(10, 0);
//int main()
//{
//	int a;
//	fin >> a;
//	for (int i = 0; i < a; i++)
//	{
//		int x;
//		fin >> x;
//		while (x)
//		{
//			v[x % 10]++;
//			x /= 10;
//		}
//	}
//	fin >> a;
//	int max=0, r = 0;
//	for (int i = 0; i < a; i++)
//	{
//		int x;
//		fin >> x;
//		if (v[x] > max)
//		{
//			max = v[x];
//			r = x;
//		}
//	}
//	fout << r << " " << max;
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define ll long long
//ifstream fin("grup.in");
//ofstream fout("grup.out");
//struct nice
//{
//	ll nr;
//	short pc;
//};
//struct nice2
//{
//	ll nrap, pa;
//};
////struct nice2
////{
////	ll nrpc, pa, nrm;
////};
//vector < nice > v;
//vector < nice2 > v1;
//ll n, c, x, maxi = 999999999, pc = 0;
//bool criteriu(nice a, nice b)
//{
//	return a.pc < b.pc or (a.pc == b.pc and a.nr < b.nr);
//}
////bool criteriu2(nice2 a, nice2 b)
////{
////	return a.nrpc < b.nrpc or (a.nrpc == b.nrpc and a.nrm < b.nrm);
////}
//bool criteriu2(nice2 a, nice2 b)
//{
//	return a.nrap < b.nrap;
//}
//void citire()
//{
//	fin >> n >> c;
//	v.resize(n + 1);
//	v1.resize(10);
//	for (int i = 1; i <= n; i++)
//	{
//		fin >> v[i].nr;
//		x = v[i].nr;
//		while (x > 10)
//		{
//			x /= 10;
//		}
//		/*if (v1[x].pa == 0)
//			v1[x].pa=i, v1[x].nrpc=0, v1[x].nrm=v[i].nr;
//		v1[x].nrpc++;*/
//		if(v1[x].pa==0)
//			v1[x].pa = i;
//		v1[x].nrap++;
//		v[i].pc = x;
//	}
//}
//void rezolvarec1()
//{
//	sort(v.begin(), v.end(), criteriu);
//	sort(v1.begin(), v1.end(), criteriu2);
//	int i = 0;
//	while (v[v1[i].pa].nr == 0)
//		i++;
//	maxi = v[v1[i].pa].nr, pc = i;
//	for (int j=i; i < 10; i++)
//	{
//		if(v1[i].nrap>v1[pc].nrap)
//			if(v1[i].pa!=0)
//				if(v[v1[i].pa].nr<v[v1[pc].pa].nr)
//				maxi = v[v1[i].pa].nr, pc = i;
//	}
//	fout << maxi;
//}
//int main()
//{
//	citire();
//	if (c == 1)
//	{
//		rezolvarec1();
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//#define ll long long
//ifstream fin("numere23.in");
//ofstream fout("numere23.out");
//vector < ll > v;
//ll n, c, k, x;
//ll verificare(ll u)
//{
//	ll nrdiv, p, d;
//	d = 2;
//	nrdiv = 0;
//	while (u % d == 0)
//	{
//		u /= d;
//		nrdiv++;
//	}
//	d = 3;
//	if (nrdiv > 3)
//		return 0;
//	while (u >= d)
//	{
//		while (u % d == 0)
//		{
//			u /= d;
//			nrdiv++;
//		}
//		d += 2;
//		if (nrdiv > 3)
//			return 0;
//	}
//	if (nrdiv <= 3)
//		return 1;
//}
//ll next(ll x)
//{
//	ll p, d, r, nrdiv = 0;;
//	while (true)
//	{
//		x++;
//		if (verificare(x) == 1)
//			return x;
//	}
//}
//void citire()
//{
//	fin >> n >> k >> c;
//	v.resize(n);
//	x = 2;
//	for (int i = 0; i < n; i++)
//	{
//		v[i] = x;
//		x = next(x);
//	}
//}
//int main()
//{
//	citire();
//	if (c == 1)
//		fout << v[n - 1];
//	else
//	{
//		int i, j;
//
//		i = 0;
//		j = 1;
//		vector<int> solution;
//		solution.resize(n);
//		solution[0] = 2;
//		int nr = 0;
//		while (j < n)
//		{
//			if (solution[i] == 0)
//				nr++;
//			if (nr == k)
//				solution[i] = v[j], nr = 0, j++;
//			i++;
//			if (i == n)
//				i = 1;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			fout << solution[i] << " ";
//		}
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//ifstream fin("tnia.in");
//ofstream fout("tnia.out");
//#define ll long long
//#define dvector vector < int >
//#define matrice vector < vector < int > >
//matrice A, S;
//ll n, m;
//int main()
//{
//	fin >> n >> m;
//	A.resize(n + 2);
//	S.resize(n + 2);
//	for (int i = 0; i < n+2; i++)
//	{
//		A[i].resize(m + 2, 0);
//		S[i].resize(m + 2, 0);
//	}
//	for (int i = 0; i <= n; i++)
//	{
//		for (int j = 0; j <= m; j++)
//			A[i][j] = 0;
//	}
//	for (int i = 0; i <= n; i++)
//		S[i][0] = 0;
//	for (int j = 0; j <= m; j++)
//		S[0][j] = 0;
//	for (int x = 1; x <= n; x++)
//	{
//		ll r;
//		fin >> r;
//		for (int j = 1; j <= r; j++)
//		{
//			A[x][j] = 1;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j]; //cout << A[i][j];
//		//cout << '\n';
//	}
//	ll r;
//	fin >> r;
//	ll is, js;
//	ll ij, jj;
//	ll is1, js1, ij1, jj1;
//	//cout << '\n';
//	//cout << '\n';
//	//cout << '\n';
//	//cout << '\n';
//	//cout << '\n';
//
//	while (r)
//	{
//		fin >> is >> js >> ij >> jj;
//		//is= is1;
//		//jj= js1;
//		//ij= ij1;
//		//js= jj1;
//		//cout << ij << " " << jj << " " << is << " " << js << "      " ;
//		fout << S[ij][jj] - S[is - 1][jj] - S[ij][js - 1] + S[is - 1][js - 1] << endl;
//		r--;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//#include<string>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("binar.in");
//ofstream fout("binar.out");
//struct ni
//{
//	ll nr, nr0;
//};
//bool conditie(ni a, ni b)
//{
//	return a.nr0 > b.nr0 or (a.nr0 == b.nr0 and a.nr > b.nr);
//}
//ll i = 0;
//vector < ni > v;
//string s;
//void binar(int x)
//{
//	ll nr;
//	nr = 0;
//	while (x / 2 > 0)
//	{
//		if (x % 2 == 1)
//			nr++;
//		x /= 2;
//	}
//	if (x % 2 == 1)
//		nr++;
//	v[i].nr0 = nr;
//	i++;
//}
//int main()
//{
//	short c;
//	int n;
//	fin >> c >> n;
//	v.resize(n);
//	ll r;
//	r = 0;
//	while (r<n)
//	{
//		fin >> v[r].nr;
//		binar(v[r].nr);
//		r++;
//	}
//	if (c == 1)
//	{
//		sort(v.begin(), v.end(), conditie);
//		fout << v[0].nr;
//	}
//	else if(c==2)
//	{
//		ll pi=0, pimax = 0;
//		ll b = 1, max = 1;
//		for (int i = 0; i < n; i++)
//		{
//			if (i < v.size() - 1 and v[i].nr0 == v[i + 1].nr0)
//				b++;
//			else
//			{
//				if (b > max)
//					max = b, pimax=pi;
//				b = 1;
//				pi = i + 2;
//			}
//		}
//		fout << max << " " << pimax << endl;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < long long > >
//#define iara v2[v[i]].val++, v2[v[i]].ua=i;
//ifstream fin("numere.in");
//ofstream fout("numere.out");
//struct neg
//{
//	ll pa, ua, val;
//};
//vector < ll > v;
//vector < neg > v2;
//ll verifprim(ll x)
//{
//	ll div, i;
//	div = 0;
//	for (i = 2; i * i < x; i++)
//	{
//		if (x % i == 0)
//			div += 2;
//	}
//	if (i * i == x)
//		div++;
//	if (div == 0)
//		return 1;
//	else
//		return 0;
//}
//ll prim(ll x)
//{
//	ll max = 0;
//	if (verifprim(x) == 1)
//		return x;
//	for (ll d = 1; d <= x / 2; d++)
//	{
//		if (x % d == 0)
//		{
//			if (verifprim(d) == 1)
//				max = d;
//		}
//	}
//	return max;
//}
//int main()
//{
//	ll c, n;
//	fin >> n >> c;
//	v.resize(n);
//	v2.resize(10001);
//	for (ll i = 0; i < n; i++)
//	{
//		ll x;
//		fin >> x;
//		v[i] = prim(x);
//	}
//	for (ll i = 0; i < n; i++)
//	{
//		if (v2[v[i]].val == 0)
//		{
//			v2[v[i]].pa = i;
//			iara
//		}
//		else
//		{
//			iara
//		}
//	}
//	if (c == 1)
//	{
//		ll max = 0;
//		for (ll i = 1; i <= 10000; i++)
//		{
//			if (v2[i].ua - v2[i].pa + 1> max)
//				max = v2[i].ua - v2[i].pa + 1;
//		}
//		fout << max;
//	}
//	else
//		if (c == 2)
//		{
//			ll nr = 0;
//			for (ll i = 1; i <= 10000; i++)
//			{
//				if (v2[i].val > 1)
//					nr = nr + (v2[i].val - 1) * v2[i].val / 2;
//			}
//			fout << nr << endl;
//		}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("cufar.in");
//ofstream fout("cufar.out");
//vector<int> v, v2;
//int divprimk(int x, int k)
//{
//	int i = 0;
//	while (k)
//	{
//		if (x % v2[i] == 0)
//			k--;
//		i++;
//	}
//	return v2[i - 1];
//}
//int main()
//{
//	ll n, c;
//	fin >> c >> n;
//	v.resize(1000001, 0);
//	for (int i = 3; i * i <= 1000000; i++)
//		for (int j = 2 * i; j <= 1000000; j = j + i)
//			v[j] = 1;
//	v2.push_back(2);
//	for (int i = 3; i < 1000001; i=i+2)
//	{
//		if (v[i] == 0)
//			v2.push_back(i);
//	}
//	if (c == 1)
//	{
//		for (ll i = 0; i < n; i++)
//		{
//			ll nr, k;
//			fin >> nr >> k;
//			fout << divprimk(nr, k);
//		}
//	}
//	else
//	{
//		ll s = 0;
//		for (ll i = 0; i < n; i++)
//		{
//			ll nr, k;
//			fin >> nr >> k;
//			s = s + divprimk(nr, k);
//		}
//		fout << s << endl;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("panglica.in");
//ofstream fout("panglica.out");
//int main()
//{
//	int n, c, x, max, cmax, i;
//	vector<int> first, last;
//	fin >> n >> c;
//	first.resize(c + 1, 0);
//	last.resize(c + 1, 0);
//	for (i = 1; i <= n; i++)
//	{
//		fin >> x;
//		if (first[x] == 0)
//			first[x] = i;
//		last[x] = i;
//	}
//	max = 0;
//	for (i = 1; i <= c; i++)
//	{
//		if (last[i] - first[i] + 1 > max)
//			max = last[i] - first[i] + 1, cmax=i;
//	}
//	fout << max << '\n' << cmax << '\n' << first[cmax] - 1 << '\n' << n - last[cmax];
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//#include<string>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("cifre3.in");
//ofstream fout("cifre3.out");
//vector<int> va, vb, v;
//int main()
//{
//	ll a, b;
//	bool ok = 0;
//	fin >> a >> b;
//	va.resize(10);
//	vb.resize(10);
//	while (a)
//	{
//		va[a % 10]++;
//		a /= 10;
//	}
//	while (b)
//	{
//		vb[b % 10]++;
//		b /= 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (va[i] > 0 and vb[i] > 0)
//			fout << i << " ", ok = 1;
//	}
//	if (ok == 0)
//		fout << "-1";
//	fout << '\n';
//	for (int i = 9; i >= 0; i--)
//	{
//		while (va[i])
//		{
//			fout << i;
//			va[i]--;
//		}
//		while (vb[i])
//		{
//			fout << i;
//			vb[i]--;
//		}
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<map>
//using namespace std;
//
//int main()
//{
//	int a, b, i, ok;
//	ifstream fin("cifre3.in");
//	ofstream fout("cifre3.out");
//	vector < int > v(10, 0);
//	map< int, int> M;
//	fin >> a >> b;
//	while (a)
//	{
//		v[a % 10] = 1;
//		a /= 10;
//		if (M.find(a % 10) == M.end()) //a%10 nu este in M
//			M.insert({ a % 10, 10 });
//		else
//			M[a % 10]++;
//	}
//	while (b)
//	{
//		if (v[b % 10] == 1)
//			v[b % 10] = 2;
//		b /= 10;
//	}
//	ok = 0;
//	for (i = 0; i < 10; i++)
//		if (v[i] == 2)
//		{
//			fout << i << " ";
//			ok = 1;
//		}
//	if (ok == 0)
//		fout << -1;
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("pdif.in");
//ofstream fout("pdif.out");
//vector < ll > v;
//int cifracontrol(int x)
//{
//	bool ok;
//	ok = 0;
//	int r;
//	while (ok == 0)
//	{
//		r = 0;
//		if (x < 10)
//			ok = 1;
//		else
//		{
//			while (x != 0)
//			{
//				r = r + x % 10;
//				x /= 10;
//			}
//			x = r;
//		}
//	}
//	return x;
//}
//int main()
//{
//	ll n, c;
//	fin >> n >> c;
//	for (int i = 0; i < n; i++)
//	{
//		ll x;
//		fin >> x;
//		v.push_back(cifracontrol(x));
//	}
//	if (c == 1)
//	{
//		ll b, max, cnt;
//		max = cnt = 0;
//		b = 1;
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			if (i < v.size() - 1 and v[i] % 2 != v[i + 1] % 2)
//				b++;
//			else
//			{
//				if (b > max)
//				{
//					max = b;
//					cnt = 0;
//				}
//				if (b == max)
//					cnt++;
//				b = 1;
//			}
//		}
//		if (i < v.size() - 1 and v[i] % 2 != v[i + 1] % 2)
//			b++;
//		else
//		{
//			if (b > max)
//			{
//				max = b;
//				cnt = 0;
//			}
//			if (b == max)
//				cnt++;
//			b = 1;
//		}
//		fout << max << " " << cnt;
//	}
//	else
//	{
//		ll b, max, cnt;
//		max = cnt = 0;
//		b = 1;
//		int i;
//		ll pi, pf;
//		pi = pf = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (i < v.size() - 1 and v[i] % 2 != v[i + 1] % 2)
//				b++;
//			else
//			{
//				if (b > max)
//				{
//					max = b;
//					cnt = 0;
//					pi = i - b + 1;
//					pf = i;
//				}
//				b = 1;
//			}
//		}
//		if (i < v.size() - 1 and v[i] % 2 != v[i + 1] % 2)
//			b++;
//		else
//		{
//			if (b > max)
//			{
//				max = b;
//				cnt = 0;
//				pi = i - b + 1;
//				pf = i;
//			}
//			b = 1;
//		}
//		fout << pi + 1 << " " << pf + 1;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("prietene.in");
//ofstream fout("prietene.out");
//struct neger
//{
//	ll val, div;
//};
//bool conditie(neger a, neger b)
//{
//	return a.div > b.div or (a.div == b.div and a.val > b.val);
//}
//vector<neger> v1, v2;
//vector<bool> r;
//vector<int> u;
//int verifprim(int x)
//{
//	if (x % 2 == 0)
//		return 0;
//	for (int i = 3; i <= x / 2; i += 2)
//		if (x % i == 0)
//			return 0;
//	return 1;
//}
//int nrdivprim(int x)
//{
//	int i, nr = 0;
//	i = 0;
//	if (verifprim(x) == 1)
//		nr++;
//	while (u[i] <= x / 2)
//	{
//		if (x % u[i] == 0)
//			nr++;
//		i++;
//	}
//	return nr;
//}
//int main()
//{
//	int c;
//	fin >> c;
//	int n, m;
//	fin >> n >> m;
//	ll max = 0;
//	v1.resize(n + 10);
//	for (int i = 0; i < n; i++)
//	{
//		fin >> v1[i].val;
//		if (v1[i].val > max)
//			max = v1[i].val;
//	}
//	v2.resize(m + 10);
//	for (int i = 0; i < m; i++)
//	{
//		fin >> v2[i].val;
//		if (v2[i].val > max)
//			max = v2[i].val;
//	}
//	r.resize(max + 10);
//	for (int i = 3; i * i <= max; i ++)
//		for (int j = 2 * i; j <= max; j = j + i)
//			r[j] = 1;
//	u.push_back(2);
//	for (int i = 3; i < max; i += 2)
//	{
//		if (r[i] == 0 and i % 2 == 1)
//			u.push_back(i);
//	}
//	if (c == 1)
//	{
//		for (int i = 0; i < n; i++)
//			v1[i].div = nrdivprim(v1[i].val);
//		for (int i = 0; i < m; i++)
//			v2[i].div = nrdivprim(v2[i].val);
//		sort(v1.begin(), v1.end(), conditie);
//		sort(v2.begin(), v2.end(), conditie);
//		if (v1[0].div > v2[0].div or (v1[0].div == v2[0].div and v1[0].val > v2[0].val))
//			fout << v1[0].val;
//		else
//			fout << v2[0].val;
//	}
//	if (c == 2)
//	{
//		vector<int> v3, v4;
//		v3.resize(max + 10);
//		v4.resize(max + 10);
//		ll perechi = 0;
//		for (int i = 0; i < n; i++)
//			v3[nrdivprim(v1[i].val)]++;
//		for (int i = 0; i < m; i++)
//			v4[nrdivprim(v2[i].val)]++;
//		for (int i = 0; i <= max; i++)
//		{
//			perechi = perechi + v3[i] * v4[i];
//		}
//		fout << perechi;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("binar.in");
//ofstream fout("binar.out");
//int Cifre1(int x)
//{
//	int nr = 0;
//	while (x)
//	{
//		nr += x % 2;
//		x /= 2;
//	}
//	return nr;
//}
//int Cifre(int x)
//{
//	int nr = 0;
//	while (x)
//	{
//		nr += (x & 1);
//		x = (x >> 1);
//	}
//	return nr;
//}
//int main()
//{
//	int i, n, x, max, task, y, nr, pmax, p;
//	fin >> task;
//	fin >> n;
//	if(task==1)
//	{
//		max = 0;
//		for (i = 1; i <= n; i++)
//		{
//			fin >> x;
//			if (Cifre1(x) > Cifre1(max))
//				max = x;
//			else
//				if (Cifre1(x) == Cifre1(max) and x > max)
//					max = x;
//		}
//		fout << max;
//	}
//	else
//	{
//		max = 1;
//		pmax = 1;
//		nr = 1;
//		fin >> y;
//		for (i = 2; i <= n; i++)
//		{
//			fin >> x;
//			if (Cifre(x) == Cifre(y))
//				nr++;
//			else
//			{
//				nr = 1;
//				p = i;
//			}
//			if (max < nr)
//			{
//				max = nr;
//				pmax = p;
//			}
//			y = x;
//		}
//		fout << max << " " << pmax;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("fadema.in");
//ofstream fout("fadema.out");
//matrice v;
//int main()
//{
//	int n, m, max, nr = 0;
//	fin >> n >> m;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		v[i].resize(m);
//	max = 0;
//	bool ok = 1;
//	for(int i=0;i<n;i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			for (int k = i; k < n; k++)
//			{
//				for (int t = j; t < m; t++)
//				{
//					ok = 1;
//					nr = 0;
//					for (int x = i; x <= k and ok == 1; x++)
//					{
//						for (int y = j; y <= t and ok == 1; y++)
//						{
//							if ((x < n - 1 and v[x][y] == v[x + 1][y]) or (y < m - 1 and v[x][y] == v[x][y + 1]))
//								ok = 0;
//							nr++;
//						}
//					}
//					if (nr > max)
//						max = nr;
//				}
//			}
//		}
//	}
//	cout << max;
//
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//#define fori for(int i=0;i<n;i++) for(int j=0;j<n;j++)
//ifstream fin("lasere.in");
//ofstream fout("lasere.out");
//matrice m;
//int main()
//{
//	ll n, k, c;
//	fin >> c >> n >> k;
//	m.resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//	{
//		m[i].resize(n + 2);
//	}
//	for (int j = 0; j < n + 2; j++)
//		m[0][j] = m[n + 1][j] = 10000;
//	for (int i = 0; i < n + 2; i++)
//		m[i][0] = m[i][n + 1] = 10000;
//	vector < int > v1, v2;
//	int dl[9] = { 0, -1 , -1, 0, 1, 1, 1, 0, -1 };
//	int dc[9] = { 0, 0, 1, 1, 1, 0, -1, -1, -1 };
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++)
//			{
//				fin >> m[i][j];
//			}
//	while (k)
//	{
//		ll nrgropi;
//		ll i1, j1, d;
//		fin >> i1 >> j1 >> d;
//		if (d == 1)
//		{
//			for (int i = 1; i < i1; i++)
//				m[i][j1]--;
//		}
//		else
//			if (d == 2)
//			{
//				for (int j = j1 + 1; j <= n; j++)
//					m[i1][j]--;
//			}
//			else
//				if (d == 3)
//				{
//					for (int i = i1 + 1; i <= n; i++)
//						m[i][j1]--;
//				}
//				else
//					if (d == 4)
//					{
//						for (int j = 1; j < j1; j++)
//							m[i1][j]--;
//					}
//		k--;
//	}
//	ll nrgropi = 0;
//	if(c==1)
//	{
//		bool ok = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				ok = 1;
//				for (int k = 1; k <= 8 and ok == 1; k++)
//				{
//					if (m[i][j] > m[i + dl[k]][j + dc[k]])
//						ok = 0;
//				}
//				if (ok == 1)
//					nrgropi++;
//			}
//		}
//		fout << nrgropi;
//	}
//	else
//	{
//		matrice r;
//		r.resize(n + 2);
//		for (int i = 0; i < n + 2; i++)
//		{
//			r[i].resize(n + 2);
//		}
//		for (int j = 0; j < n + 2; j++)
//			r[0][j] = r[n + 1][j] = 0;
//		for (int i = 0; i < n + 2; i++)
//			r[i][0] = r[i][n + 1] = 0;
//		bool ok = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				ok = 1;
//				for (int k = 1; k <= 8 and ok == 1; k++)
//				{
//					if (m[i][j] > m[i + dl[k]][j + dc[k]])
//						ok = 0;
//				}
//				if (ok == 1)
//					r[i][j] = 1;
//			}
//		}
//		ll nrtrans = 0;
//		int i, j;
//		for (i = 1; i <= n; i++)
//		{
//			ok = 1;
//			for (j = 1; j <= n; j++)
//			{
//				if (r[i][j] == 1 and r[i][j + 1] == 1)
//				{
//					while (j+1<n and r[i][j + 1] == 1)
//						j++;
//					nrtrans++;
//				}
//			}
//		}
//		fout << nrtrans;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("galerie.in");
//ofstream fout("galerie.out");
//struct neger
//{
//	ll i, j;
//};
//int main()
//{
//	int c, n, m, t;
//	fin >> c >> n >> m >> t;
//	vector<neger> v;
//	ll r = 0;
//	while (r<t)
//	{
//		ll x;
//		fin >> x;
//		r++;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("chei.in");
//ofstream fout("chei.out");
//
//int Pcifra(int x)
//{
//	while (x > 9)
//		x /= 10;
//	return x;
//}
//
//bool verifprim(int x)
//{
//	int i;
//	if (x == 1 or x == 0)
//		return 0;
//	if (x == 2)
//		return 1;
//	if (x % 2 == 0)
//		return 0;
//	for (i = 3; i * i <= x; i+=2)
//		if (x % i == 0)
//			return 0;
//	return 1;
//}
//
//int Sum(int x)
//{
//	int d = 3, s = 0;
//	if (x % 2 == 0)
//	{
//		s += 2;
//		while (x % 2 == 0)
//			x /= 2;
//	}
//	while (d * d <= x and d != 1)
//	{
//		if (x % d == 0)
//		{
//			s += d;
//			while (x % d == 0)
//				x /= d;
//		}
//		d+=2;
//	}
//	if (x != 1)
//		s += x;
//	return s;
//}
//
//
//int main()
//{
//	vector<int> v;
//	int c1, c2, c3, c;
//	fin >> c1 >> c2;
//	fout << c1 << " " << c2 << " ";
//	c3 = c1 % 10 * 10 + Pcifra(c2);
//	if (verifprim(c3)==0 and c3 != 1)
//		c3 = c3 - Sum(c3);
//	if (c3 != c1 and c3 != c2)
//		fout << c3 << " ";
//	c = -1;
//	while (true)
//	{
//		c = c2 % 10 * 10 + Pcifra(c3);
//		if (verifprim(c)==0 and c != 1)
//			c = c - Sum(c);
//		if (c == c1 or c == c2 or c == c3)
//			break;
//		else
//		{
//			fout << c << " ";
//			c1 = c2;
//			c2 = c3;
//			c3 = c;
//		}
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//#include<set>
//using namespace std;
//#define ll long long
//#define matrice vector < vector < int > >
//ifstream fin("campionat.in");
//ofstream fout("campionat.out");
//struct nurasism
//{
//	short x, y;
//};
//struct rasismnu
//{
//	short scor, poz, posi, ok;
//};
//bool conditie(rasismnu a, rasismnu b)
//{
//	return a.scor > b.scor or (a.scor == b.scor and a.poz < b.poz);
//}
//int main()
//{
//	short c;
//	fin >> c;
//	int n;
//	fin >> n;
//	vector<rasismnu> v;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		fin >> v[i].scor;
//		v[i].poz = i + 1;
//	}
//	int k;
//	fin >> k;
//	if(c==1)
//	{
//		vector<nurasism> v1;
//		int r = 0;
//		while (r < k)
//		{
//			bool ok = 1;
//			short x, y;
//			fin >> x >> y;
//			if (y > x)
//				swap(x, y);
//			for (int i = 0; i < r and ok == 1; i++)
//				if (v1[i].x == x and v1[i].y == y)
//					ok = 0;
//			if (ok == 1)
//			{
//				v1.push_back({ x, y });
//				v[x - 1].scor++;
//				v[y - 1].scor++;
//			}
//			r++;
//		}
//		sort(v.begin(), v.end(), conditie);
//		fout << v[0].poz << " ";
//		int i = 1;
//		while (v[i].scor == v[0].scor)
//		{
//			fout << v[i].poz << " ";
//			i++;
//		}
//	}
//	else
//	{
//		int r = 0;
//		vector<nurasism> v1;
//		while (r < k)
//		{
//			bool ok = 1;
//			short x, y;
//			fin >> x >> y;
//			x--;
//			y--;
//			if (y > x)
//				swap(x, y);
//			for (int i = 0; i < v1.size() and ok == 1; i++)
//				if (v1[i].x == x and v1[i].y == y)
//					ok = 0;
//			if (ok == 1)
//				v1.push_back({ x, y });
//			r++;
//		}
//		int i = 0;
//		for (int z = 0; z < v.size(); z++)
//		{
//			i = 0;
//			v[z].posi = v[z].scor;
//			for (int j = 0; j < v1.size(); j++)
//			{
//				if (v1[j].x == z or v1[j].y == z)
//					v[z].posi += 3;
//			}
//			while (i < v.size())
//			{
//				if (i == z)
//					i++;
//				if (i < v.size())
//				{
//					v[i].posi = v[i].scor;
//					for (int j = 0; j < v1.size(); j++)
//					{
//						if (v1[j].x != z and v1[j].y != z)
//						{
//							v[i].posi += 3;
//						}
//					}
//					if (v[i].posi >= v[z].posi)
//						v[z].ok = 1;
//				}
//				i++;
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (v[i].ok == 0)
//				fout << i + 1 << " ";
//		}
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//
//#define NMAX 32000
//
//void Ciur(vector<int>& Prime)
//{
//	int f, i;
//	vector<char> ciur(NMAX, 0);
//
//	for (f = 3; f * f < NMAX; f++)
//		if (ciur[f] == 0)
//			for (i = 2 * f; i < NMAX; i += f)
//				ciur[i] = 1;
//
//	Prime.push_back(2);
//	for (i = 3; i < NMAX; i += 2)
//		if (ciur[i] == 0)
//			Prime.push_back(i);
//}
//
//int NrFactori(long long x, vector<int> Prime)
//{
//	int i = 0, nrf = 0, n = Prime.size();
//	while (i < n && Prime[i] * Prime[i] <= x)
//	{
//		if (x % Prime[i] == 0)
//		{
//			nrf++;
//			while (x % Prime[i] == 0)
//				x /= Prime[i];
//		}
//		i++;
//	}
//	if (x != 1)
//		nrf++;
//	return nrf;
//}
//
//int NrDivizori(long long x, vector<int> Prime)
//{
//	int i = 0, nr = 0, n = Prime.size(), nrd = 1;
//	while (i < n && Prime[i] * Prime[i] <= x)
//	{
//		nr = 0;
//		while (x % Prime[i] == 0)
//		{
//			nr++;
//			x /= Prime[i];
//		}
//		nrd *= nr + 1;
//		i++;
//	}
//	if (x != 1)
//		nrd *= 2;
//	return nrd;
//}
//
//int main()
//{
//	vector<int> Prime;
//	vector<int> f1(15, 0), f2(15, 0);
//	int i, n, m, task, x, max;
//	ifstream fin("prietene.in");
//	ofstream fout("prietene.out");
//	max = 2;
//	fin >> task >> n >> m;
//	Ciur(Prime);
//	for (i = 1; i <= n; i++)
//	{
//		fin >> x;
//		f1[NrFactori(x, Prime)]++;
//		if (NrFactori(x, Prime) > NrFactori(max, Prime))
//			max = x;
//		else
//			if (NrFactori(x, Prime) == NrFactori(max, Prime) and x > max)
//				max = x;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		fin >> x;
//		f2[NrFactori(x, Prime)]++;
//		if (NrFactori(x, Prime) > NrFactori(max, Prime))
//			max = x;
//		else
//			if (NrFactori(x, Prime) == NrFactori(max, Prime) and x > max)
//				max = x;
//	}
//	if(task==1)
//		cout << max;
//	else
//	{
//		int sol = 0;
//		for (i = 1; i < 15; i++)
//		{
//			sol += f1[i] * f2[i];
//		}
//		cout << sol;
//	}
//}
//#include <iostream>
//#include <stdlib.h>
//
//int main(void)
//{
//	int a,
//		b = 0;
//	srand(66);
//	a = rand();                     // This is
//	b = rand();                     // "pure luck" 
//	    if ((a == b) && (a-1 == b-1))
//	{
//		std::cout << "fail\n";
//		return 0;
//	}
//	std::cout << "success\n";
//	return 0;
//}
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
ifstream fin("campionat.in");
ofstream fout("campionat.out");
vector<int> scor, meciuri, maxi;
int a[1001][1001];
int main()
{
	int c, n;
	fin >> c >> n;
	meciuri.resize(n);
	for (int i = 0; i < n; i++)
	{
		int x;
		fin >> x;
		scor.push_back(x);
}
	int k;
	fin >> k;
	while (k)
	{
		int i, j;
		fin >> i >> j;
		i--;
		j--;
		if (a[i][j] == 0)
{
			meciuri[i]++;
			meciuri[j]++;
			a[i][j] = a[j][i] = 1;
		}
		k--;
	}
	if (c == 1)
	{
		maxi.resize(n);
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			maxi[i] = scor[i] + meciuri[i];
			if (maxi[i] > max)
				max = maxi[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (maxi[i] == max)
				fout << i + 1 << " ";
		}
		
	}
			else
			{
		maxi.resize(n);
		int scor1 = 0;
		for (int i = 0; i < n; i++)
		{
			maxi[i] = scor[i] + 3 * meciuri[i];
			}
		bool ok = 0, ok2 = 0;
		for (int i = 0; i < n; i++)
			{
			ok = 0;
			for (int j = 0; j < n and ok == 0; j++)
			{
				if (j != i)
				{
					scor1 = maxi[j] - 3 * a[i][j];
					if (scor1 >= maxi[i])
						ok = 1;
				}
			}
			if (ok == 0)
				fout << i + 1 << " ", ok2 = 1;
		}
		if (ok2 == 0)
			fout << "0";
	}
}