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
						//#include<iostream>
						//#include<vector>
						//#include<algorithm>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("campionat.in");
						//ofstream fout("campionat.out");
						//vector<int> scor, meciuri, maxi;
						//int a[1001][1001];
						//int main()
						//{
						//	int c, n;
						//	fin >> c >> n;
						//	meciuri.resize(n);
						//	for (int i = 0; i < n; i++)
						//	{
						//		int x;
						//		fin >> x;
						//		scor.push_back(x);
						//	}
						//	int k;
						//	fin >> k;
						//	while (k)
						//	{
						//		int i, j;
						//		fin >> i >> j;
						//		i--;
						//		j--;
						//		if (a[i][j] == 0)
						//		{
						//			meciuri[i]++;
						//			meciuri[j]++;
						//			a[i][j] = a[j][i] = 1;
						//		}
						//		k--;
						//	}
						//	if (c == 1)
						//	{
						//		maxi.resize(n);
						//		int max = 0;
						//		for (int i = 0; i < n; i++)
						//		{
						//			maxi[i] = scor[i] + meciuri[i];
						//			if (maxi[i] > max)
						//				max = maxi[i];
						//		}
						//		for (int i = 0; i < n; i++)
						//		{
						//			if (maxi[i] == max)
						//				fout << i + 1 << " ";
						//		}
						//		
						//	}
						//	else
						//	{
						//		maxi.resize(n);
						//		int scor1 = 0;
						//		for (int i = 0; i < n; i++)
						//		{
						//			maxi[i] = scor[i] + 3 * meciuri[i];
						//		}
						//		bool ok = 0, ok2 = 0;
						//		for (int i = 0; i < n; i++)
						//		{
						//			ok = 0;
						//			for (int j = 0; j < n and ok == 0; j++)
						//			{
						//				if (j != i)
						//				{
						//					scor1 = maxi[j] - 3 * a[i][j];
						//					if (scor1 >= maxi[i])
						//						ok = 1;
						//				}
						//			}
						//			if (ok == 0)
						//				fout << i + 1 << " ", ok2 = 1;
						//		}
						//		if (ok2 == 0)
						//			fout << "0";
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("cri.in");
						//ofstream fout("cri.out");
						//int main()
						//{
						//	int n, m, i1, j1, gz1, gz2, gz3, gz4, minz1, minz2, minz3, minz4;
						//	gz1 = gz2 = gz3 = gz4 = 0;
						//	minz1 = minz2 = minz3 = minz4 = 2147000000;
						//	fin >> n >> m >> i1 >> j1;
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j <= m; j++)
						//		{
						//			int x;
						//			fin >> x;
						//			if (i <= i1 and j <= j1)
						//			{
						//				gz1 += x;
						//				if ((i != i1 or j1 != j1) and (i != 1 or j != 1))
						//					if (x < minz1)
						//						minz1 = x;
						//			}
						//			if (i <= i1 and j >= j1)
						//			{
						//				gz2 += x;
						//				if ((i != i1 or j1 != j1) and (i != 1 or j != m))
						//					if (x < minz2)
						//						minz2 = x;
						//			}
						//			if (i >= i1 and j <= j1)
						//			{
						//				gz3 += x;
						//				if ((i != i1 or j1 != j1) != 0 and (i != n or j != 1))
						//					if (x < minz3)
						//						minz3 = x;
						//			}
						//			if (i >= i1 and j >= j1)
						//			{
						//				gz4 += x;
						//				if ((i != i1 or j1 != j1) and (i != n or j != m))
						//					if (x < minz4)
						//						minz4 = x;
						//			}
						//		}
						//	}
						//	int az1, az2, az3, az4;
						//	az1 = i1 * j1;
						//	az2 = i1 * (m - j1 + 1);
						//	az3 = (n - i1 + 1) * j1;
						//	az4 = (n - i1 + 1) * (m - j1 + 1);
						//	if (i1 % 2 == 0 and j1 % 2 == 0)
						//	{
						//		az1--;
						//		gz1 -= minz1;
						//	}
						//	if (i1 % 2 == 0 and (m - j1 + 1) % 2 == 0)
						//	{
						//		az2--;
						//		gz2 -= minz2;
						//	}
						//	if ((n - i1 + 1)%2 == 0 and j1 % 2 == 0)
						//	{
						//		az3--;
						//		gz3 -= minz3;
						//	}
						//	if ((n - i1 + 1)%2 == 0 and (m - j1 + 1) % 2 == 0)
						//	{
						//		az4--;
						//		gz4 -= minz4;
						//	}
						//	int maxg, minl, zona;
						//	maxg = gz1;
						//	minl = az1;
						//	zona = 1;
						//	//cout << gz2 << endl;
						//	//cout << zona << " " << maxg << " " << minl << endl;
						//	if (maxg < gz2)
						//	{
						//		maxg = gz2;
						//		minl = az2;
						//		zona = 2;
						//	}
						//	else
						//		if (maxg == gz2 and az2<minl)
						//		{
						//			minl = az2;
						//			zona = 2;
						//		}
						//	//cout << zona << " " << maxg << " " << minl << endl;
						//	if (maxg < gz3)
						//	{
						//		maxg = gz3;
						//		minl = az3;
						//		zona = 3;
						//	}
						//	else
						//		if (maxg == gz3 and az3 < minl)
						//		{
						//			minl = az3;
						//			zona = 3;
						//		}
						//	//cout << zona << " " << maxg << " " << minl << endl;
						//	if (maxg < gz4)
						//	{
						//		maxg = gz4;
						//		minl = az4;
						//		zona = 4;
						//	}
						//	else
						//		if (maxg == gz4 and az4 < minl)
						//		{
						//			minl = az4;
						//			zona = 4;
						//		}
						//	fout << zona << " " << maxg << " " << minl << endl;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<algorithm>
						//#include<set>
						//using namespace std;
						//#define ll long long
						//ifstream fin("grup.in");
						//ofstream fout("grup.out");
						//struct nice
						//{
						//	int nrap, min;
						//};
						//int main()
						//{
						//	int c, n;
						//	fin >> n >> c;
						//	if (c == 1)
						//	{
						//		vector<nice> v(10);
						//		for (int i = 1; i <= 9; i++)
						//			v[i].min = 2147483647;
						//		for (int i = 0; i < n; i++)
						//		{
						//			int x, r;
						//			fin >> x;
						//			r = x;
						//			while (x > 9)
						//				x /= 10;
						//			v[x].nrap++;
						//			if (r < v[x].min)
						//				v[x].min = r;
						//		}
						//		int nrapmax, min;
						//		nrapmax = 0;
						//		min = 2147483647;
						//		for (int i = 1; i < 10; i++)
						//		{
						//			if (v[i].nrap > nrapmax)
						//				nrapmax = v[i].nrap, min = 2147483647;
						//			if(v[i].min>0)
						//				if (v[i].nrap == nrapmax and v[i].min < min)
						//					min = v[i].min;
						//		}
						//		fout << min;
						//	}
						//	else
						//	{
						//		vector<int> v1;
						//		set<int>::iterator it;
						//		for (int i = 0; i < n; i++)
						//		{
						//			int x;
						//			fin >> x;
						//			set<int> v;
						//			while (x)
						//			{
						//				v.insert(x % 10);
						//				x /= 10;
						//			}
						//			int r = 0;
						//			x = 1;
						//			for (it = v.begin(); it != v.end(); it++)
						//			{
						//				r = *it * x + r;
						//				x = x * 10;
						//			}
						//			v1.push_back(r);
						//		}
						//		sort(v1.begin(), v1.end());
						//		int b = 1, max=0;
						//		for (int i = 0; i < v1.size() - 1; i++)
						//		{
						//			if (v1[i] == v1[i + 1])
						//			{
						//				b++;
						//			}
						//			else
						//			{
						//				if (b > max)
						//					max = b;
						//				b = 1;
						//			}
						//		}
						//		fout << max;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<algorithm>
						//using namespace std;
						//ifstream fin("patratele.in");
						//ofstream fout("patratele.out");
						//struct tip
						//{
						//	int val, t0, t1, t2, t3;
						//};
						//int main()
						//{
						//	int n, m, c;
						//	fin >> n >> m >> c;
						//	vector< vector < tip > > M;
						//	M.resize(n + 1);
						//	for (int i = 0; i <= n; i++)
						//		M[i].resize(m + 1);
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j <= m; j++)
						//		{
						//			int r;
						//			fin >> M[i][j].val;
						//			r = M[i][j].val;
						//			if (M[i][j].val & 1 == 1)
						//				M[i][j].t0 = 1;
						//			if (M[i][j].val & 2 == 1)
						//				M[i][j].t1 = 1;
						//			if (M[i][j].val & 2 == 4)
						//				M[i][j].t2 = 1;
						//			if (M[i][j].val & 2 == 8)
						//				M[i][j].t3 = 1;
						//		}
						//	}
						//	for (int x = 1; x <= n; x++)
						//	{
						//		for (int y = 1; y <= m; y++)
						//		{
						//			int i, j;
						//			i = j = 1;
						//			while(M[i][j])
						//		}
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<set>
						//using namespace std;
						//ifstream fin("balba.in");
						//ofstream fout("balba.out");
						//int main()
						//{
						//	int c;
						//	fin >> c;
						//	int n;
						//	fin >> n;
						//	if (c == 1)
						//	{
						//		//set<int> s;
						//		vector<int> v;
						//		for (int i = 0; i < n; i++)
						//		{
						//			int x;
						//			fin >> x;
						//			v.push_back(x);
						//		}
						//		v.push_back(-10);
						//		int nr2 = 0;
						//		int nr1 = 0;
						//		int b = 1;
						//		int i = 0;
						//		for (int i = 0; i < n; i++)
						//		{
						//			if (v[i] != v[i + 1])
						//				nr1++;
						//		}
						//		for (int i = 0; i < n; i++)
						//		{
						//			if (v[i] == v[i + 1])
						//				b++;
						//			else
						//				if (b >= 2)
						//					nr2++, b = 1;
						//		}
						//		fout << nr1 << endl << nr2 << endl;
						//	}
						//	else
						//	{
						//		vector<int> v;
						//		v.resize(10, 0);
						//		for (int i = 0; i < n; i++)
						//		{
						//			int x;
						//			fin >> x;
						//			v[x]++;
						//		}
						//		int max1, max2;
						//		max1 = max2 = -1;
						//		for (int i = 0; i < 10; i++)
						//		{
						//			if (v[i] >= 3 and v[i]%2==1)
						//			{
						//				if(max1<max2)
						//					max1 = max2;
						//				max2 = i;
						//			}
						//			else
						//			{
						//				if (v[i] > 0 and v[i]%2==1)
						//					max1 = i;
						//			}
						//		}
						//		vector<int> palindrom;
						//		palindrom.resize(n); 
						//		for (int i = 0; i < 10; i++)
						//		{
						//			if (i != max1 and v[i]>=2)
						//			{
						//				while (v[i] > 1)
						//				{
						//					r.push_back(i);
						//					v[i] -= 2;
						//				}
						//			}
						//		}
						//		int x = r.size();
						//		for (int i = 0; i < x; i++)
						//		{
						//			fout << r[i];
						//		}
						//		if(max1!=-1)
						//			fout << max1;
						//		for (int i = x - 1; i >= 0; i--)
						//		{
						//			if (r[i] != max2)
						//				fout << r[i];
						//			else
						//				max2 = -1;
						//		}
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<set>
						//using namespace std;
						//struct poz
						//{
						//	int poz1, poz2;
						//};
						//#define ne v1[i] - v1[i - 1] - 1 + v1[i + 1] - v1[i] - 1
						//vector<int> r;
						//vector<int> t;
						//ifstream fin("oneout.in");
						//ofstream fout("oneout.out");
						//int main()
						//{
						//	int n, c;
						//	fin >> c >> n;
						//	vector<int> v;
						//	v.resize(n);
						//	int max = 0;
						//	for (int i = 0; i < n; i++)
						//	{
						//		fin >> v[i];
						//		if (v[i] > max)
						//			max = v[i];
						//	}
						//	t.resize(max + 1);
						//	for (int i = 2; i * i <= max; i++)
						//		for (int j = i * i; j <= max; j += i * i)
						//			t[j] = 1;
						//	if (c == 1)
						//	{
						//		int nr = 0;
						//		for (int i = 0; i < n; i++)
						//		{
						//			if ( t[v[i]] == 0)
						//				nr++;
						//		}
						//		fout << nr;
						//	}
						//	else
						//	{
						//		vector<int> v1;
						//		v1.push_back(0);
						//		for (int i = 0; i < n; i++)
						//		{
						//			if (t[v[i]] == 1)
						//				v1.push_back(i + 1);
						//		}
						//		v1.push_back(n + 1);
						//		vector<poz> v2;
						//		int max = 0, nr = 0;
						//		for (int i = 1; i < v1.size() - 1; i++)
						//		{
						//			if (v1[i] != v1[i + 1] - 1 and v1[i] != v1[i - 1] + 1)
						//			{
						//				if (ne > max)
						//					max = ne, nr = 0, v2.clear();
						//				if (ne == max)
						//				{
						//					nr++;
						//					v2.push_back({ v1[i - 1] + 1, v1[i + 1] - 1 });
						//				}
						//			}
						//		}
						//		fout << max << " " << nr << endl;
						//		for (int i = 0; i < v2.size(); i++)
						//			fout << v2[i].poz1 << " " << v2[i].poz2 << endl;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("pergament.in");
						//ofstream fout("pergament.out");
						//int main()
						//{
						//	int n, q, k;
						//	fin >> n >> k >> q;
						//	int A, B, C, D;
						//	fin >> A >> B >> C >> D;
						//	vector< vector <int> > M;
						//	M.resize(n + 1);
						//	for (int i = 0; i <= n; i++)
						//		M[i].resize(k + 1);
						//	vector<int> x, y;
						//	x.resize(n + 1);
						//	y.resize(n + 1);
						//	fin >> x[1] >> y[1];
						//	int c = 0;
						//	for (int i = x[1], c = 0; c < y[1]; i++, c++)
						//		M[1][i]++;
						//	for (int i = 2; i <= n; i++)
						//	{
						//		x[i] = 1 + (x[i - 1] * A + B) % k;
						//		y[i] = 1 + (y[i - 1] * C + D) % (k - x[i] + 1);
						//		for (int r = x[i], c = 0; c < y[i]; c++, r++)
						//			M[i][r]++;
						//	}
						//	int nr = 0;
						//	while (q)
						//	{
						//		int n1, m1, l;
						//		fin >> n1 >> m1 >> l;
						//		for (int i = 0, c = 0; c < l; i++, c++)
						//		{
						//			if (M[m1 + i][n1] == 1)
						//				nr++;
						//		}
						//
						//		q--;
						//	}
						//	fout << nr;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<algorithm>
						//using namespace std;
						//#define calcul S[ij][jj] - S[is-1][jj] - S[ij][js-1] + S[is-1][js-1]
						//struct nega
						//{
						//	int nra, i;
						//};
						//struct nada
						//{
						//	int n1, n2;
						//};
						//bool conditie(nega a, nega b)
						//{
						//	return a.nra > b.nra or (a.nra == b.nra and a.i < b.i);
						//}
						//ifstream fin("deminare.in");
						//ofstream fout("deminare.out");
						//int main()
						//{
						//	short c;
						//	fin >> c;
						//	int n, m, k;
						//	fin >> n >> m >> k;
						//	if(c==1)
						//	{
						//		vector<nega> v;
						//		v.resize(n);
						//		for (int i = 0; i < k; i++)
						//		{
						//			int l, c;
						//			fin >> l >> c;
						//			v[l - 1].nra++;
						//			v[l - 1].i = l;
						//		}
						//		sort(v.begin(), v.end(), conditie);
						//		fout << v[0].i << " ";
						//		int i = 1;
						//		while (v[0].nra == v[i].nra)
						//		{
						//			fout << v[i].i << " ";
						//			i++;
						//			if (i == n)
						//				break;
						//		}
						//	}
						//	else
						//	{
						//		vector< vector < int > > v;
						//		vector<nada> v1;
						//		v.resize(n + 1);
						//		for (int i = 0; i <= n; i++)
						//			v[i].resize(m + 1);
						//		for (int i = 0; i < k; i++)
						//		{
						//			int l, c;
						//			fin >> l >> c;
						//			v[l][c] = 1;
						//		}
						//		vector < vector < int > > S;
						//		S.resize(n + 1);
						//		for (int i = 0; i <= n; i++)
						//			S[i].resize(m + 1);
						//		for (int i = 0; i <= n; i++)
						//			S[i][0] = 0;
						//		for (int j = 0; j <= m; j++)
						//			S[0][j] = 0;
						//		for (int i = 1; i <= n; i++)
						//			for (int j = 1; j <= m; j++)
						//				S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + v[i][j];
						//		int r = min(n, m);
						//		for (int i = 1; i <= r; i++)
						//		{
						//			bool ok = 1;
						//			if(k % i == 0 and i * r >= k)
						//			{
						//				for (int j = 1; j <= r and ok == 1; j++)
						//				{
						//					if (i * j == k)
						//					{
						//						ok = 0;
						//						v1.push_back({ i, j });
						//					}
						//				}
						//			}
						//		}
						//		int is, js, ij, jj;
						//		bool ok1 = 1, ok2 = 1;
						//		int max = 0;
						//		bool abcd = 0;
						//		for (int x = 0; x < v1.size(); x++)
						//		{
						//			ok1 = 1;
						//			for (int i = 1; i <= n; i++)
						//			{
						//				ok2 = 1;
						//				for (int j = 1; j <= m; j++)
						//				{
						//					is = i;
						//					js = j;
						//					if (i + v1[x].n1 - 1 <= n and j + v1[x].n2 - 1 <= m)
						//					{
						//						jj = j + v1[x].n2 - 1;
						//						ij = i + v1[x].n1 - 1;
						//						if (S[ij][jj] - S[is - 1][jj] - S[ij][js - 1] + S[is - 1][js - 1] > max)
						//							max = S[ij][jj] - S[is - 1][jj] - S[ij][js - 1] + S[is - 1][js - 1], abcd = 1;
						//					}
						//				}
						//			}
						//		}
						//		if (abcd == 1)
						//			fout << k - max;
						//		else
						//			fout << -1;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<string>
						//using namespace std;
						//ifstream fin("aproape.in");
						//ofstream fout("aproape.out");
						//vector<long long> v;
						//int nrcifre1(int a)
						//{
						//	long long nr = 0;
						//	while (a)
						//	{
						//		a /= 10;
						//		nr++;
						//	}
						//	return nr;
						//}
						//long long nrcifre(int a)
						//{
						//	long long r = 1;
						//	for (long long i = 0; i < a; i++)
						//		r *= 10;
						//	return r;
						//}
						//int cifreschimbate(long long x, long long a)
						//{
						//	long long nr = 0;
						//	while (x)
						//	{
						//		if (x % 10 != a % 10)
						//		{
						//			nr += abs(x % 10 - a % 10);
						//		}
						//		x /= 10;
						//		a /= 10;
						//	}
						//	return nr;
						//}
						//int main()
						//{
						//	long long a;
						//	int b;
						//	fin >> b >> a;
						//
						//	if (b == 1)
						//	{
						//		if (a != 0)
						//		{
						//			int nr = 0;
						//			while (a)
						//			{
						//				a /= 10;
						//				nr++;
						//			}
						//			fout << nr;
						//		}
						//		else
						//			fout << 1;
						//	}
						//	else
						//		if (b == 2)
						//		{
						//			long long cnt = 0;
						//			if (a != 0)
						//			{
						//				if(a>10)
						//				{
						//					while (a)
						//					{
						//						cnt += 2;
						//						if (a == 1)
						//							cnt--;
						//						if (a % 10 == 0)
						//							cnt--;
						//						if (a % 10 == 9)
						//							cnt--;
						//						a /= 10;
						//					}
						//					fout << cnt;
						//				}
						//				else
						//				{
						//					cnt += 2;
						//					if (a == 0)
						//						cnt--;
						//					if (a == 9)
						//						cnt--;
						//					fout << cnt;
						//				}
						//			}
						//			else
						//				fout << 1;
						//		}
						//		else
						//			if (b == 3)
						//			{
						//				if (a != 0)
						//				{
						//					if (a > 10)
						//					{
						//						vector<long long> r;
						//						long long x = nrcifre(nrcifre1(a));
						//						r.resize(x);
						//						r[a] = 1;
						//						long long cnt1, cnt2;
						//						cnt1 = 0;
						//						cnt2 = 1;
						//						for (long long i = x / 10; i < x; i++)
						//						{
						//							/*long long y = abs(a - i);
						//							long long nr = 0;
						//							while (y)
						//							{
						//								nr += y % 10;
						//								y /= 10;
						//							}
						//							if (nr == 1)
						//								r[i] = 1 , cnt1++, cout<<i<<endl;*/
						//							if (cifreschimbate(i, a) == 1 and r[i] == 0)
						//								r[i] = 1, v.push_back(i);
						//						}
						//						for (long long y = 0; y < v.size(); y++)
						//						{
						//							for (int i = x / 10; i < x; i++)
						//							{
						//								if (cifreschimbate(i, v[y]) == 1 and r[i] == 0)
						//									r[i] = 1, cnt2++;
						//							}
						//						}
						//						fout << cnt2;
						//					}
						//					else
						//					{
						//						if (a < 8 and a >= 2)
						//							fout << 3;
						//						else
						//							fout << 2;
						//					}
						//				}
						//				else
						//					fout << 2;
						//			}
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("cetate.in");
						//ofstream fout("cetate.out");
						//int main()
						//{
						//	int c;
						//	fin >> c;
						//	int n, m, k;
						//	fin >> n >> m >> k;
						//	vector < vector < int > > v, S;
						//	v.resize(n + 2);
						//	S.resize(n + 2);
						//	for (int i = 0; i <= n; i++)
						//	{
						//		v[i].resize(m + 2);
						//		S[i].resize(m + 2);
						//	}
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j <= m; j++)
						//			fin >> v[i][j];
						//	}
						//	for (int i = 0; i <= n; i++)
						//		S[i][0] = 0;
						//	for (int j = 0; j <= m; j++)
						//		S[0][j] = 0;
						//
						//	for (int i = 1; i <= n; i++)
						//		for (int j = 1; j <= m; j++)
						//			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + v[i][j];
						//	if(c==1)
						//	{
						//		bool ok1, ok2;
						//		ok1 = 1;
						//		long long max = -9223372036854775807;
						//		int is, js, ij, jj, ism, jsm, ijm, jjm;
						//		ism = jsm = ijm = jjm = 0;
						//		for (int i = 1; i <= n and ok1 == 1; i++)
						//		{
						//			is = i;
						//			ij = i + k - 1;
						//			if (ij > n)
						//				ok1 = 0;
						//			ok2 = 1;
						//			if (ok1 == 1)
						//			{
						//				for (int j = 1; j <= m and ok2 == 1; j++)
						//				{
						//					js = j;
						//					jj = j + k - 1;
						//					if (jj > m)
						//						ok2 = 0;
						//					if (ok2 == 1)
						//					{
						//						if (S[ij][jj] - S[is - 1][jj] - S[ij][js - 1] + S[is - 1][js - 1] > max)
						//						{
						//							max = S[ij][jj] - S[is - 1][jj] - S[ij][js - 1] + S[is - 1][js - 1];
						//							ism = is;
						//							jsm = js;
						//							ijm = ij;
						//							jjm = jj;
						//						}
						//					}
						//				}
						//			}
						//		}
						//		fout << max << endl << ism << " " << jsm << " " << ijm << " " << jjm;
						//	}
						//	else
						//	{
						//		long long max = -9223372036854775807;
						//		int is, js, ij, jj, ism, jsm, ijm, jjm;
						//		ism = jsm = ijm = jjm = 0;
						//		for (int x = 1; x <= k; x++)
						//		{
						//			for(int x2=1;x2<=k;x2++)
						//			{
						//				for (int i = 1; i <= n; i++)
						//				{
						//					is = i;
						//					ij = i + x - 1;
						//					if (ij <= n)
						//					{
						//						for (int j = 1; j <= m; j++)
						//						{
						//							js = j;
						//							jj = j + x2 - 1;
						//							if (jj <= m)
						//							{
						//								if (S[ij][jj] - S[is - 1][jj] - S[ij][js - 1] + S[is - 1][js - 1] > max)
						//								{
						//									max = S[ij][jj] - S[is - 1][jj] - S[ij][js - 1] + S[is - 1][js - 1];
						//									ism = is;
						//									jsm = js;
						//									ijm = ij;
						//									jjm = jj;
						//								}
						//							}
						//						}
						//					}
						//				}
						//			}
						//		}
						//		fout << max << endl << ism << " " << jsm << " " << ijm << " " << jjm;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("buldo.in");
						//ofstream fout("buldo.out");
						//int main()
						//{
						//	int n, s = 0, mini =1000000000;
						//	fin >> n;
						//	vector<int> v(n);
						//	for (int i = 0; i < n; i++)
						//	{
						//		fin >> v[i];
						//		s = s + v[i];
						//		if (v[i] < mini)
						//			mini = v[i];
						//	}
						//	s = s / n;
						//	bool ok = 1;
						//	int cupa = 0;
						//	s = min(v[0], s);
						//	int max = 0;
						//	for (int i = mini; i <= s and ok == 1; i++)
						//	{
						//		cupa = 0;
						//		for (int j = 0; j < n and ok == 1; j++)
						//		{
						//			int x = abs(v[j] - i);
						//			if (v[j] > i)
						//			{
						//				cupa = cupa + x;
						//			}
						//			else if (v[j]<i)
						//			{
						//				cupa = cupa - x;
						//			}
						//			if (cupa < 0)
						//				ok = 0;
						//		}
						//		if (cupa < 0)
						//			ok = 0;
						//		else
						//			max = i;
						//	}
						//	fout << max;
						//}
						//#include<iostream>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("spiralmatrix.in");
						//ofstream fout("spiralmatrix.out");
						//int main()
						//{
						//	long long n, nr = 1, val1, val2, val3, val4;
						//	val1 = val2 = val3 = val4 = 0;
						//	fin >> n;
						//	bool ok = 1;
						//	for (long long i = 1; i <= n / 2 and ok == 1; i++) 
						//	{ 
						//		cout << "1 ";
						//		for (long long j = i; j <= n - i and ok == 1; ++j)
						//		{
						//			cout << "2 ";
						//			if (n % 2 == 0)
						//			{
						//				if(nr == n * n / 2)
						//					val1 = i, val2 = j;
						//				else
						//					if (nr == n * n / 2 + 1)
						//					{
						//						val3 = i, val4 = j;
						//						ok = 0;
						//					}
						//			}
						//			else
						//			{
						//				if(nr==n*n/2)
						//					val1 = i, val2 = j;
						//				else
						//					if (nr == n * n / 2 + 2)
						//					{
						//						val3 = i, val4 = j;
						//						ok = 0;
						//					}
						//			}
						//			nr++;
						//		}
						//		for (long long j = i; j <= n - i and ok == 1; ++j)
						//		{
						//			cout << "3 ";
						//			if (n % 2 == 0)
						//			{
						//				if (nr == n * n / 2)
						//					val1 = j, val2 = n - i + 1;
						//				else
						//					if (nr == n * n / 2 + 1)
						//					{
						//						val3 = j, val4 = n - i + 1;
						//						ok = 0;
						//					}
						//			}
						//			else
						//			{
						//				if (nr == n * n / 2)
						//					val1 = j, val2 = n - i + 1;
						//				else
						//					if (nr == n * n / 2 + 2)
						//					{
						//						val3 = j, val4 = n - i + 1;
						//						ok = 0;
						//					}
						//			}
						//			nr++;
						//		}
						//
						//		for (long long j = n - i + 1; j >= i + 1 and ok == 1; --j)
						//		{
						//			cout << "4 ";
						//			if (n % 2 == 0)
						//			{
						//				if (nr == n * n / 2)
						//					val1 = n - i + 1, val2 = j;
						//				else
						//					if (nr == n * n / 2 + 1)
						//					{
						//						val3 = n - i + 1, val4 = j;
						//						ok = 0;
						//					}
						//			}
						//			else
						//			{
						//				if (nr == n * n / 2)
						//					val1 = n - i + 1, val2 = j;
						//				else
						//					if (nr == n * n / 2 + 2)
						//					{
						//						val3 = n - i + 1, val4 = j;
						//						ok = 0;
						//					}
						//			}
						//			nr++;
						//		}
						//		for (long long j = n - i + 1; j >= i + 1 and ok == 1; --j)
						//		{
						//			cout << "5 ";
						//			if (n % 2 == 0)
						//			{
						//				if (nr == n * n / 2)
						//					val1 = j, val2 = i;
						//				else
						//					if (nr == n * n / 2 + 1)
						//					{
						//						val3 = j, val4 = i;
						//						ok = 0;
						//					}
						//			}
						//			else
						//			{
						//				if (nr == n * n / 2)
						//					val1 = j, val2 = i;
						//				else
						//					if (nr == n * n / 2 + 2)
						//					{
						//						val3 = j, val4 = i;
						//						ok = 0;
						//					}
						//			}
						//			nr++;
						//		}
						//	}
						//	fout << val1 << " " << val2 << endl;
						//	fout << val3 << " " << val4 << endl;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//#define ll long long
						//ifstream fin("abx.in");
						//ofstream fout("abx.out");
						//int main()
						//{
						//	int n, m;
						//	fin >> n >> m;
						//	for (int i = 0; i < n; i++)
						//	{
						//		int x;
						//		fin >> x;
						//		ll st, dr;
						//		st = dr = x;
						//		int r;
						//		bool ok = 1;
						//		bool ok1 = 1;
						//		for (int i = 2; i * i <= x and ok == 1; i++)
						//		{
						//			r = x;
						//			while (r % i == 0)
						//				r /= i;
						//			if (r == 1)
						//				fout << x << endl, ok1 = 0, ok = 0;
						//		}
						//		st--;
						//		dr++;
						//		bool ok2 = 1, ok3 = 1;
						//		while (ok1 == 1)
						//		{
						//			int r;
						//			ok = 1;
						//			for (int j = 2; j * j <= st and ok == 1 and ok2 == 1; j++)
						//			{
						//				r = st;
						//				while (r % j == 0)
						//					r /= j;
						//				if (r == 1)
						//				{
						//					fout << st << endl;
						//					ok1 = 0;
						//					ok = 0;
						//					ok3 = 0;
						//					ok2 = 0;
						//				}
						//			}
						//			ok = 1;
						//			for (int j = 2; j * j <= dr and ok == 1 and ok3 == 1; j++)
						//			{
						//				r = dr;
						//				while (r % j == 0)
						//					r /= j;
						//				if (r == 1)
						//				{
						//					fout << dr << endl;
						//					ok1 = 0;
						//					ok = 0;
						//					ok3 = 0;
						//					ok2 = 0;
						//				}
						//			}
						//			st--;
						//			dr++;
						//			if (st <= 0)
						//				ok2 = 0;
						//			if (dr > m)
						//				ok3 = 0;
						//		}
						//	}
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//#define ll long long
						//ifstream fin("cufar.in");
						//ofstream fout("cufar.out");
						//vector<ll> v, v2;
						//ll divprimk(ll x, ll k)
						//{
						//	ll i = 0;
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
						//	for (ll i = 3; i * i <= 1000000; i++)
						//		for (ll j = 2 * i; j <= 1000000; j = j + i)
						//			v[j] = 1;
						//	v2.push_back(2);
						//	for (ll i = 3; i < 1000001; i++)
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
						//using namespace std;
						//ifstream fin("div11.in");
						//ofstream fout("div11.out");
						//long long nrcifre(int x)
						//{
						//	long long r = 1;
						//	while (x)
						//	{
						//		x /= 10;
						//		r *= 10;
						//	}
						//	return r;
						//}
						//int main()
						//{
						//	vector<int> v;
						//	vector<long long> v1;
						//	int n;
						//	fin >> n;
						//	for (int i = 0; i < n; i++)
						//	{
						//		int x;
						//		fin >> x;
						//		v.push_back(x);
						//		v1.push_back(nrcifre(x));
						//	}
						//	int nr = 0;
						//	for (int i = 0; i < n; i++)
						//	{
						//		for (int j = 0; j < n; j++)
						//		{
						//			if ((v[i] * v1[j] + v[j]) % 11 == 0 and j != i)
						//				nr++;
						//		}
						//	}
						//	fout << nr;
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//#define spatiu << " " <<
						//ifstream fin("axel.in");
						//ofstream fout("axel.out");
						//int main()
						//{
						//	int n;
						//	fin >> n;
						//	vector< vector < int > > m, m1;
						//	m.resize(n);
						//	m1.resize(n * 2 + 1);
						//	for (int i = 0; i < n; i++)
						//		m[i].resize(n);
						//	for (int i = 0; i <= n * 2; i++)
						//	{
						//		m1[i].resize(n * 2 + 1);
						//	}
						//	int maxi = -1;
						//	for (int i = 0; i < n; i++)
						//	{
						//		for (int j = 0; j < n; j++)
						//		{
						//			fin >> m[i][j];
						//			if (m[i][j] > maxi)
						//				maxi = m[i][j];
						//			m1[i][j] = m[i][j];
						//			m1[i + n][j] = m[i][j];
						//		}
						//	}
						//	vector<int> v(maxi + 1);
						//	bool ok3 = 0;
						//	for (int x = 0; x <= maxi; x++)
						//	{
						//		bool ok2 = 1;
						//		for (int j = 0; j < n and ok2 == 1; j++)
						//		{
						//			bool ok = 0;
						//			int nr = 0;
						//			for (int i = j; i < 2 * n and ok == 0; i++)
						//			{
						//				if (m1[i][j] == x)
						//				{
						//					v[x] += nr;
						//					ok = 1;
						//				}
						//				nr++;
						//			}
						//			if (ok == 0)
						//			{
						//				v[x] = -1;
						//				ok2 = 0;
						//			}
						//		}
						//		if (ok2 == 1)
						//		{
						//			ok3 = 1;
						//		}
						//	}
						//	if (ok3 == 0)
						//		fout << "NU";
						//	else
						//	{
						//		fout << "DA" << endl;
						//		int maxi2 = -2147483647;
						//		for (int i = 0; i < maxi + 1; i++)
						//		{
						//			if (i - v[i] > maxi2 and v[i] != -1)
						//				maxi2 = i - v[i];
						//		}
						//		fout << maxi2;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("colibri.in");
						//ofstream fout("colibri.out");
						//int main()
						//{
						//	int n;
						//	vector<double> v;
						//	fin >> n;
						//	v.resize(n);
						//	for (int i = 0; i < n; i++)
						//	{
						//		int a, b, c;
						//		fin >> a >> b >> c;
						//		if (a % 2 == 0)
						//		{
						//			v[i] = b * 1.0 / c * 1.0;
						//		}
						//		else
						//		{
						//			v[i] = -b * 1.0 / c * 1.0;
						//		}
						//	}
						//	vector<int> x, xmax;
						//	int max = -2147483647;
						//	int j, i, t;
						//	int nr = 1;
						//	// calculez numarul de submultimi posibile
						//	nr = 1;
						//	for (i = 1; i <= n; i++)
						//		nr *= 2;
						//	for (i = 1; i < nr; i++)
						//	{
						//		//resetez vectorul x la 0 
						//		x.resize(n, 0);
						//		t = i;
						//		j = n - 1;
						//		//construiesc vectorul x
						//		while (t != 0)
						//		{
						//			x[j--] = t % 2;
						//			t /= 2;
						//		}
						//		//afisez submultimea
						//		int p = 1;
						//		for (j = 0; j < n; j++)
						//			if (x[j] == 1)
						//			{
						//				p = p * v[j];
						//			}
						//		if (p > max)
						//		{
						//			max = p;
						//			xmax.resize(n, 0);
						//			for (int i = 0; i < n; i++)
						//			{
						//				xmax[i] = x[i];
						//			}
						//		}
						//	}
						//	for (int i = 0; i < n; i++)
						//	{
						//		fout << xmax[i];
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("fibofrac.in");
						//ofstream fout("fibofrac.out");
						//int main()
						//{
						//	int n;
						//	fin >> n;
						//	//daca e caz cu n<2 e urat din partea lor :(
						//	vector<unsigned long long> fib = {1, 1};
						//	fib.resize(n);
						//	for (int i = 2; i < n; i++)
						//	{
						//		fib[i] = fib[i - 1] + fib[i - 2];
						//	}
						//	if (n >= 2)
						//	{
						//		unsigned long long nr = n - 2;
						//		for (int i = 2; i < n; i++)
						//		{
						//			for (int j = i + 1; j < n; j++)
						//			{
						//				if (fib[j] % fib[i] != 0)
						//					nr++;
						//			}
						//		}
						//		fout << nr;
						//	}
						//	//else
						//		//fout << 0;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<set>
						//using namespace std;
						//ifstream fin("pro3.in");
						//ofstream fout("pro3.out");
						//struct simfonianumarul5
						//{
						//	int v1, v2, v3;
						//};
						//int main()
						//{
						//	vector<int> v1, v2, v3;
						//	int n, r, t;
						//	fin >> n >> r >> t;
						//	set<int> s;
						//	v1.push_back(n);
						//	s.insert(n);
						//	t--;
						//	while (t)
						//	{
						//		v1.push_back(v1[v1.size() - 1] + r);
						//		s.insert(v1[v1.size() - 1]);
						//		t--;
						//	}
						//	fin >> n >> r >> t;
						//	v2.push_back(n);
						//	s.insert(n);
						//	t--;
						//	while (t)
						//	{
						//		v2.push_back(v2[v2.size() - 1] + r);
						//		s.insert(v2[v2.size() - 1]);
						//		t--;
						//	}
						//	fin >> n >> r >> t;
						//	v3.push_back(n);
						//	s.insert(n);
						//	t--;
						//	while (t)
						//	{
						//		v3.push_back(v3[v3.size() - 1] + r);
						//		s.insert(v3[v3.size() - 1]);
						//		t--;
						//	}
						//	fout << s.size();
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("triunghi5.in");
						//ofstream fout("triunghi5.out");
						//int main()
						//{
						//	int n;
						//	fin >> n;
						//	vector< vector <int> > v;
						//	v.resize(n);
						//	for (int i = 0; i < n; i++)
						//		v[i].resize(n);
						//	for (int i = 0; i < n; i++)
						//	{
						//		for (int j = 0; j < n; j++)
						//		{
						//			fin >> v[i][j];
						//		}
						//	}
						//	int k;
						//	fin >> k;
						//	int max = 0;
						//	while (k)
						//	{
						//		int lin, col, dis;
						//		fin >> lin >> col >> dis;
						//		lin--;
						//		col--;
						//		int c, d;
						//		int suma = 0;
						//		if (dis > 0)
						//		{
						//			for (int i = lin, c = 0; c < dis; i++, c++)
						//			{
						//				for (int j = col, d = 0; d < dis-c; j++, d++)
						//				{
						//					suma = suma + v[i][j];;
						//				}
						//			}
						//		}
						//		else
						//		{
						//			dis = abs(dis);
						//			for (int i = lin, c = 0; c < dis; i--, c++)
						//			{
						//				for (int j = col, d = 0; d < dis - c; j--, d++)
						//				{
						//					suma = suma + v[i][j];
						//					cout << v[i][j] << " ";
						//				}
						//				cout << '\n';
						//			}
						//		}
						//		if (suma > max)
						//			max = suma;
						//		k--;
						//	}
						//	fout << max;
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//#define ll long long
						//ifstream fin("mexitate.in");
						//ofstream fout("mexitate.out");
						//vector<int> v1;
						//int mex()
						//{
						//	for (int i = 1;i < 400001 ; i++)
						//	{
						//		if (v1[i] == 0)
						//			return i;
						//	}
						//	return 400001;
						//}
						//int main()
						//{
						//	int n, m, ik, jk;
						//	fin >> n >> m >> ik >> jk;
						//	int max = 0;
						//	vector< vector < int > > v;
						//	v.resize(n);
						//	for (int i = 0; i < n; i++)
						//	{
						//		v[i].resize(m);
						//	}
						//	for (int i = 0; i < n; i++)
						//	{
						//		for (int j = 0; j < m; j++)
						//		{
						//			fin >> v[i][j];
						//			if (max < v[i][j])
						//				max = v[i][j];
						//		}
						//	}
						//	bool ok1, ok2;
						//	ok1 = ok2 = 1;
						//	unsigned ll p = 1, r = 1;
						//	int is, ij, js, jj;
						//	is = ij = js = jj = 0;
						//	for (int i = 0; i < n and ok1 == 1; i++)
						//	{
						//		is = i;
						//		ij = i + ik - 1;
						//		ok2 = 1;
						//		if (ij >= n)
						//			ok1 = 0;
						//		else
						//		{
						//			for (int j = 0; j < m and ok2 == 1 and ok1 == 1; j++)
						//			{
						//				js = j;
						//				jj = j + jk - 1;
						//				if (jj >= m)
						//					ok2 = 0;
						//				else
						//				{
						//					v1.clear();
						//					v1.resize(400002, 0);
						//					for (int x1 = is; x1 <= ij; x1++)
						//					{
						//						for (int x2 = js; x2 <= jj; x2++)
						//						{
						//							v1[v[x1][x2]] = 1;
						//						}
						//					}
						//					p = p * ( mex() % 1000000007 ) % 1000000007;
						//				}
						//			}
						//		}
						//	}
						//	fout << p;
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//#include<algorithm>
						//using namespace std;
						//ifstream fin("plaja2.in");
						//ofstream fout("plaja2.out");
						//class finclose
						//{
						//public:
						//	int n, k, T;
						//	vector<int> zile;
						//	void citire()
						//	{
						//		fin >> n >> k >> T;
						//		rezolvare();
						//	}
						//	void rezolvare()
						//	{
						//		zile.resize(n + 1);
						//		for (int i = 0; i < k; i++)
						//		{
						//			int Z, T1;
						//			fin >> Z >> T1;
						//			Z--;
						//			zile[Z] = T1;
						//		}
						//		for (int i = 1; i < n; i++)
						//		{
						//			if (zile[i] == 0)
						//			{
						//				if (zile[i + 1] == 0)
						//				{
						//					zile[i] = zile[i - 1] + T;
						//				}
						//				else
						//				{
						//					int x;
						//					if (zile[i + 1] < zile[i - 1])
						//						x = zile[i + 1];
						//					else
						//						x = zile[i - 1];
						//					zile[i] = x + T;
						//				}
						//			}
						//			cout << zile[i] << " ";
						//		}
						//		sort(zile.begin(), zile.end());
						//		fout << zile[zile.size()-1];
						//	}
						//};
						//int main()
						//{
						//	int n, k, T;
						//	finclose a;
						//	a.citire();
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("logic.in");
						//char sir[1026];
						//char v[10][1026];
						//vector<int> puteredoi;
						//int sir21[10][1026];
						//short c, n;
						//void cedrqtrebuiesafieaici(char y724[1026])
						//{
						//	for (int j = 0; j < puteredoi[n - 1]; j++)
						//	{
						//		if (v[n - 1][j] == '&')
						//			sir21[n - 1][j] = ((y724[2 * j] - 48) & (y724[2 * j + 1] - 48));
						//		else
						//			sir21[n - 1][j] = ((y724[2 * j] - 48) | (y724[2 * j + 1] - 48));
						//		cout << sir21[n - 1][j] << " ";
						//	}
						//	cout << '\n';
						//}
						//int main()
						//{
						//	fin >> c >> n;
						//	puteredoi.resize(64);
						//	puteredoi[0] = 1;
						//	for (int i = 1; i < n; i++)
						//	{
						//		puteredoi[i] = puteredoi[i - 1] * 2;
						//	}
						//	if (c == 1)
						//	{
						//		for (int i = 0; i < n; i++)
						//		{
						//			for (int j = 0; j < puteredoi[i]; j++)
						//			{
						//				fin >> v[i][j];
						//			}
						//		}
						//		int k;
						//		fin >> k;
						//		for (int i = 0; i < k; i++)
						//		{
						//			for (int j = 0; j < puteredoi[n]; j++)
						//				fin >> sir[j];
						//			cedrqtrebuiesafieaici(sir);
						//		}
						//	}
						//}
						//#include <iostream>
						//using namespace std;
						//
						//void afisare_cifre(int n) {
						//	if (n < 10)
						//	{ 
						//		cout << n << " ";
						//	}
						//	else 
						//	{
						//		afisare_cifre(n / 10); 
						//		cout << n % 10 << " ";
						//	}
						//}
						//
						//int main() {
						//	int n = 123456789;
						//	afisare_cifre(n);
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("cifre13.in");
						//ofstream fout("cifre13.out");
						//int main()
						//{
						//	int n, m, k;
						//	fin >> n >> m >> k;
						//	vector<vector<int>> v;
						//	v.resize(n + 100);
						//	for (int i = 0; i < n + 100; i++)
						//		v[i].resize(m + 100);
						//	while (k)
						//	{
						//		int nr, lin, col;
						//		fin >> nr >> lin >> col;
						//		if (nr == 0)
						//		{
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col] = 1;
						//			v[lin + 1][col + 3] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 2][col + 3] = 1;
						//			v[lin + 3][col] = 1;
						//			v[lin + 3][col + 3] = 1;
						//			v[lin + 4][col] = 1;
						//			v[lin + 4][col + 3] = 1;
						//			v[lin + 5][col] = 1;
						//			v[lin + 5][col + 3] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//		}
						//		if (nr == 1)
						//		{
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col + 1] = 1;
						//			v[lin + 1][col + 2] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 2][col + 2] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 4][col + 2] = 1;
						//			v[lin + 5][col + 2] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//			v[lin + 6][col + 3] = 1;
						//		}
						//		if (nr == 2)
						//		{
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col] = 1;
						//			v[lin + 1][col + 3] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 2][col + 3] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 4][col + 1] = 1;
						//			v[lin + 5][col] = 1;
						//			v[lin + 6][col] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//			v[lin + 6][col + 3] = 1;
						//		}
						//		if (nr == 3)
						//		{
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col] = 1;
						//			v[lin + 1][col + 3] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 2][col + 3] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 4][col] = 1;
						//			v[lin + 4][col + 3] = 1;
						//			v[lin + 5][col] = 1;
						//			v[lin + 5][col + 3] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//		}
						//		if (nr == 4)
						//		{
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col + 1] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 3][col] = 1;
						//			v[lin + 3][col + 1] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 3][col + 3] = 1;
						//			v[lin + 4][col + 2] = 1;
						//			v[lin + 5][col + 2] = 1;
						//			v[lin + 6][col + 2] = 1;
						//		}
						//		if (nr == 5)
						//		{
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin][col + 3] = 1;
						//			v[lin + 1][col] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 3][col + 1] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 4][col + 3] = 1;
						//			v[lin + 5][col] = 1;
						//			v[lin + 5][col + 3] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//		}
						//		if (nr == 6)
						//		{
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col] = 1;
						//			v[lin + 1][col + 3] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 3][col] = 1;
						//			v[lin + 3][col + 1] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 4][col] = 1;
						//			v[lin + 4][col + 3] = 1;
						//			v[lin + 5][col + 3] = 1;
						//			v[lin + 5][col] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//		}
						//		if (nr == 7)
						//		{
						//			v[lin][col] = 1;
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin][col + 3] = 1;
						//			v[lin + 1][col + 3] = 1;
						//			v[lin + 2][col + 2] = 1;
						//			v[lin + 2][col + 2] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 4][col + 1] = 1;
						//			v[lin + 5][col + 1] = 1;
						//			v[lin + 6][col + 1] = 1;
						//		}
						//		if (nr == 8)
						//		{
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col] = 1;
						//			v[lin + 1][col + 3] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 2][col + 3] = 1;
						//			v[lin + 3][col + 1] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 4][col] = 1;
						//			v[lin + 4][col + 3] = 1;
						//			v[lin + 5][col] = 1;
						//			v[lin + 5][col + 3] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//		}
						//		if (nr == 9)
						//		{
						//			v[lin][col + 1] = 1;
						//			v[lin][col + 2] = 1;
						//			v[lin + 1][col] = 1;
						//			v[lin + 1][col + 3] = 1;
						//			v[lin + 2][col] = 1;
						//			v[lin + 2][col + 3] = 1;
						//			v[lin + 3][col + 1] = 1;
						//			v[lin + 3][col + 2] = 1;
						//			v[lin + 3][col + 3] = 1;
						//			v[lin + 4][col + 3] = 1;
						//			v[lin + 5][col] = 1;
						//			v[lin + 5][col + 3] = 1;
						//			v[lin + 6][col + 1] = 1;
						//			v[lin + 6][col + 2] = 1;
						//		}
						//		k--;
						//	}
						//	int nr = 0;
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j <= m; j++)
						//		{
						//			if (v[i][j] == 1)
						//				nr++;
						//		}
						//	}
						//	fout << nr;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("castig.in");
						//ofstream fout("castig.out");
						//int main()
						//{
						//	int n, k;
						//	fin >> n >> k;
						//	vector<int> v(n);
						//	for (int i = 0; i < n; i++)
						//		fin >> v[i];
						//	int max = 0, pi, pf;
						//	pi = pf = 0;
						//	for (int i = 0; i < n - k + 1; i++)
						//	{
						//		int s = 0;
						//		for (int j = 0; j < k; j++)
						//		{
						//			s = s + v[j + i];
						//		}
						//		if (s > max)
						//		{
						//			max = s;
						//			pi = i;
						//			pf = i + k;
						//		}
						//	}
						//	for (int i = pi; i < pf; i++)
						//		v[i] = -1;
						//	max = 0;
						//	for (int i = 0; i < n - k + 1; i++)
						//	{
						//		int s = 0;
						//		for (int j = 0; j < k; j++)
						//		{
						//			s = s + v[j + i];
						//		}
						//		if (s > max)
						//		{
						//			max = s;
						//		}
						//	}
						//	fout << max;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("b210.in");
						//ofstream fout("b210.out");
						//int main()
						//{
						//	int n, nr = 0;
						//	fin >> n;
						//	vector<int> v;
						//	while (n)
						//	{
						//		v.push_back(n % 2);
						//		n /= 2;
						//		nr++;
						//	}
						//	int i = 0, max=0;
						//	while (i != nr)
						//	{
						//		int j = i, k = 0, nr2 = 0, p2 = 1;
						//		while (k!=nr)
						//		{
						//			nr2 = nr2 + p2 * v[j];
						//			p2 *= 2;
						//			j++;
						//			k++;
						//			if (j == nr)
						//				j = 0;
						//		}
						//		if (nr2 > max)
						//			max = nr2;
						//		i++;
						//	}
						//	fout << max;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//int cmmdc(int a, int b)
						//{
						//	while (a != b)
						//		if (a > b)
						//			a = a - b;
						//		else
						//			b = b - a;
						//	return a;
						//}
						//ifstream fin("bomboane3.in");
						//int main()
						//{
						//	short c;
						//	fin >> c;
						//	if (c == 1)
						//	{
						//		int n;
						//		fin >> n;
						//		vector<int> v(n);
						//		int min = 2147483647;
						//		for (int i = 0; i < n; i++)
						//		{
						//			fin >> v[i];
						//			if (v[i] < min)
						//				min = v[i];
						//		}
						//		for (int i = 0; i < n; i++)
						//		{
						//			v[i] -= min;
						//		}
						//		int i = 0;
						//		while (v[i] == 0)
						//			i++;
						//		int x = v[i];
						//		for (int i = 0; i < n; i++)
						//		{
						//			if (v[i] != 0)
						//			{
						//				x = cmmdc(x, v[i]);
						//			}
						//		}
						//		cout << x;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("mirror.in");
						//int main()
						//{
						//	short c;
						//	fin >> c;
						//	int n, k;
						//	fin >> n >> k;
						//	if (c == 1)
						//	{
						//		vector<int> v(64), r(n);
						//		for (int i = 0; i < n; i++)
						//		{
						//			fin >> r[i];
						//		}
						//		int j = 0;
						//		for (int i = 0; i < n; i++)
						//		{
						//			while(r[i])
						//			{
						//				v[j++] = r[i] % 2;
						//				cout << r[i] % 2 << " ";
						//				r[i] /= 2;
						//				if (j == k)
						//				{
						//					cout << '\n';
						//					int p2 = 1, x = 0;
						//					for (int i = 0; i < k; i++)
						//					{
						//						;
						//					}
						//					j = 0;
						//				}
						//			}
						//			//cout << endl;
						//		}
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//ifstream fin("orase2.in");
						//ofstream fout("orase2.out");
						//int main()
						//{
						//	short c;
						//	fin >> c;
						//	int n, x;
						//	fin >> n >> x;
						//	vector<double> d(n), v(n), t(n);
						//	for (int i = 0; i < n; i ++ )
						//	{
						//		fin >> d[i];
						//	}
						//	for (int i = 0; i < n; i++)
						//	{
						//		fin >> v[i];
						//		t[i] = (1.0 * d[i]) / (v[i] * 1.0);
						//	}
						//	for (int r = 0; r < x; r++)
						//	{
						//		double max = 0;
						//		int bad = 0;	
						//		for (int i = 0; i < n; i++)
						//		{
						//			double t1 = (1.0 * d[i]) / (v[i] + 1 * 1.0);
						//			if (t1 > max)
						//				max = t1, bad = i;
						//		}
						//		v[bad]++;
						//	}
						//	double timp = 0;
						//	for (int i = 0; i < n; i++)
						//	{
						//		//cout << v[i] << " ";
						//		timp = timp + ((1.0 * d[i]) / (v[i] * 1.0));
						//	}
						//	fout << int (timp);
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<algorithm>
						//using namespace std;
						//ifstream fin("escape.in");
						//ofstream fout("escape.out");
						//struct asd
						//{
						//	long long nr, i;
						//};
						//bool conditie(asd a, asd b)
						//{
						//	return a.nr > b.nr or (a.nr == b.nr and a.i < b.i);
						//}
						//int main()
						//{
						//	long long n, c, t, i, s1, s2, max1, max2, nr1, nr2;
						//	vector<long long> v, y, x;
						//	fin >> c;
						//	fin >> n;
						//	v.resize(n);
						//	for (i = 0; i < n; i++)
						//		fin >> v[i];
						//	for (i = 0; i < n; i++)
						//	{
						//		fin >> t;
						//		v.push_back(t);
						//	}
						//	s1 = s2 = 0;
						//	max1 = max2 = 0;
						//	nr1 = nr2 = 0;
						//	y.resize(n);
						//	x.resize(n);
						//	long long max = 0;
						//	for (long long j = 0; j < n; j++)
						//	{
						//		y[j] = v[j] / 100;
						//		x[j] = v[j] % 100;
						//		if (y[j] > max)
						//			max = y[j];
						//	}
						//	vector<long long> ciur(max+1);
						//	for (long long i = 2; i * i <= max; i++)
						//	{
						//		if (ciur[i] == 0)
						//		{
						//			for (long long j = 2 * i; j <= max; j += i)
						//			{
						//				ciur[j] = 1;
						//			}
						//		}
						//	}
						//	vector<int> v1, v2;
						//	vector<asd> v3;
						//	v1.resize(10);
						//	v2.resize(10);
						//	v3.resize(10);
						//	for (long long i = 1; i < 10; i++)
						//	{
						//		v3[i].i = i;
						//	}
						//	for (long long j = 0; j < n; j++)
						//	{
						//		s1 = s2 = 0;
						//		if (ciur[y[j]] == 0)
						//		{
						//			while (y[j]>9)
						//			{
						//				s1 = 0;
						//				while (y[j] != 0)
						//				{
						//					s1 = s1 + y[j] % 10;
						//					y[j] /= 10;
						//				}
						//				y[j] = s1;
						//			}
						//			v1[s1] += x[j];
						//			v3[s1].nr++;
						//		}
						//		else
						//		{
						//			while (s2>9)
						//			{
						//				s2 = 0;
						//				while (y[j] != 0)
						//				{
						//					s2 = s2 + y[j] % 10;
						//					y[j] /= 10;
						//				}
						//				y[j] = s2;
						//			}
						//			v2[s2] += x[j];
						//			v3[s2].nr++;
						//		}
						//	}
						//	if (c == 1)
						//	{
						//		int max1, max2;
						//		max1 = max2 = 0;
						//		for (long long i = 1; i < 10; i++)
						//		{
						//			if (v1[i] > max1)
						//				max1 = v1[i];
						//		}
						//		for (long long i = 1; i < 10; i++)
						//		{
						//			if (v2[i] > max2)
						//				max2 = v2[i];
						//		}
						//		fout << max1 << " " << max2;
						//	}
						//	else
						//	{
						//		sort(v3.begin(), v3.end(), conditie);
						//		for (long long i = 0; i < 10; i++)
						//		{
						//			if (v3[i].nr != 0)
						//				fout << v3[i].i << " ";
						//		}
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<string>
						//using namespace std;
						//class datanastere
						//{
						//public:
						//	datanastere(int z, int l, int a)
						//	{
						//		zi = z;
						//		luna = l;
						//		an = a;
						//	}
						//	datanastere()
						//	{ }
						//	void afisare()
						//	{
						//		cout << zi << " " << luna << " " << an;
						//	}
						//	int zi, luna, an;
						//};
						//class persoana
						//{
						//public:
						//	persoana(string n, datanastere dnaste)
						//	{
						//		nume = n;
						//		dnast = dnaste;
						//	}
						//	persoana()
						//	{ }
						//	void afisare()
						//	{
						//		cout << nume << " ";
						//		dnast.afisare();
						//	}
						//	string nume;
						//	datanastere dnast;
						//};
						//int main()
						//{
						//	int zi, luna, an;
						//	cout << "Data de nastere(zz/ll/aaaa): ";
						//	cin >> zi >> luna >> an;
						//	string nume;
						//	cout << "Nume:";
						//	cin >> nume;
						//	datanastere dnas(zi, luna ,an);
						//	persoana pers(nume, dnas);
						//	datanastere* ptrdnas;
						//	persoana* ptrpers;
						//	ptrdnas = &dnas;
						//	ptrpers = &pers;
						//	if (ptrdnas->an % 4 == 0 and ptrdnas->an % 100 != 0)
						//		cout << ptrdnas->an << " e un an bisect";
						//	else
						//		cout << ptrdnas->an << " nu e un an bisect";
						//	
						//}
						//#include<iostream>
						//using namespace std;
						//int main()
						//{
						//	int x, y, z;
						//	vector<int> v;
						//	cin >> x;
						//	for (int i = 0; i < n; i++)
						//	{
						//		cin >> y;
						//		v.push_back(y);
						//	}
						//	cin >> z;
						//	for (int i = 0; i < n; i++)
						//	{
						//		if (v[i] == z)
						//			cout << i;
						//	}
						//}



						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//#include<string>
						//#include<algorithm>
						//using namespace std;
						//ifstream fin("uh.in");
						//struct da
						//{
						//	string a, b, c;
						//	vector<int> v1, v2, v3;
						//};
						//class rezolvare
						//{
						//public:
						//	void citire()
						//	{
						//		getline(fin, s.a);
						//		getline(fin, s.b);
						//		s.v1.resize(26);
						//		s.v2.resize(26);
						//		s.v3.resize(26, 0);
						//		s.c.resize(s.a.length()+s.b.length());
						//		//for (int i = 0; i < s.a.length(); i++)
						//			//s.c[i] = tolower(s.a[i]);
						//		//for (int i = 0; i < s.b.length(); i++)
						//			//s.c[s.a.length() + i - 1] = tolower(s.b[i]);
						//		//for (int i = 0; i < s.c.length(); i++)
						//			//cout << s.c[i] - 'a' << " ";
						//
						//		//c1
						//		for (int i = 0; i < s.a.length() - 1; i++)
						//			s.v1[tolower(s.a[i]) - 'a'] += 1;
						//		for (int i = 0; i < s.b.length() - 1; i++)
						//			s.v2[tolower(s.b[i]) - 'a'] += 1;
						//		for (int i = 0; i < 26; i++)
						//		{
						//			s.v3[i] = s.v1[i] + s.v2[i];
						//		}
						//		sort(s.v3.begin(), s.v3.end());
						//
						//		//c2
						//		cout << s.v3[s.v3.size() - 1] << endl;
						//		for (int i = 0; i < 26; i++)
						//		{
						//			dif += abs(s.v1[i] - s.v2[i]);
						//		}
						//		cout << dif << endl;
						//		
						//		//c3
						//		for(int i=0;i<min(s.a.length(), s.b.length()) - 1 and ok == 1; i++)
						//		{
						//			if (s.a[i] != s.b[i])
						//				ok = 0;
						//			nr++;
						//		}
						//		if (ok == 1)
						//			cout << nr;
						//		else
						//			cout << ok;
						//	}
						//private:
						//	da s;
						//	int dif = 0, nr = 0;
						//	bool ok = 1;
						//};
						//int main()
						//{
						//	rezolvare a;
						//	a.citire();
						//}
						//#include<iostream>
						//#include<stack>
						//#include<string>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("sl.in");
						//ofstream fout("sl.out");
						//int main()
						//{
						//	stack<int> s;
						//	vector<int> s1;
						//	string v;
						//	int i = 0, n, x, x1 = -1;
						//	bool ok = 0;
						//	fin >> n;
						//	while (fin >> v)
						//	{
						//		if (i > x1)
						//		{
						//			if (v == "PUSH")
						//			{
						//				fin >> x;
						//				s.push(x);
						//			}
						//			if (v == "STORE")
						//			{
						//				if(!s.empty())
						//				{
						//					x = s.top();
						//					s.pop();
						//					s1.push_back(x);
						//				}
						//			}
						//			if (v == "LOAD")
						//			{
						//				for (int j = s1.size() - 1; j >= 0; j--)
						//				{
						//					s.push(s1[j]);
						//				}
						//			}
						//			if (v == "PLUS")
						//			{
						//				x = s.top();
						//				s.pop();
						//				x += s.top();
						//				s.pop();
						//				s.push(x);
						//			}
						//			if (v == "TIMES")
						//			{
						//				x = s.top();
						//				s.pop();
						//				x *= s.top();
						//				s.pop();
						//				s.push(x);
						//			}
						//			if (v == "IFZERO")
						//			{
						//				if (s.top() == 0)
						//					fin >> x1;
						//			}
						//			if (v == "DONE")
						//			{
						//				if (!s.empty())
						//					fout << s.top();
						//				else
						//					fout << 0;
						//				break;
						//			}
						//		}
						//		i++;
						//	}
						//}
						//#include<iostream>
						//#include<string>
						//#include<fstream>
						//using namespace std;
						//string text, cuvant, asd, schimb, schimb1;
						//int n;
						//void citire()
						//{
						//	for (int i = 0; i < n; i++)
						//	{
						//		getline(fin, asd);
						//		cout << asd << endl;
						//		schimb = schimb + " " + asd;
						//		getline(fin, asd);
						//		cout << asd << endl;
						//		schimb1 = schimb1 + " " + asd;
						//	}
						//}
						//void citire()
						//{
						//	ifstream in;
						//	in.open("uh.in");
						//	char ch;
						//	int pos;
						//	in.seekg(-1, ios::end);
						//	pos = in.tellg();
						//	for (int i = 0; i < pos; i++)
						//	{
						//		ch = in.get();
						//		cout << ch;
						//		in.seekg(-2, ios::cur);
						//	}
						//	in.close();
						//}
						//int main()
						//{
						//	citire();
						//	//citire();
						//	//cout << schimb << endl << schimb1;
						//}
						//#include <iostream>
						//#include <fstream>
						//#include <list>
						//#include <string>
						//#include <iterator>
						//#include <algorithm>
						//using namespace std;
						//int main() 
						//{
						//
						//	ifstream fin("uh.in");
						//	int n, i;
						//	string text, cuvinte, caut, schimb, corect, text1;
						//	fin >> n;
						//	list<string> l;
						//	list<string>::reverse_iterator it, it1;
						//	string buffer;
						//	while (getline(fin, buffer)) 
						//	{
						//		l.push_front(buffer);
						//	}
						//
						//	for (list<string>::reverse_iterator it = l.rbegin(); it != l.rend(); it++)
						//		text = *it;
						//
						//	//text1 = text1 + " ";
						//	//cout << text1 << endl;
						//	l.pop_front();
						//	l.pop_back();
						//	int b, b1;
						//	it = l.rbegin();
						//	/*for (list<string>::reverse_iterator it = l.rbegin(); it != l.rend(); it++)
						//		cout << *it << endl;*/
						//	/*for(list<string>::reverse_iterator it=l.rbegin();it!=l.rend();it++)
						//	{
						//
						//		text = text1;
						//		caut = *it;
						//		it1 = it;
						//		cout << *it << " ";
						//		it1++;
						//		schimb = *it1;
						//		cout << *it1 << endl;
						//		while(text1.find(caut) != string::npos)
						//		{
						//			b = text1.find(caut);
						//			b1 = b + caut.size();
						//			text.replace(b, b1, schimb);
						//			text1.erase(b, b1 + 1);
						//			cout << text1 << endl;
						//		}
						//		it++;
						//		if (it == l.rend() or it1 == l.rend())
						//			break;
						//	}*/
						//	text = text + " ";
						//	int p = text.find(" ");
						//	bool ok = 1;
						//	while (p != string::npos)
						//	{
						//		cuvinte = text.substr(0, p);
						//		ok = 1;
						//		for(list<string>::reverse_iterator it=l.rbegin();it!=l.rend() and ok == 1;it++)
						//		{
						//			if (*it == cuvinte)
						//			{
						//				it++;
						//				corect = corect + " " + *it;
						//				ok = 0;
						//			}
						//		}
						//		if (ok == 1)
						//			corect = corect + " " + cuvinte;
						//		text.erase(0, p + 1);
						//		p = text.find(" ");
						//	}
						//	cout << corect;
						//	/*for (list<string>::reverse_iterator it = l.rbegin(); it != l.rend(); it++)
						//		cout << *it << endl;*/
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<string>
						//using namespace std;
						//ifstream fin("subtitrare.in");
						//ofstream fout("subtitrare.out");
						//string s, d;
						//int f1, f2;
						//int verifnum()
						//{
						//	if (s[0] >= '0' and s[0] <= '9')
						//	{
						//		return 1;
						//	}
						//	else
						//		return 0;
						//}
						//void transfrm()
						//{
						//	//00:00:02,000 --> 00:00:08,000
						//	//01234567890123456789012345678
						//	double r, f;
						//	f = 0;
						//	r = (s[0] - '0') * 10 + (s[1] - '0');
						//	f = f + r * 3600;
						//	r = (s[3] - '0') * 10 + (s[4] - '0');
						//	f = f + r * 60;
						//	r = (s[6] - '0') * 10 + (s[7] - '0');
						//	f = f + r;
						//	r = (s[9] - '0') * 0.1 + (s[10] - '0') * 0.01 + (s[11] - '0') * 0.001;
						//	f = f + r;
						//	f1 = int(f * 25);
						//	fout << "{" << f1 << "}";
						//	f = 0;
						//	r = (s[17] - '0') * 10 + (s[18] - '0');
						//	f = f + r * 3600;
						//	r = (s[20] - '0') * 10 + (s[21] - '0');
						//	f = f + r * 60;
						//	r = (s[23] - '0') * 10 + (s[24] - '0');
						//	f = f + r;
						//	r = (s[26] - '0') * 0.1 + (s[27] - '0') * 0.01 + (s[28] - '0') * 0.001;
						//	f = f + r;
						//	f2 = int(f * 25);
						//	fout << "{" << f2 << "}";
						//}
						//int main()
						//{
						//	while (getline(fin, s))
						//	{
						//		if (verifnum())
						//		{
						//			getline(fin, s);
						//			transfrm();
						//			int i = 0;
						//			while (getline(fin, s) and s != "")
						//			{
						//				if (i == 0)
						//					fout << s;
						//				else
						//					fout << "|" << s;
						//				i++;
						//			}
						//			fout << endl;
						//		}
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<string>
						//#include<vector>
						//using namespace std;
						//int main()
						//{
						//	ifstream fin("uh.in");
						//	ofstream fout("uh.out");
						//	string s;
						//	int i1 = 1;
						//	int p = 0, p1 = 0;
						//	//while (getline(fin, s))
						//	//{
						//	//	bool ok = 1;
						//	//	p = s.find_first_of("|");
						//	//	cuv = s.substr(p + 1);
						//	//	cuv.erase(cuv.size() - 1, 1);
						//	//	/*for (int i = 0; i < cuv.size(); i++)
						//	//	{
						//	//		cuv[i] = tolower(cuv[i]);
						//	//	};
						//	//	cuv = cuv + "    ";
						//	//	for (int i = 0; i < cuv.size() - 1 and ok == 1; i++)
						//	//	{
						//	//		if (cuv[i] == 'c')
						//	//		{
						//	//			if (cuv[i + 1] == '7' and cuv[i + 2] == '4')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 1] == '7')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 1] == '3' and cuv[i + 1] == '7')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 1] == 't')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 2] == '5' and cuv[i + 3] == '4')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//		}
						//	//		if ((cuv[i] == '6' and cuv[i + 1] == '3') or (cuv[i] == '4' and cuv[i + 1] == '3'))
						//	//		{
						//	//			if (cuv[i + 2] == '7' and cuv[i + 3] == '4')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 2] == '7')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 2] == '3' and cuv[i + 2] == '7')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 2] == 't')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//			if (cuv[i + 2] == '5' and cuv[i + 3] == '4')
						//	//				fout << i1 << " " << cuv << endl, ok = 0;
						//	//		}
						//	//	}*/
						//	//	i1++;
						//	//}
						//	vector < string > cuv, cuv1;
						//	cuv.resize(513);
						//	cuv1.resize(17);
						//	for (int i = 0; i < 513; i++)
						//		cuv[i].resize(16);
						//	for (int i = 0; i < 17; i++)
						//		cuv1[i].resize(513);
						//	int j = 0;
						//	while (getline(fin, s))
						//	{
						//		p = s.find_first_of("|");
						//		for (int i = p + 1; i < s.size() - 1; i++)
						//		{
						//			cuv[j][i - p - 1] = char(tolower(s[i]));
						//			cuv1[i - p - 1][j] = char(tolower(s[i]));
						//		}
						//		//fout << cuv[j] << endl;
						//		j++;
						//	}
						//	/*for (int i = 0; i < 512; i++)
						//	{
						//		int j = 0;
						//		bool ok = 1;
						//		while(j<16 and ok == 1)
						//		{
						//			if (cuv[i][j] == 'c')
						//			{
						//				if (cuv[i][j + 1] == 't')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if(cuv[i][j+1] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 1] == '7' and cuv[i][j + 2] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 1] == '3' and cuv[i][j + 2] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 1] == '5' and cuv[i][j + 2] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//			}
						//			if (cuv[i][j] == '6' and cuv[i][j+1]=='3')
						//			{
						//				if (cuv[i][j + 2] == 't')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '7' and cuv[i][j + 3] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '3' and cuv[i][j + 3] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '5' and cuv[i][j + 3] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//			}
						//			j++;
						//		}
						//	}*/
						//	for (int j = 0; j < 16; j++)
						//	{
						//		int i = 0;
						//		bool ok = 1;
						//		while (i < 512 and ok == 1)
						//		{
						//			if (cuv[i][j] == 'c')
						//			{
						//				if (cuv[i][j + 1] == 't')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 1] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 1] == '7' and cuv[i][j + 2] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 1] == '3' and cuv[i][j + 2] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 1] == '5' and cuv[i][j + 2] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//			}
						//			if (cuv[i][j] == '6' and cuv[i][j + 1] == '3')
						//			{
						//				if (cuv[i][j + 2] == 't')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '7' and cuv[i][j + 3] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '3' and cuv[i][j + 3] == '7')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//				if (cuv[i][j + 2] == '5' and cuv[i][j + 3] == '4')
						//					fout << i << " " << cuv[i] << endl, ok = 0;
						//			}
						//			i++;
						//		}
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//using namespace std;
						//int main()
						//{
						//	ofstream fout("uh.out");
						//	for (int i = 1; i <= 300; i++)
						//		fout << i << endl;
						//}
						//#include<iostream>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("uh.in");
						//struct asd
						//{
						//	int a, b;
						//} a, b;
						//double fractie(asd a)
						//{
						//	return a.a / a.b;
						//}
						//int cmmdc(int a, int b)
						//{
						//	if (b == 0)
						//		return a;
						//	else
						//		return cmmdc(b, a % b);
						//}
						//int main()
						//{
						//	cin >> a.a >> a.b >> b.a >> b.b;
						//	int x = cmmdc(a.a, a.b);
						//	a.a /= x;
						//	a.b /= x;
						//	x = cmmdc(b.a, b.b);
						//	b.a /= x;
						//	b.b /= x;
						//	if (fractie(a) > fractie(b))
						//		cout << a.a << " " << a.b;
						//	else
						//		cout << b.a << " " << b.b;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<algorithm>
						//using namespace std;
						//ifstream fin("qclasa.in");
						//ofstream fout("qclasa.out");
						//struct vect
						//{
						//	int cod, medie, absente;
						//};
						//bool sor(vect a, vect b)
						//{
						//	return a.absente > b.absente or (a.absente == b.absente and a.cod < b.cod);
						//}
						//int main()
						//{
						//	vector<vect> v;
						//	int n, medie = 0, nr = 0;
						//	fin >> n;
						//	for (int i = 0; i < n; i++)
						//	{
						//		int x, y, z;
						//		fin >> x >> y >> z;
						//		v.push_back({ x, y, z });
						//		medie = medie + y;
						//		if (y == 10)
						//			nr++;
						//	}
						//	sort(v.begin(), v.end(), sor);
						//	fout << nr << endl << medie / n << endl;
						//	for (int i = 0; i < 2; i++)
						//	{
						//		fout << v[i].cod << " " << v[i].medie << " " << v[i].absente << endl;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<queue>
						//using namespace std;
						//
						//#define Matrice vector<vector<int> >
						//
						//struct Cell
						//{
						//	int l, c;
						//};
						//
						//int main()
						//{
						//	Matrice M;
						//	int i, j, n, m, x, y, val;
						//	Cell start, crt, stop;
						//	queue<Cell> Q;
						//	vector<int> linie = { 0, -1, 0, 1, 0 };
						//	vector<int> coloana = { 0, 0, 1, 0, -1 };
						//	ifstream fin("alee.in");
						//	fin >> n >> m;
						//	M.resize(n + 2);//aloc memorie pentru matrice
						//	for (i = 0; i < n + 2; i++)
						//		M[i].resize(m + 2, 0);//aloc memorie pentru coloane
						//	for (i = 0; i < n + 2; i++)//bordez prima si ultima coloana
						//		M[i][0] = M[i][n + 1] = -1;
						//	for (j = 0; j < m + 2; j++)//bordez prima si ultima linie
						//		M[0][j] = M[n + 1][j] = -1;
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j <= m; j++)
						//		{
						//			fin >> M[i][j];
						//		}
						//	}
						//	fin >> start.l >> start.c;
						//	fin >> stop.l >> stop.c;
						//
						//	Q.push(start);
						//	M[start.l][start.c] = 1;
						//	while (M[stop.l][stop.c] == 0 and !Q.empty())
						//	{
						//		crt = Q.front();
						//		Q.pop();
						//		val = M[crt.l][crt.c];
						//		for (i = 1; i <= 4; i++)
						//			if (M[crt.l + linie[i]][crt.c + coloana[i]] == 0)
						//			{
						//				Q.push({ crt.l + linie[i], crt.c + coloana[i] });
						//				M[crt.l + linie[i]][crt.c + coloana[i]] = val + 1;
						//			}
						//	}
						//	cout << M[stop.l][stop.c] - 1;
						//	
						//	/*for (i = 0; i < n + 2; i++)
						//	{
						//		for (j = 0; j < m + 2; j++)
						//			cout << M[i][j] << " ";
						//		cout << endl;
						//	}*/
						//	
						//}
						//#include<iostream>
						//using namespace std;
						//int main()
						//{
						//	int n;
						//	cin >> n;
						//	int x;
						//	for (int i = 0; i < n; i++)
						//	{
						//		cin >> x;
						//		int s = 0, nrcrt = 1, ogl = 0;
						//		while (x)
						//		{
						//			ogl = ogl * 10 + x % 10;
						//			x /= 10;
						//		}
						//		cout << ogl << endl;
						//		while (ogl)
						//		{
						//			s = s + abs(nrcrt - ogl % 10);
						//			nrcrt = ogl % 10;
						//			ogl /= 10;
						//		}
						//		//cout << s;
						//	}
						//}
						//#include<vector>
						//#include<iostream>
						//#include<fstream>
						//using namespace std;
						//int i = 0, distcrt, ultnr = 0, nr = 0;
						//int n, l, r;
						//vector<int> v, v1;
						//void calcdis()
						//{
						//	l = i - 1;
						//	r = i + 1; 
						//	while (v[l] == -1)
						//		l--;
						//	while (v[r] == -1)
						//		r++;
						//	if (l < 0)
						//		l = 0;
						//	if (r > n)
						//		r = n+1;
						//	if (abs(distcrt - v[l]) <= abs(distcrt - v[r]))
						//	{
						//		ultnr = i;
						//		distcrt = v[l];
						//		v[l] = -1;
						//		i = l;
						//		nr++;
						//	}
						//	else
						//	{
						//		distcrt = v[r];
						//		v[r] = -1;
						//		i = r;
						//		ultnr = r;
						//		nr++;
						//	}
						//}
						//ifstream fin("uh.in");
						//int main()
						//{
						//	fin >> n;
						//	v.resize(n + 2);
						//	v1.resize(n + 2);
						//	for (int i = 1; i <= n; i++)
						//	{
						//		fin >> v1[i];
						//	}
						//	v1[0] = v1[n + 1] = -2147483647;
						//	for (int k = 2; k < n; k++)
						//	{
						//		v = v1;
						//		i = k;
						//		distcrt = v[i];
						//		v[i] = -1;
						//		nr = 0;
						//		while (nr < n - 1)
						//		{
						//			calcdis();
						//		}
						//		cout << ultnr;
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<queue>
						//using namespace std;
						//
						//struct Cell
						//{
						//	int l, c;
						//};
						//
						//int main()
						//{
						//	vector<vector<int> > M;
						//	int i, j, n, m, x, y, val;
						//	Cell start, crt, stop;
						//	queue<Cell> Q;
						//	vector<int> linie = { 0, -1, 0, 1, 0 };
						//	vector<int> coloana = { 0, 0, 1, 0, -1 };
						//	ifstream fin("alee.in");
						//	cin >> n >> m;
						//	M.resize(n + 2);//aloc memorie pentru matrice
						//	for (i = 0; i < n + 2; i++)
						//		M[i].resize(n + 2, 0);//aloc memorie pentru coloane
						//	for (i = 0; i < n + 2; i++)//bordez prima si ultima coloana
						//		M[i][0] = M[i][n + 1] = -1;
						//	for (j = 0; j < n + 2; j++)//bordez prima si ultima linie
						//		M[0][j] = M[n + 1][j] = -1;
						//	//citesc copacii
						//	for (i = 1; i <= m; i++)
						//	{
						//		cin >> x >> y;
						//		M[x][y] = -1;
						//	}
						//
						//	cin >> start.l >> start.c;
						//	cin >> stop.l >> stop.c;
						//
						//	Q.push(start);
						//	M[start.l][start.c] = 1;
						//	while (M[stop.l][stop.c] == 0 and !Q.empty())
						//	{
						//		crt = Q.front();
						//		Q.pop();
						//		val = M[crt.l][crt.c];
						//		for (i = 1; i <= 4; i++)
						//			if (M[crt.l + linie[i]][crt.c + coloana[i]] == 0)
						//			{
						//				Q.push({ crt.l + linie[i], crt.c + coloana[i] });
						//				M[crt.l + linie[i]][crt.c + coloana[i]] = val + 1;
						//			}
						//	}
						//	cout << M[stop.l][stop.c];
						//	/*
						//	for (i = 0; i < n + 2; i++)
						//	{
						//		for (j = 0; j < n + 2; j++)
						//			cout << M[i][j] << " ";
						//		cout << endl;
						//	}
						//	*/
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<queue>
						//using namespace std;
						//
						//struct Cell
						//{
						//	int l, c;
						//};
						//
						//void goleste(vector<vector<int>>& M, int &n)
						//{
						//	for (int i = 1; i <= n; i++)
						//		for (int j = 1; j <= n; j++)
						//			M[i][j] = 0;
						//
						//}
						//
						//int main()
						//{
						//	vector<vector<int> > M;
						//	vector<Cell> v;
						//	int i, j, n, m, x, y, val;
						//	Cell start, crt, stop;
						//	queue<Cell> Q;
						//	vector<int> linie = { 0, -1, 0, 1, 0 };
						//	vector<int> coloana = { 0, 0, 1, 0, -1 };
						//	int k;
						//	ifstream fin("alee.in");
						//	cin >> n >> m >> k;
						//	v.resize(k);
						//	M.resize(n + 2);//aloc memorie pentru matrice
						//	for (i = 0; i < n + 2; i++)
						//		M[i].resize(n + 2, 0);//aloc memorie pentru coloane
						//	for (i = 0; i < n + 2; i++)//bordez prima si ultima coloana
						//		M[i][0] = M[i][n + 1] = -1;
						//	for (j = 0; j < n + 2; j++)//bordez prima si ultima linie
						//		M[0][j] = M[n + 1][j] = -1;
						//	//citesc copacii
						//	for (i = 1; i <= m; i++)
						//	{
						//		cin >> x >> y;
						//		M[x][y] = -1;
						//	}
						//	for (i = 0; i < k; i++)
						//	{
						//		cin >> v[i].l >> v[i].c;
						//	}
						//	int min;
						//	Cell z1;
						//	z1.l = z1.c = 0;
						//	for (int j = 1; j <= n; j++)
						//	{
						//		start.l = j;
						//		for (int i = 1; i <= n; i++)
						//		{
						//			start.c = i;
						//			Q.push(start);
						//			min = 2147483647;
						//			z1.c = z1.l = -1;
						//			for(int x=0;x<k;x++)
						//			{
						//				goleste(M, n);
						//				stop = v[x];
						//				M[start.l][start.c] = 1;
						//				stop = v[i];
						//				while (M[stop.l][stop.c] == 0 and !Q.empty())
						//				{
						//					crt = Q.front();
						//					Q.pop();
						//					val = M[crt.l][crt.c];
						//					for (i = 1; i <= 4; i++)
						//						if (M[crt.l + linie[i]][crt.c + coloana[i]] == 0)
						//						{
						//							Q.push({ crt.l + linie[i], crt.c + coloana[i] });
						//							M[crt.l + linie[i]][crt.c + coloana[i]] = val + 1;
						//						}
						//				}
						//				if (min == 2147483647)
						//					cout << -1;
						//				else
						//					cout << min;
						//				cout << " ";
						//			}
						//		}
						//	}
						//	/*
						//	for (i = 0; i < n + 2; i++)
						//	{
						//		for (j = 0; j < n + 2; j++)
						//			cout << M[i][j] << " ";
						//		cout << endl;
						//	}
						//	*/
						//}
						//#include<iostream>
						//#include<vector>
						//#include<string>
						//#include<fstream>
						//using namespace std;
						//int verifpal(string s)
						//{
						//	int i, j;
						//	i = 0;
						//	j = s.size() - 1;
						//	while (i <= j)
						//	{
						//		if (s[i] != s[j])
						//			return 0;
						//		i++;
						//		j--;
						//	}
						//	return 1;
						//}
						//int main()
						//{
						//	ifstream fin("mare.in");
						//	ofstream fout("mare.out");
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	int n;
						//	fin >> n;
						//	vector<int> v;
						//	v.resize(n);
						//	for (int i = 0; i < n; i++)
						//		fin >> v[i];
						//	string s, s1, s2;
						//	for (int i = 0; i < n - 1; i++)
						//	{
						//		s = to_string(v[i]);
						//		for (int j = i + 1; j < n; j++)
						//		{
						//			s1 = to_string(v[j]);
						//			s = s + s1;
						//			//cout << s << endl;
						//			if (verifpal(s) == 1)
						//			{
						//				if (s.size() > s2.size())
						//					s2 = s;
						//			}
						//		}
						//	}
						//	fout << s2;
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//#include<algorithm>
						//using namespace std;
						//struct asd
						//{
						//	int a, b, ok;
						//};
						//bool sort1(asd a, asd b)
						//{
						//	return a.a < b.a or a.a == b.a and (b.a > b.b);
						//}
						//int main()
						//{
						//	ifstream fin("virus.in");
						//	ofstream fout("virus.out");
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	int n;
						//	fin >> n;
						//	vector<asd> v;
						//	for (int i = 0; i < n; i++)
						//	{
						//		bool ok = 0;
						//		int x, y;
						//		fin >> x >> y;
						//		for (int j = 0; j < v.size(); j++)
						//		{
						//			if (x <= v[j].a and y>=v[j].a)
						//			{
						//				v[j].a = x;
						//				ok = 1;
						//			}
						//			if (y >= v[j].b and x <= v[j].b)
						//			{
						//				v[j].b = y;
						//				ok = 1;
						//			}
						//			if (x >= v[j].a and y <= v[j].b)
						//				ok = 1;
						//		}
						//		if (ok == 0)
						//			v.push_back({ x, y });
						//		/*for (int j = 0; j < v.size(); j++)
						//			cout << v[j].a << " " << v[j].b << " " << x << " " << y << " " << i << endl;
						//		cout << '\n';
						//		cout << '\n';
						//		cout << '\n';
						//		cout << '\n';
						//		cout << '\n';
						//		cout << '\n';
						//		cout << '\n';*/
						//	}
						//	int max = -1, max1 = -1;
						//	sort(v.begin(), v.end(), sort1);
						//	for (int j = 0; j < v.size(); j++)
						//	{
						//		if (v[j].b - v[j].a > max)
						//			max = v[j].b - v[j].a;
						//		if (j < v.size() - 1)
						//		{
						//			if (abs(v[j].b - v[j + 1].a) > max1)
						//				max1 = abs(v[j].b - v[j + 1].a);
						//		}
						//	}
						//	/*for (int i = 0; i < v.size(); i++)
						//			cout << v[i].a << " " << v[i].b << endl;*/
						//	fout << max << " " << max1;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<set>
						//#include<map>
						//#include<vector>
						//#include<algorithm>
						//using namespace std;
						//struct asd
						//{
						//	int a, b;
						//};
						//bool sort1(asd a, asd b)
						//{
						//	return a.a < b.a or (a.a == b.a and a.b < b.b);
						//}
						//int main()
						//{
						//	vector<asd> v;
						//	asd x;
						//	ifstream fin("virus.in");
						//	ofstream fout("virus.out");
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	int n;
						//	fin >> n;
						//	v.resize(n);
						//	for (int i = 0; i < n; i++)
						//	{
						//		fin >> v[i].a >> v[i].b;
						//	}
						//	int max, max1;
						//	max = max1 = -1;
						//	sort(v.begin(), v.end(), sort1);
						//	vector<asd> v1(1);
						//	v1[0] = v[0];
						//	for (int i = 1; i < n; i++)
						//	{
						//		if (v[i].a <= v1[v1.size() - 1].b)
						//			if (v[i].b >= v1[v1.size() - 1].b)
						//				v1[v1.size() - 1].b = v[i].b;
						//			else;
						//		else
						//			v1.push_back(v[i]);
						//	}
						//
						//	for (int i = 0; i < v1.size(); i++)
						//	{
						//		if (v1[i].b - v1[i].a > max)
						//			max = v1[i].b - v1[i].a;
						//		if (i < v1.size() - 1)
						//		{
						//			if (v1[i + 1].a - v1[i].b > max1)
						//				max1 = v1[i + 1].a - v1[i].b;
						//		}
						//	}
						//	fout << max << " " << max1;
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//#include<algorithm>
						//#include<set>
						//using namespace std;
						//void func(int pp, int up, vector<int>& v1)
						//{
						//	for (int j = pp; j <= up; j++)
						//		v1[j] = 2;
						//}
						//struct asd
						//{
						//	int max, a, b;
						//};
						//int main()
						//{
						//	ifstream fin("");
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	int n;
						//	cin >> n;
						//	vector<int> v, v1(n + 1);
						//	multiset<asd> s;
						//	int k, m;
						//	cin >> m >> k;
						//	v.resize(m);
						//	for (int i = 0; i < m; i++)
						//	{
						//		cin >> v[i];
						//		v1[v[i]] = 1;
						//	}
						//	int pp, up, pp1, up1;
						//	sort(v.begin(), v.end());
						//	pp = v[0], up = v[v.size()-1];
						//	up++;
						//	int cnt = 0;
						//	multiset<asd>::iterator it;
						//	for (int i = pp - 2; i <= up + 1; i++)
						//	{
						//		if (v1[i] == 1)
						//		{
						//			cnt++;
						//			up1 = i;
						//		}
						//		else
						//		{
						//			if (s.size() <= k and cnt != 0)
						//			{
						//				s.insert({ k, pp1, up1 });
						//				int x = i;
						//				func(pp1, up1, v1);
						//			}
						//			else if(cnt!=0)
						//			{
						//				it = s.end();
						//				it--;
						//				if (cnt > *it)
						//					s.erase(it), s.insert(cnt);
						//				func(pp1, up1, v1);
						//			}
						//			//cout << cnt << endl;
						//			cnt = 0;
						//			pp1 = i + 1;
						//		}
						//	}
						//	for (int i = 0; i < n; i++)
						//		cout << v1[i] << " ";
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//#include<algorithm>
						//using namespace std;
						//struct asd
						//{
						//	int a, b, max, ok;
						//};
						//bool sort1(asd a, asd b)
						//{
						//	return a.max > b.max;
						//}
						//bool sort2(asd a, asd b)
						//{
						//	return a.a < b.a;
						//}
						//int min(int a, int b)
						//{
						//	if (a < b)
						//		return a;
						//	return b;
						//}
						//int main()
						//{
						//	ifstream fin("afise.in");
						//	ofstream fout("afise.out");
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	int n;
						//	fin >> n;
						//	vector<int> v1(n + 2);
						//	int k, m;
						//	fin >> m >> k;
						//	for (int i = 0; i < m; i++)
						//	{
						//		int x;
						//		fin >> x;
						//		v1[x] = 1;
						//	}
						//	vector<asd> v;
						//	int pp, up;
						//	pp = up = 1;
						//	for (int i = 1; i <= n; i++)
						//	{
						//		if (v1[i] == 1)
						//		{
						//			up = i;
						//		}
						//		else
						//		{
						//			if (v1[i-1]==1)
						//			{
						//				v.push_back({ pp, up, up - pp + 1, 0 });
						//			}
						//			pp = i + 1;
						//		}
						//	}
						//	sort(v.begin(), v.end(), sort1);
						//	for (int i = 0; i < min(k, v.size()); i++)
						//	{
						//		v[i].ok = 1;
						//	}
						//	sort(v.begin(), v.end(), sort2);
						//	int nr = 0;
						//	if (v[0].ok == 0)
						//	{
						//		nr += v[1].a - v[0].b;
						//	}
						//	else if (v[0].ok == 1)
						//	{
						//		nr += v[0].b - v[0].a + 1;
						//	}
						//#define v0 v.size()-1
						//	if (v[v0].ok == 0)
						//	{
						//		nr += v[v0].a - v[v0 - 1].b;
						//	}
						//	else
						//	{
						//		nr += v[v0].b - v[v0].a + 1;
						//	}
						//	for (int i = 1; i < v0; i++)
						//	{
						//		if (v[i].ok == 0)
						//		{
						//			if (v[i].a - v[i - 1].b < v[i + 1].a - v[i].b)
						//			{
						//				nr += v[i].a - v[i - 1].b;
						//			}
						//			else
						//				nr += v[i + 1].a - v[i].b;
						//		}
						//		else if(v[i].ok==1)
						//		{
						//			nr += v[i].b - v[i].a + 1;
						//		}
						//	}
						//	fout << nr << " " << min(v.size(), k) << endl;
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//#include<set>
						//#include<algorithm>
						//using namespace std;
						//#define ll long long
						//struct asd
						//{
						//	ll nr, ok;
						//};
						//struct rad
						//{
						//	ll i, f, lung;
						//};
						//bool cautbin(vector<ll> v, ll x, ll n)
						//{
						//	ll l, r;
						//	l = 0;
						//	r = n - 1;
						//	while (l <= r) {
						//		ll m = l + (r - l) / 2;
						//
						//		if (v[m] == x)
						//			return 1;
						//
						//		if (v[m] < x)
						//			l = m + 1;
						//		else
						//			r = m - 1;
						//	}
						//	return 0;
						//}
						//ll calcapr(vector<ll> fib, ll nr)
						//{
						//	/*for (int i = 0; i < fib.size() - 1; i++)
						//	{
						//		if (fib[i]<nr and fib[i + 1]>nr)
						//		{
						//			if (abs(fib[i] - nr) <= abs(fib[i + 1] - nr))
						//				return fib[i];
						//			else
						//				return fib[i + 1];
						//		}
						//	}
						//	cout << "?????";
						//	return 0;*/
						//	ll l, r;
						//	l = 0;
						//	r = fib.size() - 1;
						//	while (l <= r) 
						//	{
						//		ll m = l + (r - l) / 2;
						//
						//		if (fib[m] < nr and fib[m + 1]>nr)
						//		{
						//			if (abs(fib[m] - nr) <= abs(fib[m + 1] - nr))
						//				return fib[m];
						//			else
						//				return fib[m + 1];
						//		}
						//
						//		if (fib[m] < nr)
						//			l = m + 1;
						//		else
						//			r = m - 1;
						//	}
						//	cout<<"??????";
						//	return 0;
						//}
						////ll calcapr(multiset<ll> fib, ll nr)
						////{
						////	multiset<ll>::iterator l, r;
						////	r = lower_bound(fib.begin(), fib.end(), nr);
						////	r = l;
						////	l--;
						////	if (*l - nr <= *r - nr)
						////		return *l;
						////	else
						////		return *r;
						////}
						//int main()
						//{
						//	short c;
						//	ll n, m;
						//	ifstream fin("fibosnek.in");
						//	ofstream fout("fibosnek.out");
						//	fin.tie(0);
						//	ios::sync_with_stdio(0);
						//	fin >> c >> n >> m;
						//	ll max = -1;
						//	vector<asd> v(n * m);
						//	ll i, j;
						//	for (i = 0; i < n; i++)
						//	{
						//		for (j = 0; j < m; j++)
						//		{
						//			fin >> v[i + j * n].nr;
						//			if (v[i + j * n].nr > max)
						//				max = v[i + j * n].nr;
						//		}
						//	}
						//	vector<ll> fib = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073};
						//#define siz n*m
						//	if(c==1)
						//	{
						//		ll nr = 0, i;
						//		for (i = 0; i < siz; i++)
						//		{
						//			if (cautbin(fib, v[i].nr, fib.size()))
						//				nr++;
						//		}
						//		fout << nr;
						//	}
						//	else
						//	{
						//		ll nr, i;
						//		nr = 0;
						//		vector<rad> v2;
						//		for (i = 0; i < siz; i++)
						//		{
						//			if (cautbin(fib, v[i].nr, fib.size()))
						//			{
						//				v[i].ok = 1;
						//				nr++;
						//			}
						//			else
						//			{
						//				v[i].ok = 0;
						//				if (nr != 0)
						//					v2.push_back({ i - nr, i - 1, nr });
						//				nr = 0;
						//			}
						//		}
						//		if (nr != 0)
						//			v2.push_back({ i - nr, i - 1, nr });
						//		/*for (i = 0; i < siz; i++)
						//		{
						//			if (v[i].ok == 1)
						//			{
						//				nr++;
						//			}
						//			else
						//			{
						//				if (nr != 0)
						//					v2.push_back({ i - nr, i - 1, nr });
						//				nr = 0;
						//			}
						//		}
						//		if (nr != 0)
						//			v2.push_back({ i - nr, i - 1, nr });*/
						//		ll maxlung = -1;
						//		ll pozi, pozf;
						//		pozi = pozf = 0;
						//		for (i = 0; i < v2.size() - 1; i++)
						//		{
						//			if (v2[i + 1].f - v2[i].i + 1 > maxlung)
						//				maxlung = v2[i + 1].f - v2[i].i + 1, pozi = v2[i].i, pozf=v2[i+1].f;
						//		}
						//		ll sum = 0;
						//		for (i = pozi; i <= pozf; i++)
						//		{
						//			if (v[i].ok == 0)
						//			{
						//				v[i].nr = calcapr(fib, v[i].nr);
						//			}
						//			sum += v[i].nr;
						//		}
						//		fout << sum;
						//	}
						//	/*multiset<ll> fib;
						//	fib.insert({ 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073 });
						//#define siz n*m
						//	if(c==1)
						//	{
						//		int nr = 0;
						//		for (int i = 0; i < siz; i++)
						//		{
						//			if (fib.find(v[i].nr) != fib.end())
						//				nr++;
						//		}
						//		fout << nr;
						//	}
						//	else
						//	{
						//		int nr, i;
						//		nr = 0;
						//		vector<rad> v2;
						//		for (i = 0; i < siz; i++)
						//		{
						//			if (fib.find(v[i].nr)!=fib.end())
						//			{
						//				v[i].ok = 1;
						//				nr++;
						//			}
						//			else
						//			{
						//				v[i].ok = 0;
						//				if (nr != 0)
						//					v2.push_back({ i - nr, i - 1, nr });
						//				nr = 0;
						//			}
						//		}
						//		if (nr != 0)
						//			v2.push_back({ i - nr, i - 1, nr });
						//		int maxlung = -1;
						//		int pozi, pozf;
						//		pozi = pozf = 0;
						//		for (int i = 0; i < v2.size() - 1; i++)
						//		{
						//			if (v2[i + 1].f - v2[i].i + 1 > maxlung)
						//				maxlung = v2[i + 1].f - v2[i].i + 1, pozi = v2[i].i, pozf=v2[i+1].f;
						//		}
						//		ll sum = 0;
						//		for (int i = pozi; i <= pozf; i++)
						//		{
						//			if (v[i].ok == 0)
						//			{
						//				v[i].nr = calcapr(fib, v[i].nr);
						//			}
						//			sum += v[i].nr;
						//		}
						//		fout << sum;
						//	}*/
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<map>
						//#include<cmath>
						//using namespace std;
						//int main()
						//{
						//	ifstream fin("arhitect.in");
						//	ofstream fout("arhitect.out");
						//	fin.tie(0);
						//	ios::sync_with_stdio(0);
						//	int n;
						//	fin >> n;
						//	map<double, int> v;
						//	int nr = 0;
						//	for (int i = 0; i < n; i++)
						//	{
						//		int x1, y1;
						//		int x2, y2;
						//		double x;
						//		fin >> x1 >> y1 >> x2 >> y2;
						//		int y21, x21;
						//		y21 = abs(y2 - y1);
						//		x21 = abs(x2 - x1);
						//		if (x1 == x2 or y1 == y2)
						//			nr++;
						//		if (x1 < x2)
						//			x = abs(y21) * 1.0 / abs(x21) * 1.0;
						//		else
						//			x = abs(x21) * 1.0 / abs(y21) * 1.0;
						//		cout << atan(x) << endl;
						//		v[atan(x)]++;
						//	}
						//	int max1 = -1;
						//	for (map<double, int>::iterator it = v.begin(); it != v.end(); it++)
						//		if (it->second > max1)
						//			max1 = it->second;
						//	fout << max(max1, nr);
						//	//fout << max1;
						//}
						//#include<iostream>
						//#include<iomanip>
						//using namespace std;
						//class calcul
						//{
						//private:
						//	double x, y, z;
						//public:
						//	calcul(double x = 0, double y = 0, double z = 0)
						//	{
						//		this->x = x;
						//		this->y = y;
						//		this->z = z;
						//	}
						//	calcul operator/(const calcul& b)
						//	{
						//		calcul c;
						//		c.x = this->x / b.x;
						//		c.y = this->y / b.y;
						//		c.z = this->z / b.z;
						//		return c;
						//	}
						//	calcul operator*(const calcul& b)
						//	{
						//		calcul c;
						//		c.x = this->x * b.x;
						//		c.y = this->y * b.y;
						//		c.z = this->z * b.z;
						//		return c;
						//	}
						//	void switc(double x, double y, double z)
						//	{
						//		this->x = x;
						//		this->y = y;
						//		this->z = z;
						//	}
						//	void print()
						//	{
						//		cout << fixed << setprecision(30) << this->x << " " << this->y << " " << this->z;
						//	}
						//};
						//int main()
						//{
						//	/*public_base = (185328074730054:87402695517612 : 1)
						//
						//	Q1 = (184640716867876:45877854358580 : 1) # my public key
						//	Q2 = (157967230203538:128158547239620 : 1) # your public key
						//
						//	secret = ...
						//	my_private_key = ()
						//	assert(my_private_key * public_base == Q1)
						//	assert(my_private_key * Q2 == secret)*/
						//
						//	calcul Q2(157967230203538, 128158547239620, 1);
						//	calcul my_private_key(996291, 524902, 1000000), public_base(185328074730054, 87402695517612, 1), Q1(184640716867876, 45877854358580, 1);
						//	my_private_key = Q1 / public_base;
						//	calcul secret;
						//	secret = my_private_key * Q2;
						//	secret.print();
						//	secret.switc(157381350175349937500 : 67270684619580296875 : 1000000)
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<algorithm>
						//using namespace std;
						//int binary(int x, vector<long long> v)
						//{
						//	int l = 0, r=v.size()-1, m = (l + r)/2;
						//	while (l <= r)
						//	{
						//		m = (l + r) / 2;
						//		if (v[m] == x)
						//			return m;
						//		else
						//			if (v[m] < x)
						//				l = m + 1;
						//			else
						//				r = m - 1;
						//	}
						//	if (abs(v[m - 1] - x) <= abs(v[m] - x))
						//		return -(m - 1);
						//	else
						//		return -m;
						//}
						//int main()
						//{
						//	ifstream fin("fibosnek.in");
						//	int c, n, m;
						//	fin >> c >> n >> m;
						//	ofstream fout("fibosnek.out");
						//	vector<long long> fibo{1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903 };
						//	fibo.push_back(fibo[fibo.size() - 2] + fibo[fibo.size() - 1]);
						//	if (c == 1)
						//	{
						//		int nr = 0;
						//		for (int i = 0; i < n * m; i++)
						//		{
						//			int x;
						//			fin >> x;
						//			if (binary_search(fibo.begin(), fibo.end(), x))
						//				nr++;
						//		}
						//	}
						//	else
						//	{
						//		int x;	
						//		vector<short> v(n*m);
						//		for (int i = 0; i < n; i++)
						//		{
						//			for(int j=0;j<m;j++)
						//			{
						//				fin >> x;
						//				int max = 0;
						//				for (int asdas = 1; asdas < fibo.size(); asdas++)
						//					if (abs(x - fibo[max]) > abs(x - fibo[asdas]))
						//						max = asdas;
						//				if (x - fibo[max] == 0)
						//					max = -max;
						//				v[i + j * n] = max;
						//			}
						//		}
						//		int j, l1, s1, l2, s2, l3, s3, lmax = 0, s = 0, i = 0;
						//		while(i < v.size())
						//		{
						//			j = i;
						//			l1 = s1 = l2 = s2 = l3 = s3 = 0;
						//			while (j < v.size() and v[j] >= 0)
						//			{
						//				l1++;
						//				s1 += fibo[v[j]];
						//				j++;
						//			}
						//			while (j < v.size() and v[j] < 0)
						//			{
						//				l2++;
						//				s2 += fibo[abs(v[j])];
						//				j++;
						//			}
						//			i = j;
						//			while (j < v.size() and v[j] >= 0)
						//			{
						//				l3++;
						//				s3 += fibo[v[j]];
						//				j++;
						//			}
						//			if (lmax < l1 + l2 + l3)
						//			{
						//				lmax = l1 + l2 + l3;
						//				s = s1 + s2 + s3;
						//			}
						//		}
						//		fout << s;
						//	}
						//}
						/*#define _CRT_SECURE_NO_WARNINGS
						#include<iostream>
						#include<cstring>
						using namespace std;
						int main()
						{
							int n, i=0;
							char t[100], p[100];
							cin >> n;
							cin.getline(t, 100);
							for (i = 1; i <= n; i++)
							{
								cin.getline(t, 100);
								if (i == 1)
									strcpy(p, t);
								if (strlen(t) < strlen(p))
									strcpy(p, t);
							}
							cout << p;
						}*/
						/*#define _CRT_SECURE_NO_WARNINGS
						#include<iostream>
						#include<cstring>
						using namespace std;
						int main()
						{
							int n, i = 0, max = 0, j, nr = 0;
							char t[100], p[100];
							cin >> n;
							cin.getline(t, 100);
							for (i = 1; i <= n; i++)
							{
								nr = 0;
								cin.getline(t, 100);
								for (j = 0; j < strlen(t); j++)
									if (strchr("AEIOUaeiou", t[j]))
										nr++;
								if (nr > max)
								{
									max = nr;
									strcpy(p, t);
								}
							}
							cout << p;
						}*/
						/*#define _CRT_SECURE_NO_WARNINGS
						#include<iostream>
						#include<cstring>
						using namespace std;
						int main()
						{
							char x[100], y[100];
							char* p;
							cin.getline(x, 100);
							cin.getline(y, 100);
							p = strstr(x, y);
							if (p != 0 and strlen(p) == strlen(y))
								cout << "DA";
						}*/
						/*#define _CRT_SECURE_NO_WARNINGS
						#include<iostream>
						#include<cstring>
						using namespace std;
						int main()
						{
							char x[100], y[100];
							char* p;
							cin.getline(x, 100);
							cin.getline(y, 100);
							p = strstr(x, y);
							if (p != 0 and strlen(p) == strlen(x))
								cout << "DA";
						}*/
						/*#define _CRT_SECURE_NO_WARNINGS
						#include<iostream>
						#include<cstring>
						using namespace std;
						int main()
						{
							char x[100], y[100];
							char* p;
							int n, i = 0, nr = 0;
							cin >> n;
							cin.getline(x, 100);
							strcpy(y, x);
							for (i = 0; i < n; i++)
							{
								cin.getline(x, 100);
								p = strstr(y, x);
								if (p != 0 and strlen(p) == strlen(y))
									nr++;
								strcpy(y, x);
							}
							cout << nr;
						}*/
						//#include<iostream>
						//#include "adunare vector.h"
						//using namespace std;
						//int main()
						//{
						//	vect a({ 1, 2, 3 }), b({ 1, 2, 3 }), c;
						//	c = a + b;
						//	cout << c;
						//}
						//#include<iostream>
						//#include "numere mari.h"
						//using namespace std;
						//int main()
						//{
						//	adun a({ 1, 0, 2, 3, 1 }), b({ 0, 0, 1, 1, 2 });
						//	adun c;
						//	c = a + b;
						//	//cout << c;
						//}
						//#define _CRT_SECURE_NO_WARNINGS
						//#include <stdio.h>
						//
						//int main() {
						//	int n, a, b, primul;
						//
						//	scanf("%d%d", &n, &a);
						//	primul = a;
						//
						//	int caderi = 0;
						//
						//	for (int i = 1; i < n; ++i) {
						//		scanf("%d", &b);
						//
						//		// Daca elementul anterior este mai mare decat elementul curent
						//		if (a > b)
						//			caderi++;
						//
						//		a = b;
						//	}
						//	if (caderi == 1 or caderi == 0)
						//		printf("DA");
						//	else
						//		printf("NU");
						//	// TODO
						//
						//	return 0;
						//}
						//#include <iostream>
						//using namespace std;
						//
						//int convert_to_binary(int n, int result[10]) {
						//	int i;
						//	for (i = 0; n > 0; ++i) {
						//		result[i] = n % 2;
						//		n = n / 2;
						//	}
						//
						//	return i;
						//}
						//
						//int main()
						//{
						//	// "Print the solution, you must" - Yoda
						//	int a[10] = { 0 }, n, no_elements;
						//	cin >> n;
						//
						//	no_elements = convert_to_binary(n, a);
						//
						//	for (int i = n-1; i >=0; i--) {
						//		cout << a[i];
						//	}
						//}
						//#include <iostream>
						//using namespace std;
						//
						//#define TRUE 1
						//#define FALSE 0
						//
						//int check_pages_parity(int pages[], int vector_size) {
						//
						//	for (int i = 0; i < vector_size; i++) {
						//		if (pages[i] % 2 == 1) {
						//			return FALSE;
						//		} /*else {
						//			return TRUE;
						//		}*/
						//	}
						//
						//	return TRUE;
						//}
						//
						//int main() {
						//	int vector_size, i;
						//	int pages[2000];
						//
						//	cin >> vector_size;
						//
						//	if (vector_size > 2000) {
						//		return 1;
						//	}
						//
						//	for (i = 0; i < vector_size; i++) {
						//		cin >> pages[i];
						//	}
						//
						//	if (check_pages_parity(pages, vector_size) == TRUE) {
						//		cout << "Numarul de pagini al tuturor cartilor este par." << endl;
						//	}
						//	else {
						//		cout << "Unele carti au numar de pagini impar." << endl;
						//	}
						//
						//	return 0;
						//}
						//#include <iostream>
						//using namespace std;
						//
						//#define NMAX 10000
						//
						//int v1[NMAX];
						//
						//int main() {
						//	int x, n1 = 0;
						//	int cnt = 0, found = 0;
						//
						//	// Citeste primul vector
						//	while (1) {
						//		cin >> x;
						//
						//		if (x != 0)
						//			v1[n1++] = x;
						//		else
						//			break;
						//	}
						//
						//	while (1) {
						//		cnt += found;
						//		found = 0;
						//
						//		cin >> x;
						//
						//		if (x != 0)
						//		{
						//			for (int i = 0; i < n1; i++)
						//				if (v1[i] == x)
						//					found = 1;
						//		}
						//		else
						//			break;
						//	}
						//
						//	cout << cnt + found << '\n';
						//
						//	return 0;
						//}
						//#include <vector>
						//#include<iostream>
						//using namespace std;
						//
						//// You can't use any of the following words: for, while, return, begin, end, goto.		// You can NOT edit this
						//auto sum(const std::vector<int>& v, const int left, const int right) {					// You can edit this
						//	if (left >= right) {																// You can edit this
						//		return v[left]; 																// You can edit this
						//	}
						//	else {
						//		auto mid = left + (right - left) >> 1;											// You can edit this
						//		int res = sum(v, left, mid - 1) + sum(v, mid + 1, right) + v[mid];				// You can edit ths
						//		return res;																		// You can NOT edit this
						//	}
						//}
						//
						//int main() {
						//	int n;                                                  							// You can NOT edit this
						//	std::vector<int> v;																	// You can NOT edit this
						//	std::cin >> n;																		// You can NOT edit this
						//	v.resize(n); 																		// You can NOT edit this
						//	// You can NOT edit this
						//	for (int i = 0; i < n; i++) {														// You can NOT edit this
						//		std::cin >> v[i];																// You can NOT edit this
						//	}																					// You can NOT edit this
						//	std::cout << sum(v, 0, v.size() - 1) << "\n";										// You can NOT edit this
						//	return 0;																			// You can NOT edit this
						//}
						//#define _CRT_SECURE_NO_WARNINGS
						//#include<stdio.h>
						//
						//int main()
						//{
						//	int n;
						//	scanf("%d", &n);
						//	int m = n * (n + 1) / 2;
						//
						//	int sum = 0;
						//	for (int i = 0; i <= n; ++i)
						//		sum += i;
						//
						//	printf("Suma primelor %d numere este %d = %d\n", n, m, sum);
						//}
						//#include <iostream>
						//#include <string>
						//
						//
						//std::string parse_10digit_number(std::string number) {
						//	std::string result;
						//	return number.substr(0, 4) + " " + number.substr(4, 3) + " " + number.substr(7, 3);
						//}
						//
						//
						//std::string parse_phone_number(std::string number) {
						//	switch (number.size()) {
						//	case 10:
						//		return "(004) " + parse_10digit_number(number);
						//	case 12:
						//		return "(004) " + parse_10digit_number(number.substr(2, number.size() - 2));
						//	case 13:
						//		return "(004) " + parse_10digit_number(number.substr(3, number.size() - 3));
						//	default:
						//		return "";
						//	}
						//}
						//
						//
						//int main() {
						//	int size;
						//	std::string phone_number;
						//	std::cin >> size;
						//	for (int i = 0; i < size; i++) {
						//		std::cin >> phone_number;
						//		std::cout << parse_phone_number(phone_number) << std::endl;
						//	}
						//}
						//#define _CRT_SECURE_NO_WARNINGS
						//#include<stdio.h>
						//
						//int a[100][100], b[100][100], c[100][100];
						//
						//int i, j, k, m, n, p;
						//
						//int main()
						//{
						//	scanf("%d%d%d", &n, &m, &p);
						//
						//	for (i = 0; i < n; ++i) {
						//		for (j = 0; j < m; ++j) {
						//			scanf("%d", &a[i][j]);
						//		}
						//	}
						//
						//	for (i = 0; i < m; ++i) {
						//		for (j = 0; j < p; ++j) {
						//			scanf("%d", &b[i][j]);
						//		}
						//	}
						//
						//	for (i = 0; i < n; ++i) {
						//		for (j = 0; j < p; ++j) {
						//			for (i = 0; i < m; ++i) {
						//				c[i][j] += a[i][k] * b[k][j];
						//			}
						//		}
						//	}
						//
						//	for (i = 0; i < n; ++i) {
						//		for (j = 0; j < p; ++j) {
						//			printf("%d\t", c[i][j]);
						//		}
						//		printf("\n");
						//	}
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<string>
						//using namespace std;
						//class adun
						//{
						//protected:
						//	string s;
						//public:
						//	adun(string s = 0)
						//	{
						//		this->s = s;
						//	}
						//	friend ostream& operator<<(ostream& os, const adun& obj) {
						//		os << obj.s;
						//		return os;
						//	}
						//	bool isSmaller(string str1, string str2)
						//	{
						//		int n1 = str1.length(), n2 = str2.length();
						//
						//		if (n1 < n2)
						//			return true;
						//		if (n2 < n1)
						//			return false;
						//
						//		for (int i = 0; i < n1; i++) {
						//			if (str1[i] < str2[i])
						//				return true;
						//			else if (str1[i] > str2[i])
						//				return false;
						//		}
						//		return false;
						//	}
						//	adun operator%(const adun& obji)
						//	{
						//		adun obj = obji;
						//		adun obj2 = s;
						//		adun d = obj2 - obj;
						//		while (d.s[0] != '-')
						//		{
						//			obj2 = obj2 - obj;
						//			d = d - obj;
						//		}
						//		return obj2;
						//	}
						//	string transf(int nr1)
						//	{
						//		return to_string(nr1);
						//	}
						//	adun operator/(const adun& obji)
						//	{
						//		adun obj = obji;
						//		adun obj2 = s;
						//		adun d = obj2 - obj;
						//		int nr1 = 0;
						//		while (d.s[0] != '-')
						//		{
						//			obj2 = obj2 - obj;
						//			d = d - obj;
						//			nr1++;
						//		}
						//		return transf(nr1);
						//	}
						//	string revers(string str)
						//	{
						//		string str1;
						//		for (int i = 0; i < str.length(); i++)
						//			str1.push_back(str[str.length()-1-i]);
						//		return str1;
						//	}
						//	adun operator-(const adun& obj)
						//	{
						//		string str1 = s;
						//		string str2 = obj.s;
						//		bool ok = 1;
						//		if (isSmaller(str1, str2))
						//			swap(str1, str2), ok = 0;
						//
						//		string str = "";
						//
						//		int n1 = str1.length(), n2 = str2.length();
						//		int diff = n1 - n2;
						//
						//		int carry = 0;
						//
						//		for (int i = n2 - 1; i >= 0; i--) {
						//			int sub = ((str1[i + diff] - '0') - (str2[i] - '0') - carry);
						//			if (sub < 0) {
						//				sub = sub + 10;
						//				carry = 1;
						//			}
						//			else
						//				carry = 0;
						//
						//			str.push_back(sub + '0');
						//		}
						//
						//		for (int i = n1 - n2 - 1; i >= 0; i--) {
						//			if (str1[i] == '0' and carry) {
						//				str.push_back('9');
						//				continue;
						//			}
						//			int sub = ((str1[i] - '0') - carry);
						//			if (i > 0 or sub > 0)
						//				str.push_back(sub + '0');
						//			carry = 0;
						//		}
						//		if (ok == 0)
						//			str.push_back('-');
						//		str = revers(str);
						//		return str;
						//	}
						//};
						//int main()
						//{
						//	ifstream fin("pomi.in");
						//	ofstream fout("pomi.out");
						//	int a1, b1, k1;
						//	fin >> a1 >> b1 >> k1;
						//	adun a(to_string(a1)), b(to_string(b1)), k(to_string(k1));
						//	fout << (b - a) / k;
						//}
						//#include <iostream>
						//
						//#define N 2586134
						//
						//unsigned int _ = 0;
						//
						//int reference(int a);
						//
						//void add(int __) {
						//	_ += __;
						//}
						//
						//void add_again(int __) {
						//	_ += __ + 2;
						//}
						//
						//void add_once_again(int __) {
						//	_ += __ * 3 + 2;
						//}
						//
						//void compute_number(int mySweetVar) {
						//	if (mySweetVar % 2 == 0)
						//		for ( int i = N; i >= 0; i--)
						//			add(i);
						//	else if (mySweetVar % 3 == 0)
						//		for (int i = N; i >= 0; i--)
						//			add_again(i);
						//	else
						//		for ( int i = N; i >= 0; i--)
						//			add_once_again(i);
						//}
						//
						//int main(void) {
						//	int mySweetVar;
						//	std::cin >> mySweetVar;
						//	_ = mySweetVar;
						//	compute_number(mySweetVar);
						//	std::cout << _ << "\n";
						//}
						//
						//#include <iostream>
						//#include <stdlib.h>
						//
						//int main(void)
						//{
						//	int a,
						//		b = 0;
						//	srand(66);
						//	a = rand();                     // This is
						//	b = rand();                     // "pure luck" :/
						//	    if ((a == b) && (a-1 == b-1))
						//	{
						//		std::cout << "fail\n";
						//		return 0;
						//	}
						//	std::cout << "success\n";
						//	return 0;
						//}
						//#include <iostream>
						//using namespace std;
						//
						//bool is_prime(int x) {
						//	for (int i = 2; i * i <= x; i++)
						//		if (x % i == 0)
						//			return false;
						//
						//	return true;
						//}
						//
						//int execute()
						//{
						//	int n;
						//	cin >> n;
						//	for (int i = 0; i < n; i++)
						//		if (is_prime(i))
						//			cout << i << " ";
						//	return 1;
						//}
						//
						//static int s = execute();
						//
						//int main() { return 0; }
						//#include <iostream>
						//#include <iomanip>
						//
						//
						//const double PI = 3.14159265;
						//
						//int main() {
						//	int n, a, b;
						//
						//	// this is fine
						//	std::cout << std::fixed;
						//
						//	std::cin >> n;
						//	for (int i = 0; i < n; i++)
						//	{
						//		std::cin >> a >> b;
						//		std::cout << PI * a * b << std::endl;
						//	}
						//
						//	return 0;
						//}
						//#include <iostream>
						//#include <vector>
						//
						//
						//std::vector<int> prime_factors(int n);
						//
						//
						//int main() {
						//	int n;
						//
						//	std::cin >> n;
						//	auto factors = prime_factors(n);
						//
						//	std::cout << n * factors[factors.size()-1] << std::endl;
						//}
						//
						//
						//std::vector<int> prime_factors(int n) {
						//	std::vector<int> factors;
						//
						//	for (int i = 2; i <= n; i++) {
						//		while (n % i == 0) {
						//			factors.push_back(i);
						//			n /= i;
						//		}
						//	}
						//
						//	return factors;
						//}
						//#include <iostream>
						//#include <vector>
						//#include <algorithm>
						//
						//
						//class Statistics {
						//	std::vector<int> numbers;
						//
						//public:
						//	Statistics() {
						//		numbers.clear();
						//		int tmp;
						//
						//		while (std::cin >> tmp) {
						//			numbers.push_back(tmp);
						//		}
						//	}
						//
						//	int sum() {
						//		int s = 0;
						//
						//		for (auto n : numbers)
						//			s += n;
						//
						//		return s;
						//	}
						//
						//	float median() {
						//		const auto middle_itr = numbers.begin() + numbers.size() / 2;
						//		std::nth_element(numbers.begin(), middle_itr, numbers.end());
						//
						//		if (numbers.size() % 2 == 0) {
						//			const auto left_mid_itr = std::max_element(numbers.begin(), middle_itr);
						//			return (*left_mid_itr + *middle_itr) / 2;
						//		}
						//		else {
						//			return *middle_itr;
						//		}
						//	}
						//
						//	float mean() {
						//		return (float)sum() / numbers.size();
						//	}
						//};
						//
						//
						//int main() {
						//	Statistics stats;
						//
						//	std::cout << stats.sum()
						//		<< " " << stats.median()
						//		<< " " << stats.mean() << std::endl;
						//
						//	return 0;
						//}
						//#include<iostream>
						//
						//using namespace std;
						//
						//int main()
						//{
						//	unsigned long long a, b;
						//	cin >> a >> b;
						//	if ((a * b) > ULLONG_MAX) { // Poti modifica doar aceasta linie!
						//		cout << "Nu";
						//	}
						//	else {
						//		cout << "Da";
						//	}
						//	return 0;
						//}
						//#include <iostream>
						//#include <vector>
						//#include <fstream>
						//#include <algorithm>
						//using namespace std;
						//
						//double find_best_phone(std::vector<int>& phones) {
						//	sort(phones.begin(), phones.end());
						//	int number_phones = phones.size();
						//	if (number_phones % 2 == 1) {
						//		return phones[number_phones / 2];
						//	}
						//	else {
						//		return double((phones[(number_phones / 2) - 1] + phones[number_phones / 2])) / 2.0;
						//	}
						//}
						//
						//
						//int main() {
						//	int n;
						//	ifstream fin("input.txt");
						//	fin >> n;
						//	vector<int> phones( n, 0 );
						//	for (int i = 0; i < n; ++i) {
						//		fin >> phones[i];
						//	}
						//
						//	ofstream fout("output.txt");
						//	fout << find_best_phone(phones) << "\n";
						//	fin.close();
						//	fout.close();
						//	return 0;
						//}
						/*
						AcadNet 2020
						Author: Alexandru Razvan Caciulescu
						*/

						//#include <iostream>
						//#include <stdio.h>
						//#include <string.h>
						//#include <stdlib.h>
						//#include <time.h>
						//
						//#define LINES           1024
						//#define LINE_LENGTH     20
						//
						//using namespace std;
						//
						//char db[LINES][LINE_LENGTH];
						//
						//int restricted;
						//bool looged_in = false;
						//const char* secret = "very_hidden_secret_which_should_not_be_seen";
						//
						//const char alphanum[] = "abcdefghijklmnopqrstuvwxyz0123456789";
						//
						//void send_password_to_admin()
						//{
						//	// a blackmagic implementation that has been lost in the depths of time
						//}
						//
						//void assign_password()
						//{
						//	int line = rand() % (LINE_LENGTH - 1) + 1;
						//	for (int i = 0; i < LINE_LENGTH; i++) {
						//		db[line][i] = alphanum[rand() % strlen(alphanum)];
						//	}
						//	restricted = line;
						//
						//	send_password_to_admin();
						//}
						//
						//void write_line(int line, const char* word, int word_length)
						//{
						//	if (line == restricted)
						//	{
						//		cerr << "Warning: Attempted to write on a restricted line. Choose another line." << endl;
						//	}
						//	else if (line >= 0 && line < LINES)
						//	{
						//		memset((*(db + line - 1) + LINE_LENGTH), 0, LINE_LENGTH);
						//		memcpy((*(db + line - 1) + LINE_LENGTH), word, word_length);
						//	}
						//	else
						//	{
						//		cerr << "Error: Attempted to write a line outside the bounds of the DB! Terminating program..." << endl;
						//		exit(1);
						//	}
						//}
						//
						//void read_line(int line)
						//{
						//	if (line == restricted)
						//	{
						//		cerr << "Warning: Attempted to read on a restricted line. Choose another line." << endl;
						//		return;
						//	}
						//	for (int j = 0; j < LINE_LENGTH; j++)
						//	{
						//		cout << db[line][j] << ".";
						//	}
						//	cout << endl;
						//}
						//
						//void login(char* input)
						//{
						//	if (strncmp(input, db[restricted], LINE_LENGTH) == 0)
						//	{
						//		cout << "Login successful!" << endl;
						//		looged_in = true;
						//	}
						//	else
						//	{
						//		cerr << "Failed to log in, password incorrect!" << endl;
						//	}
						//
						//}
						//
						//void print_db()
						//{
						//	for (int i = 0; i < LINES; i++)
						//	{
						//		for (int j = 0; j < LINE_LENGTH; j++)
						//		{
						//			if (i == restricted)
						//				cout << "#" << ".";
						//			else
						//				cout << db[i][j] << ".";
						//		}
						//		cout << endl;
						//	}
						//	cout << endl;
						//}
						//
						//int main()
						//{
						//	char black_magic[69420];
						//	memset(black_magic, 0, 42069);
						//
						//	char command;
						//	char input[LINE_LENGTH];
						//	int line;
						//
						//	srand(time(0));
						//	assign_password();
						//
						//	cout << "Welcome to Crack the Database!" << endl;
						//	print_db();
						//
						//	memset(input, 0, LINE_LENGTH);
						//	cout << "Enter your command:" << endl;
						//	while (gets(input))
						//	{
						//		switch (input[0])
						//		{
						//		case 'R':
						//			if (!gets(input)) goto input_error;
						//			line = atoi(input);
						//			read_line(line);
						//			break;
						//		case 'W':
						//			if (!gets(input)) goto input_error;
						//			line = atoi(input);
						//			if (!gets(input)) goto input_error;
						//			write_line(line, input, strlen(input));
						//			break;
						//		case 'L':
						//			if (!gets(input)) goto input_error;
						//			login(input);
						//			break;
						//		case 'S':
						//			if (!looged_in) goto input_error;
						//			cout << "Secret revealed: " << secret << endl;
						//			break;
						//		case 'P':
						//			print_db();
						//			break;
						//		case 'Q':
						//			exit(0);
						//		default:
						//			goto input_error;
						//			break;
						//		}
						//		memset(input, 0, LINE_LENGTH);
						//		memset(black_magic, 0, 42069);
						//	}
						//
						//input_error:
						//	cerr << "Error: command not recognized or insufficient rights, terminating program..." << endl;
						//	exit(1);
						//}
						/*
							Acadnet 2017 - Etapa Judeteana
							Problema A
						*/

						//#define _CRT_SECURE_NO_WARNINGS
						//#include <iostream>
						//#include<fstream>
						//#include <limits.h>
						//#include <vector>
						//
						//using namespace std;
						//
						//int compute_min(const vector<int>& v)
						//{
						//	int min = INT_MAX, i;
						//
						//	for (i = 0; i < v.size(); i++)
						//		if (min > v[i])
						//			min = v[i];
						//
						//	return min;
						//}
						//
						//int count_3min(const vector<int>& v, int min)
						//{
						//	int cnt = 0, i;
						//
						//	for (i = 0; i < v.size(); i++)
						//		if (3 * min > v[i])
						//			cnt++;
						//
						//	return cnt;
						//}
						//
						//int main()
						//{
						//	vector<int> v;
						//	int min, n, i, cnt;
						//
						//	cin >> n;
						//	v.resize(n, 0);
						//
						//	for (i = 0; i < n; i++)
						//		cin >> v[i];
						//
						//	min = compute_min(v);
						//	printf("%d ", min);
						//	cnt = count_3min(v, min);
						//	printf("%d\n", cnt);
						//
						//	return 0;
						//}
						//#include <iostream>
						//
						//using namespace std;
						//
						//bool is_prime(int x) {
						//	if (x == 1) {
						//		return false;
						//	}
						//	for (int d = 2; d * d <= x; d++) {
						//		if (x % d == 0) {
						//			return false;
						//		}
						//	}
						//
						//	return true;
						//}
						//
						//bool is_special_sum(int x) {
						//	for (int a = 1; a < x; a++) {
						//		int p = x - a * a;
						//		if (p > 0 and is_prime(p)) {
						//			cout << p << " " << a << endl;
						//			return true;
						//		}
						//	}
						//	return false;
						//}
						//
						//int main() {
						//	int n, x;
						//
						//	cin >> n;
						//	for (int i = 0; i < n; i++) {
						//		cin >> x;
						//
						//		if (is_special_sum(x)) {
						//			cout << "Yes\n";
						//		}
						//		else {
						//			cout << "No\n";
						//		}
						//	}
						//}
						//#include <vector>
						//#include <iostream>
						//#include <fstream>
						//
						//using namespace std;
						//
						//void flood_island(vector <vector < char >>& grid, int r, int c) {
						//	int nr = grid.size();
						//	int nc = grid[0].size();
						//
						//	grid[r][c] = '0';
						//	if (r - 1 >= 0 && grid[r - 1][c] == '1') flood_island(grid, r - 1, c);
						//	if (r + 1 < nr && grid[r + 1][c] == '1') flood_island(grid, r + 1, c);
						//	if (c - 1 >= 0 && grid[r][c - 1] == '1') flood_island(grid, r, c - 1);
						//	if (c + 1 < nc && grid[r][c + 1] == '1') flood_island(grid, r, c + 1);
						//	if (r - 1 >= 0 and c - 1 >= 0 && grid[r - 1][c - 1] == '1') flood_island(grid, r - 1, c - 1);
						//	if (r + 1 < nr and c + 1 < nc && grid[r + 1][c + 1] == '1') flood_island(grid, r + 1, c + 1);
						//	if (c - 1 >= 0 and r + 1 < nr && grid[r + 1][c - 1] == '1') flood_island(grid, r + 1, c - 1);
						//	if (c + 1 < nc  and r - 1 >= 0 && grid[r - 1][c + 1] == '1') flood_island(grid, r - 1, c + 1);
						//}
						//
						//int numIslands(vector < vector < char >>& grid) {
						//	int nr = grid.size();
						//	if (!nr) return 0;
						//	int nc = grid[0].size();
						//
						//	int num_islands = 0;
						//	for (int r = 0; r < nr; ++r) {
						//		for (int c = 0; c < nc; ++c) {
						//			if (grid[r][c] == '1') {
						//				++num_islands;
						//				flood_island(grid, r, c);
						//			}
						//		}
						//	}
						//
						//	return num_islands;
						//}
						//
						//int main(int argc, char* argv[]) {
						//	int r, c;
						//	char ch;
						//	cin >> r >> c;
						//
						//	vector<vector<char>> earth_sea;
						//
						//	for (int i = 0; i < r; ++i) {
						//		vector<char> v;
						//		for (int j = 0; j < c; ++j) {
						//			cin >> ch;
						//			v.push_back(ch);
						//		}
						//		earth_sea.push_back(v);
						//	}
						//
						//	cout << numIslands(earth_sea) << endl;
						//
						//	return 0;
						//}
						//#include<iostream>
						//#include<unordered_map>
						//#include<fstream>
						//using namespace std;
						//int main()
						//{
						//	ifstream fin("potcoave.in");
						//	ofstream fout("potcoave.out");
						//	unordered_map<int, int> m;
						//	int pot = 0;
						//	int m1;
						//	fin >> m1;
						//	int n;
						//	fin >> n;
						//	for (int i = 0; i < n; i++)
						//	{
						//		int a, b;
						//		fin >> a >> b;
						//		m.insert({ a, b });
						//	}
						//	int zi = 0;
						//	while (pot < m1)
						//	{
						//		zi++;
						//		for (auto i : m)
						//		{
						//			if (zi%i.second)
						//				pot += i.first;
						//		}
						//	}
						//	fout << zi;
						//}
						//#include<iostream>
						//#include<vector>
						//#include<string>
						//#include<algorithm>
						//#include<fstream>
						//using namespace std;
						//int main()
						//{
						//	ifstream fin("criptare.in");
						//	ofstream fout("criptare.out");
						//	vector<string> v;
						//	string s;
						//	int c;
						//	fin >> c;
						//	fin >> s;
						//	if(c==1)
						//	{
						//		v.push_back(s);
						//		for (int i = 0; i < s.size() - 1; i++)
						//		{
						//			char x = s[0];
						//			for (int j = 0; j < s.size() - 1; j++)
						//				s[j] = s[j + 1];
						//			s[s.size() - 1] = x;
						//			v.push_back(s);
						//		}
						//		string cuv = v[0];
						//		sort(v.begin(), v.end());
						//		for (int i = 0; i < s.size(); i++)
						//		{
						//			cout << v[i] << endl;
						//		}
						//		//for (int i = 0; i < s.size(); i++)
						//		//{
						//			//fout << v[i][s.size() - 1];
						//		//}
						//		//fout << find(v.begin(), v.end(), cuv) - v.begin();
						//	}
						//	else if(c==2)
						//	{
						//		int num = s[s.size() - 1] - '0';
						//		s.pop_back();
						//		v.push_back(s);
						//		for (int i = 0; i < s.size() - 1; i++)
						//		{
						//			char x = s[0];
						//			for (int j = 0; j < s.size() - 1; j++)
						//				s[j] = s[j + 1];
						//			s[s.size() - 1] = x;
						//			v.push_back(s);
						//		}
						//		sort(v.begin(), v.end());
						//		fout << v[num];
						//	}
						//	else if(c==3)
						//	{
						//		v.push_back(s);
						//		for (int i = 0; i < s.size() - 1; i++)
						//		{
						//			char x = s[0];
						//			for (int j = 0; j < s.size() - 1; j++)
						//				s[j] = s[j + 1];
						//			s[s.size() - 1] = x;
						//			v.push_back(s);
						//		}
						//		sort(v.begin(), v.end());
						//		int maxi = 1;
						//		for (int i = 0; i < s.size() - 1; i++)
						//		{
						//			for (int j = 0; j < s.size() - 1; j++)
						//			{
						//				for (int i1 = i + 1; i1 < s.size(); i1++)
						//				{
						//					for (int j1 = j + 1; j1 < s.size(); j1++)
						//					{
						//						if (v[i][j] == v[i1][j] and v[i1][j1] == v[i][j1] and v[i1][j1] == v[i1][j])
						//							maxi = max(maxi, (i1 - i + 1) * (j1 - j + 1));
						//					}
						//				}
						//			}
						//		}
						//		fout << maxi;
						//	}
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//#define ull unsigned long long
						//ifstream fin("potcoave.in");
						//ofstream fout("potcoave.out");
						//struct asd
						//{
						//	ull p, v;
						//};
						//vector<asd> v;
						//ull pot, sol;
						//bool verificare(ull zi)
						//{
						//	ull potzi = 0;
						//	for (int i = 0; i < v.size(); i++)
						//	{
						//		potzi = potzi + v[i].p * (zi - zi/v[i].v);
						//	}
						//	return potzi >= pot;
						//}
						//void binary(ull l, ull r)
						//{
						//	ull m = (l + r) / 2;
						//	if (l <= r)
						//	{
						//		if (verificare(m))
						//		{
						//			sol = m;
						//			binary(l, m - 1);
						//		}
						//		else
						//			binary(m + 1, r);
						//	}
						//}
						//int main()
						//{
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	ull m;
						//	fin >> pot >> m;
						//	v.resize(m);
						//	for (int i = 0; i < m; i++)
						//		fin >> v[i].p >> v[i].v;
						//	binary(0, 10e18);
						//	fout << sol;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<string>
						//#include<queue>
						//using namespace std;
						//int n, m;
						//struct asd
						//{
						//	int r, g, b;
						//};
						//void floodfillR(vector<vector<int>> &v, int i, int j)
						//{
						//	v[i][j] = -v[i][j];
						//	if (i + 1 <= n and j <= m and v[i + 1][j] == 1) floodfillR(v, i + 1, j);
						//	if (i <= n and j + 1 <= m and v[i][j + 1] == 1) floodfillR(v, i, j + 1);
						//	if (i - 1 >= 1 and j <= m and v[i - 1][j] == 1) floodfillR(v, i - 1, j);
						//	if (i <= n and j - 1 >= 1 and v[i][j-1] == 1) floodfillR(v, i, j - 1);
						//
						//	/*if (i + 1 < n and j + 1 < m and v[i + 1][j + 1] == 1) floodfillR(v, i + 1, j + 1);
						//	if (i - 1 >= 0 and j + 1 < m and v[i - 1][j + 1] == 1) floodfillR(v, i - 1, j + 1);
						//	if (i + 1 < n and j - 1 >= 0 and v[i + 1][j - 1] == 1) floodfillR(v, i + 1, j - 1);
						//	if (i - 1 >= 0 and j - 1 >= 0 and v[i - 1][j - 1] == 1) floodfillR(v, i - 1, j - 1);*/
						//}
						//void floodfillG(vector<vector<int>> &v, int i, int j)
						//{
						//	v[i][j] = -v[i][j];
						//	if (i + 1 <= n and j <= m and v[i + 1][j] == 2) floodfillG(v, i + 1, j);
						//	if (i <= n and j + 1 <= m and v[i][j + 1] == 2) floodfillG(v, i, j + 1);
						//	if (i - 1 >= 1 and j <= m and v[i - 1][j] == 2) floodfillG(v, i - 1, j);
						//	if (i <= n and j - 1 >= 1 and v[i][j - 1] == 2) floodfillG(v, i, j - 1);
						//
						//	/*if (i + 1 < n and j + 1 < m and v[i + 1][j + 1] == 2) floodfillG(v, i + 1, j + 1);
						//	if (i - 1 >= 0 and j + 1 < m and v[i - 1][j + 1] == 2) floodfillG(v, i - 1, j + 1);
						//	if (i + 1 < n and j - 1 >= 0 and v[i + 1][j - 1] == 2) floodfillG(v, i + 1, j - 1);
						//	if (i - 1 >= 0 and j - 1 >= 0 and v[i - 1][j - 1] == 2) floodfillG(v, i - 1, j - 1);*/
						//}
						//void floodfillB(vector<vector<int>> &v, int i, int j)
						//{
						//	v[i][j] = -v[i][j];
						//	if (i + 1 <= n and j <= m and v[i + 1][j] == 3) floodfillB(v, i + 1, j);
						//	if (i <= n and j + 1 <= m and v[i][j + 1] == 3) floodfillB(v, i, j + 1);
						//	if (i - 1 >= 1 and j <= m and v[i - 1][j] == 3) floodfillB(v, i - 1, j);
						//	if (i <= n and j - 1 >= 1 and v[i][j - 1] == 3) floodfillB(v, i, j - 1);
						//
						//	/*if (i + 1 < n and j + 1 < m and v[i + 1][j + 1] == 3) floodfillB(v, i + 1, j + 1);
						//	if (i - 1 >= 0 and j + 1 < m and v[i - 1][j + 1] == 3) floodfillB(v, i - 1, j + 1);
						//	if (i + 1 < n and j - 1 >= 0 and v[i + 1][j - 1] == 3) floodfillB(v, i + 1, j - 1);
						//	if (i - 1 >= 0 and j - 1 >= 0 and v[i - 1][j - 1] == 3) floodfillB(v, i - 1, j - 1);*/
						//}
						//bool verificvecini(vector<vector<int>> v, int i, int j)
						//{
						//	if (i + 1 <= n and j <= m and v[i + 1][j] == 0) return 1;
						//	if (i <= n and j + 1 <= m and v[i][j + 1] == 0) return 1;
						//	if (i - 1 >= 1 and j <= m and v[i - 1][j] == 0) return 1;
						//	if (i <= n and j - 1 >= 1 and v[i][j - 1] == 0) return 1;
						//
						//	return 0;
						//}
						//struct Cell
						//{
						//	int l, c;
						//};
						//int Lee(vector<vector<int>> M, int i,int j)
						//{
						//	queue<Cell> Q;
						//	vector<int> linie = { 0, -1, 0, 1, 0 };
						//	vector<int> coloana = { 0, 0, 1, 0, -1 };
						//	Cell start;
						//	start.l = i;
						//	start.c = j;
						//	Q.push(start);
						//	M[start.l][start.c] = 1;
						//	Cell crt;
						//	int val;
						//	while (!Q.empty())
						//	{
						//		crt = Q.front();
						//		Q.pop();
						//		val = M[crt.l][crt.c];
						//		for (i = 1; i <= 4; i++)
						//		{
						//			if (M[crt.l + linie[i]][crt.c + coloana[i]] == -2)
						//				return val - 1;
						//			if (M[crt.l + linie[i]][crt.c + coloana[i]] == 0)
						//			{
						//				Q.push({ crt.l + linie[i], crt.c + coloana[i] });
						//				M[crt.l + linie[i]][crt.c + coloana[i]] = val + 1;
						//			}
						//		}
						//	}
						//}
						//int main()
						//{
						//	ifstream fin("insule.in");
						//	ofstream fout("insule.out");
						//	fin.tie(0);
						//	ios::sync_with_stdio(0);
						//	vector < vector < int > > v;
						//	vector<int> v1, v2;
						//	fin >> n >> m;
						//	/*v.resize(n + 2);*/
						//	v1.resize(m + 2);
						//	v2.resize(m + 2, -5);
						//	/*for (int i = 0; i < n + 2; i++)
						//		v[i].resize(m + 2, 0);
						//	for (int i = 0; i < n + 2; i++)
						//		v[i][0] = v[i][n + 1] = -1;
						//	for (int j = 0; j < m + 2; j++)
						//		v[0][j] = v[n + 1][j] = -1;*/
						//	v.push_back(v2);
						//	v1[0] = v1[v1.size() - 1] = -5;
						//	for (int i = 1; i <= n; i++)
						//	{
						//		string s;
						//		fin >> s;
						//		for (int j = 0; j < s.size(); j++)
						//			v1[j + 1] = s[j] - '0';
						//		v.push_back(v1);
						//	}
						//	v.push_back(v2);
						//	asd nr = { 0, 0, 0 };
						//	/*for (int i = 0; i < v.size(); i++)
						//	{
						//		for (int j = 0; j < v[0].size(); j++)
						//			cout << v[i][j];
						//		cout << '\n';
						//	}*/
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j <= m; j++)
						//		{
						//			if (v[i][j] == 1)
						//			{
						//				nr.r++;
						//				floodfillR(v, i, j);
						//			}
						//			else if (v[i][j] == 2)
						//			{
						//				nr.g++;
						//				floodfillG(v, i, j);
						//			}
						//			else if (v[i][j] == 3)
						//			{
						//				nr.b++;
						//				floodfillB(v, i, j);
						//			}
						//		}
						//	}
						//	int min = 2147483647;
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j <= m; j++)
						//		{
						//			if (v[i][j] == -1 and verificvecini(v, i, j))
						//			{
						//				int val = Lee(v, i, j);
						//				if (min > val)
						//					min = val;
						//			}
						//		}
						//	}
						//	/*for (int i = 0; i < n; i++)
						//	{
						//		for (int j = 0; j < m; j++)
						//			cout << v[i][j];
						//		cout << endl;
						//	}*/
						//	fout << nr.r << " " << nr.g << " " << nr.b << " " << min;
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//#include<string>
						//using namespace std;
						//int main()
						//{
						//	ifstream fin("text.in");
						//	ofstream fout("text.out");
						//	vector<string> v;
						//	string s;
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	while (fin >> s)
						//	{
						//		string word = "";
						//		for (auto x : s)
						//		{
						//			if (x == ' ')
						//			{
						//				v.push_back(s);
						//				word = "";
						//			}
						//			else
						//				word = word + x;
						//		}
						//		if (word.size())
						//			v.push_back(s);
						//	}
						//	string lit;
						//	int nr = 0, max = -1;
						//	vector<string> maxv, temp;
						//	for (int asujifs = 0; asujifs < v.size() - 1; asujifs++)
						//	{
						//		temp.clear();
						//		nr = 1;
						//		lit = v[asujifs][v[asujifs].size() - 1];
						//		temp.push_back(v[asujifs]);
						//		for (int i = asujifs + 1; i < v.size(); i++)
						//		{
						//			if (v[i][0] == lit[0])
						//			{
						//				temp.push_back(v[i]);
						//				nr++;
						//				lit = v[i][v[i].size() - 1];
						//			}
						//		}
						//		if (nr > max)
						//			max = nr, maxv=temp;
						//	}	
						//	if (v.size() - maxv.size() > v.size())
						//		fout << 0;
						//	else
						//		fout << v.size() - maxv.size();
						//	fout << '\n' << v.size() << '\n';
						//	for (int i = 0; i < maxv.size(); i++)
						//		fout << maxv[i] << '\n';
						//}
						//#include<iostream>
						//#include<fstream>
						//#include<vector>
						//using namespace std;
						//struct celula
						//{
						//	int cul, nr, pat;
						//};
						//int nr = 0;
						//int n, m;
						//vector < vector < celula > > v;
						//int pat;
						//void floodfill(int i, int j, int culi)
						//{
						//	v[i][j].cul = -v[i][j].cul;
						//	v[i][j].pat = pat;
						//	nr++;
						//	if (i <= n and j + 1 <= m and v[i][j + 1].cul == culi) floodfill(i, j + 1, culi);
						//	if (i + 1 <= n and j <= m and v[i + 1][j].cul == culi) floodfill(i + 1, j, culi);
						//	if (i - 1 > 0 and j <= m and v[i - 1][j].cul == culi) floodfill(i - 1, j, culi);
						//	if (i <= n and j - 1 <= m and v[i][j - 1].cul == culi) floodfill(i, j - 1, culi);
						//
						//	//v[i][j].nr = nr;
						//}
						//void floodfillv2(int i, int j, int culi)
						//{
						//	v[i][j].cul = -v[i][j].cul;
						//
						//	if (i <= n and j + 1 <= m and v[i][j + 1].cul == culi) floodfillv2(i, j + 1, culi);
						//	if (i + 1 <= n and j <= m and v[i + 1][j].cul == culi) floodfillv2(i + 1, j, culi);
						//	if (i - 1 > 0 and j <= m and v[i - 1][j].cul == culi) floodfillv2(i - 1, j, culi);
						//	if (i <= n and j - 1 <= m and v[i][j - 1].cul == culi) floodfillv2(i, j - 1, culi);
						//
						//	v[i][j].nr = nr;
						//}
						//bool findimp(vector<int> pat, int caut)
						//{
						//	for (int i = 0; i < pat.size(); i++)
						//		if (pat[i] == caut) return 0;
						//	return 1;
						//}
						//int main()
						//{
						//	ifstream cin("ferma.in");
						//	ofstream cout("ferma.out");
						//	ios::sync_with_stdio(0);
						//	cin.tie(0);
						//	int sadadsa;
						//	cin >> sadadsa;
						//	cin >> n >> m;
						//	v.resize(n + 2);
						//	for (int i = 0; i < n + 2; i++)
						//		v[i].resize(m + 2);
						//	for (int i = 0; i < n + 2; i++)
						//		v[i][0].cul = v[i][n + 1].cul = -2147483647;
						//	for (int j = 0; j < m + 2; j++)
						//		v[0][j].cul = v[n + 1][j].cul = -2147483647;
						//	for (int i = 1; i <= n; i++)
						//		for (int j = 1; j <= m; j++)
						//		{
						//			char x[1];
						//			cin >> x[0];
						//			v[i][j].cul = x[0] - 'a' + 1;
						//		}
						//	if (sadadsa == 1)
						//	{
						//		int max = 0;
						//		for (int i = 1; i <= n; i++)
						//			for (int j = 1; j <= m; j++)
						//			{
						//				nr = 0;
						//				if (v[i][j].cul >= 1)
						//				{
						//					floodfill(i, j, v[i][j].cul);
						//					//cout << nr << " " << v[i][j].cul << endl;
						//				}
						//				if (nr > max)
						//					max = nr;
						//			}
						//		cout << max;
						//	}
						//	else
						//	{
						//		pat = 0;
						//		for (int i = 1; i <= n; i++)
						//		{
						//			for (int j = 1; j <= m; j++)
						//			{
						//				if (v[i][j].cul >= 1)
						//				{
						//					nr = 0;
						//					floodfill(i, j, v[i][j].cul);
						//					//cout << nr << " " << v[i][j].cul << endl;
						//					floodfillv2(i, j, v[i][j].cul);
						//					pat++;
						//				}
						//			}
						//		}
						//		int max, cul, imax, jmax, nr = 0;
						//		max = cul = imax = jmax = 0;
						//		vector<int> c = { 0, 0, -1, 0, 1, 0, -1, 0, 1 }, l = { 0, -1, 0, 1, 0, -1, 0, 1, 0 };
						//		for (int i = 1; i <= n; i++)
						//		{
						//			for (int j = 1; j <= m; j++)
						//			{
						//
						//				for (int i1 = 1; i1 <= 4; i1++)
						//				{
						//					vector<int> pat;
						//					int i2 = i + c[i1];
						//					int j2 = j + l[i1];
						//					if (v[i][j].cul != v[i2][j2].cul)
						//					{
						//						nr = v[i2][j2].nr + 1;
						//						for (int j1 = i1 + 1; j1 <= i1 + 4; j1++)
						//						{
						//							int i3 = i + c[j1];
						//							int j3 = j + l[j1];
						//							if (v[i3][j3].cul == v[i2][j2].cul and findimp(pat, v[i3][j3].pat))
						//								nr += v[i3][j3].nr, pat.push_back(v[i3][j3].pat);
						//						}
						//						if (nr > max)
						//							max = nr, cul = v[i2][j2].cul, imax = i, jmax = j;
						//					}
						//				}
						//				//cout << v[i][j].nr << "   ";
						//			}
						//			//cout << endl;
						//		}
						//
						//		cout << imax << " " << jmax << '\n' << char(cul + 'a' - 1);
						//	}
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//ifstream fin("expozitie.in");
						//ofstream fout("expozitie.out");
						//class numeremari
						//{
						//public:
						//	vector<int> v;
						//	void inser(int nr)
						//	{
						//		v.clear();
						//		while (nr)
						//		{
						//			v.insert(v.begin(), nr % 10);
						//			nr /= 10;
						//		}
						//	}
						//	void citire()
						//	{
						//		for (int i = 0; i < v.size(); i++)
						//			fout << v[i];
						//	}
						//	numeremari(vector<int> v = { })
						//	{
						//		this->v = v;
						//	}
						//	numeremari operator+(const numeremari& obj)
						//	{
						//		vector<int> v1 = obj.v;
						//		vector<int> v = this->v;
						//		while (v1.size() > v.size())
						//			v.insert(v.begin(), 0);
						//		while (v1.size() < v.size())
						//			v1.insert(v1.begin(), 0);
						//		vector<int> res(v.size(), 0);
						//		for (int i = v.size() - 1; i >= 0; i--)
						//		{
						//			res[i] = res[i] + v[i] + v1[i];
						//			if (res[i] >= 10 and i > 0)
						//			{
						//				res[i] -= 10;
						//				res[i - 1]++;
						//			}
						//		}
						//		if (res[0] >= 10)
						//			res.insert(res.begin(), 1), res[1] -= 10;
						//
						//		numeremari resi;
						//		resi.v = res;
						//		return resi;
						//	}
						//};
						//void triunghi(int n, int k)
						//{
						//	vector<numeremari> v1, v2;
						//	v1.resize(1000);
						//	v2.resize(1000);
						//	for (int i = 1; i <= n; i++)
						//	{
						//		for (int j = 1; j < i; j++)
						//		{
						//			v1[j] = v2[j - 1] + v2[j];
						//		}
						//		v1[0].inser(1);
						//		v1[i].inser(1);
						//		v2 = v1;
						//	}
						//	v1[k].citire();
						//}
						//int main()
						//{
						//	int n1, d, k1;
						//	fin >> n1 >> d >> k1;
						//	int k = n1 - k1 * d;
						//	if (k < 0) //if it works it works
						//		fout << 0;
						//	else if (k == 0)
						//		fout << 1;
						//	else
						//	{
						//		int n = k + d - 1;
						//		triunghi(n, k);
						//	}
						//}
						//#include<iostream>
						//#include<vector>
						//#include<fstream>
						//using namespace std;
						//vector<vector<int>> v;
						//vector<int> v1;
						//vector<int> discipline;
						//int n, k, d, m, k1;
						//ifstream fin("pluricex.in");
						//ofstream fout("pluricex.out");
						//bool verificare()
						//{
						//	for (int i = 1; i <= d; i++)
						//		if (discipline[i] == 0)
						//			return 0;
						//	return 1;
						//}
						//void combinari(int k)
						//{
						//	if (k == k1 + 1)
						//	{
						//		if(verificare())
						//		{
						//			for (int i = 1; i <= k1; i++)
						//			{
						//				fout << v1[i] << " ";
						//			}
						//			fout << endl;
						//		}
						//	}
						//	else
						//	{
						//		for (int i = v1[k - 1] + 1; i <= n; i++)
						//		{
						//			v1[k] = i;
						//			vector<int> disc = discipline;
						//			for (int j = 0; j < v[i].size(); j++)
						//				discipline[v[i][j]] = 1;
						//			combinari(k + 1);
						//			discipline = disc;
						//		}
						//	}
						//}
						//int main()
						//{
						//	ios::sync_with_stdio(0);
						//	fin.tie(0);
						//	fin >> n >> k >> d;
						//	k1 = k;
						//	discipline.resize(d + 1);
						//	v.resize(n + 1);
						//	v1.resize(k + 1);
						//	for (int i = 1; i <= n; i++)
						//	{
						//		int nr;
						//		fin >> nr;
						//		v[i].resize(nr);
						//		for (int j = 0; j < nr; j++)
						//			fin >> v[i][j];
						//	}
						//	combinari(1);
						//}
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//char getletter(string s, int nr, int k)
//{
//	while (nr - (k * 4) >= 0)
//		nr -= (k * 4);
//	return s[nr];
//}
//int ap(string s, char lit, int poz)
//{
//	int nr1 = 0;
//	for (int i = 0; i < s.size(); i++)
//		if (s[i] == lit)
//			nr1++;
//	int ap = (poz / s.size()) * nr1;
//	poz = poz % s.size();
//	for (int i = 0; i <= poz; i++)
//		if(s[i] == lit) ap++;
//	return ap;
//}
//string transform(string s)
//{
//	string s1;
//	s1.resize(s.size());
//	for (int i = 0; i < s.size(); i++)
//		if (islower(s[i])) s1[i] = toupper(s[i]);
//		else
//			s1[i] = tolower(s[i]);
//	return s1;
//}
//int main()
//{
//	ifstream cin("caps.in");
//	ofstream cout("caps.out");
//	int k, q;
//	string s, caps, sir;
//	cin >> k >> q;
//	cin >> s;
//	caps = transform(s);
//	sir = s + caps + caps + s;
//	while (q)
//	{
//		int nr;
//		cin >> nr;
//		char lit = getletter(sir, nr - 1, k);
//		//ap(sir, lit, nr - 1);
//		cout << lit << " " << ap(sir, lit, nr - 1) << endl;
//		q--;
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<deque>
//#include<vector>
//using namespace std;
//struct Cell
//{
//	int l, c, pestecatetrece;
//};
//struct matrice
//{
//	int val, pestecatetrece, greutate;
//};
//vector< vector < matrice > > m;
//vector< vector< bool > > mat2;
//int n;
//void fill(int i, int j, int g)
//{
//	if (mat2[i][j] == 0 and g <= m[i][j].greutate) 
//	{
//		mat2[i][j] = 1;
//		fill(i - 1, j, g);
//		fill(i + 1, j, g);
//		fill(i, j - 1, g);
//		fill(i, j + 1, g);
//	}
//
//}
//bool isvalid(int g)
//{
//	for (int i = 0; i < n + 2; i++)
//		mat2[i][0] = mat2[0][i] = mat2[i][n + 1] = mat2[n + 1][i] = 1;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			mat2[i][j] = 0;
//
//	fill(1, 1, g);
//
//	return mat2[n][n];
//}
//int main()
//{
//	int c;
//	cin >> c >> n;
//	m.resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		m[i].resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		m[i][0].val = m[i][n + 1].val = -1;
//	for (int j = 0; j < n + 2; j++)
//		m[0][j].val = m[n + 1][j].val = -1;
//	cout << 1;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> m[i][j].greutate;
//	if (c == 1)
//	{
//		int g;
//		cin >> g;
//		deque<Cell> Q;
//		vector<int> linie = { 0, -1, 0, 1, 0 };
//		vector<int> coloana = { 0, 0, 1, 0, -1 };
//		Cell start;
//		start.l = 1;
//		start.c = 1;
//		start.pestecatetrece = 0;
//		Q.push_front(start);
//		m[start.l][start.c].val = 1;
//		Cell crt;
//		int val;
//		while (!Q.empty() and m[n][n].val == 0)
//		{
//			crt = Q.front();
//			Q.pop_front();
//			val = m[crt.l][crt.c].val;
//			for (int i = 1; i <= 4; i++)
//			{
//				if (m[crt.l + linie[i]][crt.c + coloana[i]].val != -1)
//				{
//					if (m[crt.l + linie[i]][crt.c + coloana[i]].greutate < g)
//						Q.push_back({ crt.l + linie[i], crt.c + coloana[i], crt.pestecatetrece + 1 });
//					else if (m[crt.l + linie[i]][crt.c + coloana[i]].greutate >= g)
//						Q.push_front({ crt.l + linie[i], crt.c + coloana[i], crt.pestecatetrece});
//					m[crt.l + linie[i]][crt.c + coloana[i]].val = val + 1;
//					m[crt.l + linie[i]][crt.c + coloana[i]].pestecatetrece = crt.pestecatetrece;
//				}
//			}
//		}
//		if (m[n][n].greutate > g)
//			m[n][n].pestecatetrece++;
//		/*if (m[1][1].greutate > g)
//			m[1][1].pestecatetrece++;*/
//		cout << m[n][n].pestecatetrece;
//	}
//	else
//	{
//		mat2.resize(n + 2);
//		for (int i = 0; i < n + 2; i++)
//			mat2[i].resize(n + 2);
//		int l = 1, r = 5000, m = (l + r) / 2, solutie = 0;
//		while (l <= r)
//		{
//			cout << l << " " << r << " " << m << endl;
//			if (isvalid(m))
//			{
//				solutie = m;
//				l = m + 1;
//			}
//			else
//				r = m - 1;
//			m = (l + r) / 2;
//		}
//		cout << solutie;
//	}
//	int i, j;
//	i = j = n;
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//#define mod 1000000009
//int main()
//{
//	ifstream cin("dorel.in");
//	int t;
//	cin >> t;
//	vector<int> nrbile;
//	while (t)
//	{
//		int poz, sum;
//		poz = 1;
//		sum = 0;
//		int b, c, k;
//		cin >> b >> c >> k;
//		nrbile.resize(c + 1);
//		int c1 = c;
//		int i = 0;
//		for (int i = c; i > 0; i--)
//		{
//			nrbile[i] = 1;
//			c1--;
//		}
//		nrbile[0] = c1;
//		while (poz <= c)
//		{
//			while (sum != k and poz <= c)
//			{
//				sum = sum + nrbile[poz] + 1;
//				poz = poz + 1;
//			}
//			cout << poz << endl;
//			sum = 0;
//		}
//		cout << '\n' << '\n';
//		t--;
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//struct frum
//{
//	long long d, f, depmax;
//};
//int main()
//{
//	ifstream cin("pofta.in");
//	ofstream cout("pofta.out");
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, coef;
//	cin >> n >> coef;
//	vector<frum> v(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i].d;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i].f;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int depmax;
//		cin >> depmax;
//		int distmax = v[i].d + depmax, distmin = v[i].d - depmax;
//		int j = i;
//		int max = -1, poz = -1;
//		while (j < v.size() and v[j].d <= distmax)
//		{
//			int comp = (v[j].d - v[i].d) * -coef + v[j].f;
//			if (comp > max)
//				max = comp, poz = j;
//			j++;
//		}
//		j = i;
//		while (j >= 0 and v[j].d >= distmin)
//		{
//			int comp = (v[i].d - v[j].d) * -coef + v[j].f;
//			if (comp > max)
//				max = comp, poz = j;
//			j--;
//		}
//		cout << poz + 1 << " ";
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//void adaug(vector<int>& v, int l, int r, int adaug = 1)
//{
//	for (int i = l; i <= r and i < v.size(); i++)
//		v[i] = v[i] + adaug;
//}
//int sol(int sol, vector<int> v)
//{
//	bool ok1 = 0;
//	vector<int> v1;
//	for (int i = 0; i < v.size(); i++)
//	{	
//		if (v[i] == sol)
//			v1.push_back(i);
//		if (v[i] != sol)
//			ok1 = 1;
//		if (v[i] > sol)
//			return sol + 1;
//	}
//	if (ok1 == 0)
//		return 0;
//	if (sol == 0)
//		return 1;
//	int miscari = 0;
//	v1.push_back(v.size());
//	while (v.size() + 1 != v1.size())
//	{
//		for (int i = 0; i < v1.size() - 1; i++)
//		{
//			if (v1[i + 1] - v1[i] > 1)
//			{
//				adaug(v, v1[i], v1[i + 1]);
//				miscari++;
//			}
//		}
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (v[i] == sol and !binary_search(v1.begin(), v1.end(), sol))
//				v1.push_back(i);
//		}
//		sort(v1.begin(), v1.end());
//	}
//	if (sol + 1 < miscari) return sol + 1;
//
//	return miscari;
//}
//int main()
//{
//	ifstream fin("egale.in");
//	ofstream fout("egale.out");
//	int n, Q;
//	fin >> n >> Q;
//	vector<int> v(n + 1);
//	for (int i = 1; i <= n; i++)
//		fin >> v[i];
//	while (Q)
//	{
//		int l, r, v1;
//		fin >> l >> r >> v1;
//		vector<int> v2;
//		for (int i = l; i <= r; i++)
//			v2.push_back(v[i]);
//		fout << sol(v1, v2) << endl;
//		Q--;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ifstream fin("castel.in");
//	ofstream fout("castel.out");
//	vector<int> v(11);
//	int n;
//	fin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		long long x;
//		fin >> x;
//		do
//		{
//			v[x % 10]++;
//			x /= 10;
//		} while (x);
//	}
//	int x;
//	fin >> x;
//	int max = -1, cif = -1;
//	for (int i = 0; i < x; i++)
//	{
//		int x1;
//		fin >> x1;
//		if (v[x1] > max)
//			max = v[x1], cif = x1;
//	}
//	fout << cif << " " << max;
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<queue>
//#include<string>
//using namespace std;
//struct Cell
//{
//	int l, c;
//};
//int n, m;
//int Lee(vector<vector<int>>& M)
//{
//	queue<Cell> Q;
//	vector<int> linie = { 0, -1, 0, 1, 0 };
//	vector<int> coloana = { 0, 0, 1, 0, -1 };
//	M[1][1] = 1;
//	Q.push({1, 1});
//	Cell crt;
//	int val;
//	M[1][1] = 1;
//	while (M[n][m] == 0 and !Q.empty())
//	{
//		crt = Q.front();
//		Q.pop();
//		val = M[crt.l][crt.c];
//		for (int i = 1; i <= 4; i++)
//			if (M[crt.l + linie[i]][crt.c + coloana[i]] == 0)
//			{
//				Q.push({ crt.l + linie[i], crt.c + coloana[i] });
//				M[crt.l + linie[i]][crt.c + coloana[i]] = val + 1;
//			}
//	}
//	return M[n][m] - 1;
//}
//int main()
//{
//	ifstream fin("labirint.in");
//	ofstream cout("labirint.out");
//	fin >> n >> m;
//	vector< vector < int >> M;
//	vector<int> v1(m + 2);
//	vector<int> v2(m + 2, -1);
//	string s;
//	M.push_back(v2);
//	v1[0] = v1[v1.size() - 1] = -5;
//	for (int i = 1; i <= n; i++)
//	{
//		string s;
//		fin >> s;
//		for (int j = 0; j < s.size(); j++)
//			if (s[j] == '1')
//				v1[j + 1] = -1;
//			else
//				v1[j + 1] = 0;
//		M.push_back(v1);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//			cout << M[i][j];
//		cout << endl;
//	}
//	cin.get();
//	M.push_back(v2);
//	int d0 = Lee(M);
//	bool ok = 1;
//	vector<int> l = { 0, 0, 1, 0, -1 }, c = { 0, -1, 0, 1, 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			ok = 1;
//			if (M[i][j] == -1)
//			{
//				int ok2 = 0;
//				for (int x1 = 1; x1 <= 4 and ok == 1; x1++)
//				{
//					if (M[i + c[x1]][j + l[x1]] != -1)
//						ok2++;
//				}
//				if (ok2 >= 2)
//					cout << 0;
//				else
//					cout << 1;
//			}
//			else
//				cout << 0;
//		}
//		cout << endl;
//	}
//}
//#include <iostream>
//
//#define MOD 1000000007
//
//using namespace std;
//
//int main(void)
//{
//	int n;
//	cin >> n;
//
//	int p = 1;
//
//	for (int i = 1; i <= n; ++i) {
//		p *= i;
//		p %= MOD;
//	}
//
//	cout << p << "\n";
//
//	return 0;
//}
//#include <iostream>
//
//void check_if_stop(int n, int limit, int& s) {       // You can edit this line!
//	if (n > limit) {                               // You can edit this line!
//		s = 0;                                      // You can edit this line!
//	}                                               // You can edit this line!
//}                                                   // You can edit this line!
//
//int main() {                                        // You can NOT edit this
//	int n, s, limit;                                // You can NOT edit this
//	n = 0;                                          // You can NOT edit this
//	s = 1;                                          // You can NOT edit this
//	std::cin >> limit;                              // You can NOT edit this
//	while (s)                                       // You can NOT edit this
//	{                                               // You can NOT edit this
//		std::cout << n << "\n";	                    // You can NOT edit this
//		n += 2;                                     // You can NOT edit this
//		check_if_stop(n, limit, s);                 // You can NOT edit this
//	}                                               // You can NOT edit this
//	return 0;                                       // You can NOT edit this
//}                                                   // You can NOT edit this
//#include <iostream>
//#include <vector>
//
//class Check {                               // You can NOT edit this
//public:                                    // You can NOT edit this
//	int is_user_happy(int idx) {            // You can NOT edit this
//		counter++;                          // You can NOT edit this
//		if (idx % 3 == 0)                   // You can NOT edit this
//			return 1;                       // You can NOT edit this
//		return 0;                           // You can NOT edit this
//	}                                       // You can NOT edit this
//											// You can NOT edit this
//	int get_counter() {                     // You can NOT edit this
//		counter++;                          // You can NOT edit this
//		return counter;                     // You can NOT edit this
//	}                                       // You can NOT edit this
//private:                                   // You can NOT edit this
//	int counter = 0;                        // You can NOT edit this
//} check;                                    // You can NOT edit this
//
//struct Car {
//	int id;
//	Car() {}
//	Car(int id) : id(id) {}
//	virtual ~Car() {}
//};
//
//struct Sedan : public Car {
//	Sedan(int id) : Car(id) {}
//};
//
//struct Hatchback : public Car {
//	Hatchback(int id) : Car(id) {}
//};
//
//class Dealership {
//public:
//	Dealership(int parkingLot) {
//		numCars = parkingLot;
//		cars = std::vector<Car*>();
//	}
//
//	void receiveCar(Car* car) {
//		cars.push_back(car);
//	}
//
//	Car* sellCar(int i) {
//		Car* car = cars[i];
//		cars.erase(cars.begin() + i);
//
//		return car;
//	}
//	
//	int testDrive(int idx) {
//		// if user is happy -> he will buy the car
//		return check.is_user_happy(idx);
//	}
//
//	void printLot() {
//		std::cout << check.get_counter() << "\n";
//		for (Car* c : cars)
//			std::cout << c->id << " ";
//
//		std::cout << "\n";
//	}
//
//	std::vector<Car*> viewLot() {
//		return cars;
//	}
//
//private:
//	int numCars;
//	std::vector<Car*> cars;
//};
//
//int main(void)
//{
//	unsigned int numCars;
//	std::cin >> numCars;
//
//	Dealership dealership(numCars);
//	for (unsigned int i = 0; i < numCars; ++i) {
//		Car car;
//		int index;
//		std::cin >> index;
//		if (i % 2 == 0) {
//			car = Sedan(index);
//		}
//		else {
//			car = Hatchback(index);
//		}
//		dealership.receiveCar(&car);
//	}
//
//	size_t i = 0;
//	auto dealerLot = dealership.viewLot();
//	for (auto it = dealerLot.begin(); it != dealerLot.end(); it++) {
//		if (dealership.testDrive(i))
//			dealership.sellCar(i);
//		i++;
//	}
//
//	dealership.printLot();
//	return 0;
//}
//#include <iostream>
//#include <iomanip>
//#include <math.h>
//
//
//#define ERR ((double)(1e-6))
//#define PLACES 3
//
//#define MAX_STEPS 200
//
//double newton(int n, int k, int max_steps, double err)
//{
//	double prev_x = (double)std::max(n, 1), x;
//	double real_k = (double)k, real_n = (double)n;
//
//	int steps = 0;
//
//	while (true) {				                            // DO NOT MODIFY
//		x = (real_k - 1) * prev_x / real_k +                // DO NOT MODIFY
//			real_n / real_k / pow(prev_x, real_k - 1);      // DO NOT MODIFY
//		steps++;                                            // DO NOT MODIFY
//															// DO NOT MODIFY
//		if (fabs(x - prev_x) < err || steps == max_steps) { // DO NOT MODIFY
//			return x;                                       // DO NOT MODIFY
//		}                                                   // DO NOT MODIFY
//															// DO NOT MODIFY
//		prev_x = x;                                         // DO NOT MODIFY
//	}                                                       // DO NOT MODIFY
//}
//
//int main(void)
//{
//	int n, k;
//
//	std::cin >> n >> k;
//
//	int max_steps = MAX_STEPS;
//	double err = ERR;
//	double result = newton(n, k, max_steps, err);
//
//	std::cout << std::fixed << std::setprecision(PLACES) << result << "\n";
//
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> x(1000), v(1000), folosit(1000);
//int n;
//void Bckt(int k)
//{
//	if (k == n + 1)
//	{
//		for (int i = 1; i <= n; i++)
//			cout << v[i] << " ";
//		cout << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			v[k] = i;
//			if (folosit[i] == false)
//			{
//				folosit[i] = true;
//				Bckt(k + 1);
//				folosit[i] = false;
//			}
//		}
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	n = 100;
//	for (int i = 0; i <= n; i++)
//		v[i] = i;
//	Bckt(1);
//}
//#include<iostream>
//#include<fstream>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//int main()
//{
//	ifstream cin("3secv.in");
//	ofstream cout("3secv.out");
//	int q;
//	cin >> q;
//	while (q)
//	{
//		unordered_map<int, int> m;
//		int n;
//		cin >> n;
//		vector<int> v(n);
//		for (int i = 0; i < n; i++)
//			cin >> v[i];
//		int j = 0, max = 0;
//		for (int i = 0; i < n; i++)
//		{
//			while (j < n and (m.size() < 3 or (m.size() == 3 and m.count(v[j]))))
//			{
//				m[v[j]]++;
//				j++;
//			}
//			m[v[i]]--;
//			if (m[v[i]] == 0)
//				m.erase(v[i]);
//			if (max < j - i)
//				max = j - i;
//		}
//		cout << max << endl;
//		q--;
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<deque>
//#include<vector>
//using namespace std;
//struct Cell
//{
//	int l, c, pestecatetrece;
//};
//struct matrice
//{
//	int val, pestecatetrece, greutate;
//};
//vector< vector < matrice > > m;
//vector< vector< bool > > mat2;
//int n;
//void fill(int i, int j, int g)
//{
//	if (mat2[i][j] == 0 and g <= m[i][j].greutate)
//	{
//		mat2[i][j] = 1;
//		fill(i - 1, j, g);
//		fill(i + 1, j, g);
//		fill(i, j - 1, g);
//		fill(i, j + 1, g);
//	}
//
//}
//bool isvalid(int g)
//{
//	for (int i = 0; i < n + 2; i++)
//		mat2[i][0] = mat2[0][i] = mat2[i][n + 1] = mat2[n + 1][i] = 1;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			mat2[i][j] = 0;
//
//	fill(1, 1, g);
//
//	return mat2[n][n];
//}
//int main()
//{
//	int c;
//	cin >> c >> n;
//	m.resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		m[i].resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		m[i][0].val = m[i][n + 1].val = -1;
//	for (int j = 0; j < n + 2; j++)
//		m[0][j].val = m[n + 1][j].val = -1;
//	cout << 1;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> m[i][j].greutate;
//	if (c == 1)
//	{
//		int g;
//		cin >> g;
//		deque<Cell> Q;
//		vector<int> linie = { 0, -1, 0, 1, 0 };
//		vector<int> coloana = { 0, 0, 1, 0, -1 };
//		Cell start;
//		start.l = 1;
//		start.c = 1;
//		start.pestecatetrece = 0;
//		Q.push_front(start);
//		m[start.l][start.c].val = 1;
//		Cell crt;
//		int val;
//		while (!Q.empty() and m[n][n].val == 0)
//		{
//			crt = Q.front();
//			Q.pop_front();
//			val = m[crt.l][crt.c].val;
//			for (int i = 1; i <= 4; i++)
//			{
//				if (m[crt.l + linie[i]][crt.c + coloana[i]].val != -1)
//				{
//					if (m[crt.l + linie[i]][crt.c + coloana[i]].greutate < g)
//						Q.push_back({ crt.l + linie[i], crt.c + coloana[i], crt.pestecatetrece + 1 });
//					else if (m[crt.l + linie[i]][crt.c + coloana[i]].greutate >= g)
//						Q.push_front({ crt.l + linie[i], crt.c + coloana[i], crt.pestecatetrece });
//					m[crt.l + linie[i]][crt.c + coloana[i]].val = val + 1;
//					m[crt.l + linie[i]][crt.c + coloana[i]].pestecatetrece = crt.pestecatetrece;
//				}
//			}
//		}
//		if (m[n][n].greutate > g)
//			m[n][n].pestecatetrece++;
//		/*if (m[1][1].greutate > g)
//			m[1][1].pestecatetrece++;*/
//		cout << m[n][n].pestecatetrece;
//	}
//	else
//	{
//		mat2.resize(n + 2);
//		for (int i = 0; i < n + 2; i++)
//			mat2[i].resize(n + 2);
//		int l = 1, r = 5000, m = (l + r) / 2, solutie = 0;
//		while (l <= r)
//		{
//			cout << l << " " << r << " " << m << endl;
//			if (isvalid(m))
//			{
//				solutie = m;
//				l = m + 1;
//			}
//			else
//				r = m - 1;
//			m = (l + r) / 2;
//		}
//		cout << solutie;
//	}
//	int i, j;
//	i = j = n;
//}
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//ifstream fin("arh.in");
//ofstream fout("arh.out");
//string s, rez;
//int i;
//string transpara();
//string transnumerodos();
//string revers(string s);
//bool isnumber(char x)
//{
//	return x >= '0' and x <= '9';
//}
//bool isletter(char x)
//{
//	return x >= 'a' and x <= 'z';
//}
//short todigit(char x)
//{
//	return s[i] - '0';
//}
//string caz1(string s)
//{
//	string s2;
//	s2 = revers(s);
//	return s + s2;
//}
//string caz2(string s)
//{
//	string rez;
//	rez += s;
//	s.pop_back();
//	s = revers(s);
//	rez += s;
//	return rez;
//}
//int num()
//{
//	int nr = 0;
//	while (isnumber(s[i]))
//	{
//		nr = nr * 10 + todigit(s[i]);
//		i++;
//	}
//	return nr;
//}
//string revers(string s)
//{
//	string rez;
//	for (int i = s.size() - 1; i >= 0; i--)
//		rez.push_back(s[i]);
//	return rez;
//}
//string transnumerodos()
//{
//	string s1;
//	i++;
//	bool caz = 0;
//	if (s[i] == '*')
//		caz = 1, i++;
//	while (s[i] != ']')
//	{
//		if (isletter(s[i]))
//			s1 += s[i];
//		else
//			if (isdigit(s[i]))
//				s1 += transpara();
//			else
//				if (s[i] == '[')
//					s1 += transnumerodos();
//		i++;
//	}
//	if (caz == 1)
//		return caz1(s1);
//	return caz2(s1);
//}
//string transpara()
//{
//	int nr = num();
//	string s1;
//	i++;
//	while (s[i] != ')')
//	{
//		if (isletter(s[i]))
//		{
//			s1 += s[i];
//		}
//		else
//			if (isnumber(s[i]))
//				s1 += transpara();
//			else
//				if (s[i] == '[')
//					s1 += transnumerodos();
//		i++;
//	}
//	string rez;
//	for (int i = 0; i < nr; i++)
//		rez += s1;
//	return rez;
//}
//void solve()
//{
//	while (i < s.size())
//	{
//		if (isletter(s[i]))
//			rez += s[i];
//		else
//			if (isdigit(s[i]))
//				rez += transpara();
//			else
//				if (s[i] == '[')
//					rez += transnumerodos();
//		i++;
//	}
//	fout << rez;
//}
//int read()
//{
//	getline(fin, s);
//	int nr = 0;
//	for (int i = 0; i < s.size(); i++)
//		if (s[i] == '[' or s[i] == '(')
//			nr++;
//	fout << nr << endl;
//	solve();
//	return 1;
//}
//int x1 = read();
//int main() { }
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ifstream fin("leftmax.in");
//	ofstream fout("leftmax.out");
//	int n;
//	fin.tie(0);
//	ios::sync_with_stdio(0);
//	fin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++)
//		fin >> v[i];
//	int nr = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int max = i;
//		for (int j = i; j < n; j++)
//		{
//			if (v[j] > v[max])
//				max = j;
//			if (max <= (i + j) / 2)
//				nr++;
//		}
//	}
//	fout << nr;
//}
//#include<iostream>
//#include<string>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//struct sir
//{
//	string s;
//	int ok = 1, poz;
//};
//bool compare(string a, string b)
//{
//	return a.size() > b.size() or (a.size() == b.size() and a.compare(b) < 0);
//}
//bool sortcon(sir a, sir b)
//{
//	return a.s.size() < b.s.size() or (a.s.size() == b.s.size() and a.s.compare(b.s) < 0);
//}
//bool sort2(sir a, sir b)
//{
//	return a.poz < b.poz;
//}
//bool gasesc(string a, string b)
//{
//	/*for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] == b[0])
//		{
//			int j = 0;
//			while (j < b.size() and i + j < a.size() and a[i + j] == b[j])
//			{
//				j++;
//			}
//			if (j == b.size() - 1)
//				return 1;
//		}
//	}
//	return 0;*/
//	int i = 0;
//	while (i < b.size() and a[0] != 0)
//	{
//		if (b[i] == a[0])
//			a.erase(0);
//		else
//			i++;
//	}
//	if (a[0]==0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	ifstream fin("interesant.in");
//	ofstream fout("interesant.out");
//	int c;
//	fin >> c;
//	if (c == 1)
//	{
//		int n;
//		fin >> n;
//		string max;
//		string s;
//		for (int i = 0; i < n; i++)
//		{
//			fin >> s;
//			if (compare(s, max))
//				max = s;
//		}
//		fout << max;
//		return 0;
//	}
//	vector<sir> v;
//	int n;
//	fin >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		fin >> v[i].s, v[i].poz = i;
//	sort(v.begin(), v.end(), sortcon);
//	int number = n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n and v[i].ok == 1; j++)
//		{
//			if (gasesc(v[i].s, v[j].s))
//			{
//				number--;
//				v[i].ok = 0;
//			}
//		}
//	}
//	vector<sir> rez;
//	fout << number << endl;
//	for (int i = 0; i < n; i++)
//	{
//		if (v[i].ok == 1)
//			rez.push_back(v[i]);
//	}
//	sort(rez.begin(), rez.end(), sort2);
//	for (int i = 0; i < rez.size(); i++)
//		fout << rez[i].s << endl;
//}
//#include<iostream>
//#include<fstream>
//#include<map>
//#include<string>
//#include<vector>
//using namespace std;
//bool verif(int l, int r, string s)
//{
//	map<char, int> m;
//	for (int i = l - 1; i < r; i++)
//	{
//		m[s[i]]++;
//		if (s[i] != '#' and m[s[i]] >= 2)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	ifstream fin("magice.in");
//	ofstream fout("magice.out");
//	string s;
//	fin >> s;
//	int n;
//	fin >> n;
//	vector<pair<int, int>> p(n);
//	for (int i = 0; i < n; i++)
//		fin >> p[i].first >> p[i].second;
//	for (int i = 0; i < s.size(); i++)
//	{
//		int j = 0;
//		int x1 = p.size();
//		while (j < p.size() and verif(p[j].first, p[j].second, s))
//		{
//			if (verif(p[j].first, p[j].second, s))
//				p.erase(p.begin() + j);
//			j++;
//		}
//		if (j == x1)
//		{
//			fout << i;
//			return 0;
//		}
//		int x;
//		fin >> x;
//		s[x - 1] = '#';
//	}
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<algorithm>
//using namespace std;
//#define MOD 1000000007
//vector<long long> v, x;
//long long n, m, maxvect = 0;
//long long suma = 0;
//bool comp(int a, int b)
//{
//	return a > b;
//}
//void Combinari(int k)
//{
//	if (k == m + 1)
//	{
//		suma += x[v[1] - 1];
//		suma = suma % MOD;
//	}
//	else
//		for (int i = v[k - 1] + 1; i <= n; i++)
//		{
//			v[k] = i;
//			Combinari(k + 1);
//		}
//}
//int main()
//{
//	ifstream fin("ohio.in");
//	ofstream fout("ohio.out");
//	ios::sync_with_stdio(0);
//	fin.tie(0);
//	fin >> n >> m;
//	v.resize(m + 1);
//	x.resize(n);
//	for (int i = 0; i < n; i++)
//		fin >> x[i];
//	sort(x.begin(), x.end(), comp);
//	Combinari(1);
//	fout << suma;
//}
//#include<string>
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//vector<int> folosit, x;
//vector<string> v1(5), v;
//int n, m, nr;
//void Aranjamente(int k)
//{
//	if (k == m + 1)
//	{
//		for (int i = 1; i <= m; i++)
//			v1[i] = v[x[i] - 1];
//		if (v1[1][v1[1].size() - 1] == v1[2][0] and
//			v1[2][v1[2].size() - 1] == v1[3][v1[3].size() - 1] and
//			v1[3][0] == v1[4][v1[4].size() - 1] and
//			v1[1][0] == v1[4][0])
//			nr++;
//	}
//	else
//		for (int v = 1; v <= n; v++)
//		{
//			x[k] = v;
//			if (folosit[v] == 0)
//			{
//				folosit[v] = 1;
//				Aranjamente(k + 1);
//				folosit[v] = 0;
//			}
//		}
//}
//int main()
//{
//	ifstream fin("full-house.in");
//	ofstream fout("full-house.out");
//	fin >> n;
//	m = 4;
//	folosit.resize(n + 1);
//	x.resize(m + 1);
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		fin >> v[i];
//	Aranjamente(1);
//	fout << nr;
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Cell
//{
//	int l, c;
//};
//int main()
//{
//	ifstream fin("alee.in");
//	ofstream fout("alee.out");
//	vector<vector<int>> m;
//	int n;
//	cin >> n;
//	m.resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		m[i].resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		m[i][0] = m[0][i] = m[i][n + 1] = m[n + 1][0] = -1;
//	int x;
//	cin >> x;
//	for (int i = 0; i < x; i++)
//	{
//		int x1, x2;
//		cin >> x1 >> x2;
//		m[x1][x2] = -1;
//	}
//	queue<Cell> Q;
//	Cell start, stop, crt;
//	cin >> start.l >> start.c >> stop.l >> stop.c;
//	m[start.l][start.c] = 1;
//	Q.push(start);
//	vector<int> l = { 0, -1, 0, 1, 0 }, c = { 0, 0, 1, 0, -1 };
//	int val = 0;
//	while (!Q.empty() and m[stop.l][stop.c] == 0)
//	{
//		crt = Q.front();
//		Q.pop();
//		val = m[crt.l][crt.c];
//		for (int i = 1; i <= 4; i++)
//			if (m[crt.l + l[i]][crt.c + c[i]] == 0)
//			{
//				Q.push({ crt.l + l[i], crt.c + c[i] });
//				m[crt.l + l[i]][crt.c + c[i]] = val + 1;
//			}
//	}
//	cout << m[stop.l][stop.c];
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//#define MOD 1000000007;
//vector<vector<int>> M;
//vector<unsigned long long> factoriale = { 1 ,1 };
//int nr = 0, n, m;
//void factorials(int stop)
//{
//	for (int i = factoriale.size(); i <= stop; i++)
//		factoriale.push_back(factoriale[factoriale.size() - 1] * i);
//		//,cout << factoriale[factoriale.size() - 1] << " ";
//}
//long long nrderanj(int nr1)
//{
//	int fact = factoriale[nr], solutie = 0;
//	for (int i = 0; i <= nr1; i++)
//	{
//		if (i % 2 == 0)
//			solutie += (fact / factoriale[i]);
//		else
//			solutie -= (fact / factoriale[i]);
//	}
//	return solutie;
//}
//void fill(int i, int j)
//{
//	if (M[i][j] > 0)
//		nr++;
//	M[i][j] = -1;
//	if (i + 1 <= n and M[i + 1][j] != -1) fill(i + 1, j);
//	if (i - 1 > 0 and M[i - 1][j] != -1) fill(i - 1, j);
//	if (j + 1 <= m and M[i][j + 1] != -1) fill(i, j + 1);
//	if (j - 1 > 0 and M[i][j - 1] != -1) fill(i, j - 1);
//}
//int main()
//{
//	ifstream fin("poseidon.in");
//	ofstream fout("poseidon.out");
//	int c;
//	fin >> c >> n >> m;
//	M.resize(n + 2, vector<int>(m + 2, -1));
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			fin >> M[i][j];
//	if (c == 1)
//	{
//		int x, y;
//		fin >> x >> y;
//		fill(x, y);
//		fout << nr;
//	}
//	else
//	{
//		long long sol = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				if (M[i][j] != -1)
//				{
//					nr = 0;
//					fill(i, j);
//					if (nr >= factoriale.size())
//						factorials(nr);
//					sol *= nrderanj(nr);
//					sol %= MOD;
//				}
//			}
//		}
//		fout << sol;
//	}
//}
//#include<iostream>
//using namespace std;
//#define MOD 666013
//int sol = 0;
//int factorial(int n);
//void x(int n)
//{
//	sol += factorial(n);
//	sol %= MOD;
//	cout << factorial(n) << " " << n << " " << endl;
//}
//int factorial(int n)
//{
//	if (n == 1 or n == 0) return 1;
//	return n * factorial(n - 1);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	while (n)
//	{
//		x(n);
//		n--;
//	}
//	cout << sol;
//}
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<fstream>
//using namespace std;
//struct Cell
//{
//	int l, c;
//};
//int main()
//{
//	ifstream cin("rj.in");
//	int n, m;
//	cin >> n >> m;
//	vector < vector < int > > M(n + 2, vector<int>(m + 2, -1));
//	Cell start, stop;
//	start = stop = { 0, 0 };
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			char c[2];
//			cin >> c[0];
//			if (c[0] == ' ') M[i][j] = 0;
//			if (c[0] == 'X') M[i][j] = -1;
//			if (c[0] == 'R') start = { i, j }, M[i][j] = 0;
//			if (c[0] == 'J') stop = {i, j}, M[i][j] = 0;
//		}
//	}
//	queue<Cell> Q;
//	int val;
//	Q.push(start);
//	Cell crt;
//	M[start.l][start.c] = 0;
//	vector<int> l = { 0, -1, -1, 0, 1, 1, 1, 0, -1 }, c = { 0, 0, 1, 1, 1, 0, -1, -1, -1 };
//	while (!Q.empty() and M[stop.l][stop.c] == 0)
//	{
//		crt = Q.front();
//		Q.pop();
//		val = M[crt.l][crt.c];
//		for (int i = 1; i <= 8; i++)
//		{
//			if (M[crt.l+l[i]][crt.c+c[i]] == 0)
//			{
//				Q.push({ crt.l + l[i], crt.c + c[i] });
//				M[crt.l + l[i]][crt.c + c[i]] = val + 1;
//			}
//		}
//	}
//	cout << M[stop.l][stop.c];
//}
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//ifstream fin("ecuatii.in");
//ofstream fout("ecuatii.out");
//int num, x;
//short todigit(char x)
//{
//	return x - '0';
//}
//bool isdigit(char x)
//{
//	return x >= '0' and x <= '9';
//}
//int whatnum(string s, int& i)
//{
//	int numb = 0;
//	while (isdigit(s[i]))
//	{
//		numb = numb * 10 + todigit(s[i]);
//		i++;
//	}
//	if (numb == 0 and s[i]=='x')
//		return 1;
//	return numb;
//}
//int howmanyx(string s)
//{
//	int semn = 1, egal = 1;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '-') semn = -1;
//		if (s[i] == '+') semn = 1;
//		if (s[i] == '=') semn = 1, egal = -1;
//		if (isdigit(s[i]))
//		{
//			int nu = whatnum(s, i) * semn * egal;
//			//cout << nu << " ";
//			if (s[i] == 'x')
//				x += nu;
//			else
//				num += nu, i--;
//		}
//	}
//	cout << endl;
//	//cout << x << " " << num << endl;
//	if (x == 0 and num == 0)
//		return 1;
//	if (x == 0 and num != 0)
//		return 2;
//	return 3;
//}
//int main()
//{
//	int q;
//	fin >> q;
//	while (q--)
//	{
//		string s;
//		fin >> s;
//		num = x = 0;
//		switch (howmanyx(s))
//		{
//		case 1:
//			fout << "infinit";
//			break;
//		case 2:
//			fout << "imposibil";
//			break;
//		case 3:
//			fout << (double)-num / (double)x;
//			break;
//		}
//		fout << '\n';
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//int main()
//{
//	ifstream cin("charlie.in");
//	ofstream cout("charlie.out");
//	int c;
//	cin >> c;
//	if (c == 1)
//	{
//		int max = 0;
//		string s;
//		cin >> s;
//		for (int i = 1; i < s.size(); i++)
//		{
//			int lungime = 0;
//			while (s[i - 1] > s[i] and s[i] < s[i + 1])
//			{
//				lungime += 2;
//				i += 2;
//			}
//			if (lungime > max)
//				max = lungime;
//		}
//		cout << max + 1;
//	}
//	else
//	{
//		int i = 0;
//		bool ok = 1;
//		string s;
//		cin >> s;
//		int suma = 0;
//		while (ok)
//		{
//			ok = 0;
//			i = 1;
//			while (i < s.size() - 1)
//			{
//				if (s[i - 1] > s[i] and s[i] < s[i + 1])
//				{
//					if (s[i - 1] > s[i + 1])
//						suma += s[i - 1] - 'a' + 1;
//					else
//						suma += s[i + 1] - 'a' + 1;
//					s.erase(i, 1);
//					ok = 1;
//				}
//				else
//					i++;
//			}
//		}
//		cout << s << endl << suma;
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//vector<int> v, x;
//int n = 5, m = 3, maxi = 0;
//void Combinari(int k)
//{
//	if (k == m + 1)
//	{
//		int min = INT_MAX;
//		for (int i = 1; i < m; i++)
//		{
//			if (min > x[v[i]] - x[v[i - 1]])
//				min = x[v[i]] - x[v[i - 1]];
//		}
//		if (maxi < min)
//			maxi = min;
//	}
//	else
//		for (int i = v[k - 1] + 1; i <= n; i++)
//		{
//			v[k] = i;
//			Combinari(k + 1);
//		}
//}
//int main()
//{
//	cin >> n >> m;
//	x.resize(n + 1);
//	for (int i = 1; i <= n; i++)
//		cin >> x[i];
//	v.resize(n + 1);
//	Combinari(1);
//	cout << maxi;
//}
//#include<iostream>
//#include<map>
//#include<fstream>
//#include<vector>
//using namespace std;
//int main()
//{
//	ifstream cin("cufere.in");
//	ofstream cout("cufere.out");
//	int c;
//	cin >> c;
//	if (c == 1)
//	{
//		map<short, int> m;
//		int n;
//		cin >> n;
//		for (int i = 1; i <= 27 * n; i++)
//		{
//			int x;
//			cin >> x;
//			if(x)
//				m[x % 100] += x/100;
//		}
//		for (auto i : m)
//			cout << i.first << " " << i.second << endl;
//	}
//	else
//	{
//		vector<int> ciur(101);
//		for (int i = 2; i <= 100; i++)
//			if (ciur[i] == 0) 
//				for (int j = 2 * i; j <= 100; j += i)
//					ciur[j] = 1;
//		map<short, int> m;
//		int n;
//		cin >> n;
//		for (int i = 1; i <= 27 * n; i++)
//		{
//			int x;
//			cin >> x;
//			if (x)
//				m[x % 100] += x / 100;
//		}
//		int nr = 0;
//		for (auto i : m)
//		{
//			if (ciur[i.first] == 0)
//			{
//				while (i.second >= 16)
//				{
//					if (nr % 9 == 0 and nr != 0)
//						cout << endl;
//					cout << 16 << i.first << " ";
//					nr++;
//					i.second = i.second - 16;
//				}
//			}
//			else
//			{
//				while (i.second >= 64)
//				{
//					if (nr % 9 == 0 and nr != 0)
//						cout << endl;
//					cout << 64 << i.first << " ";
//					nr++;
//					i.second = i.second - 64;
//				}
//			}
//			if (nr % 9 == 0 and nr != 0)
//				cout << endl;
//			if (i.second > 0)
//				cout << i.second << i.first << " ", nr++;
//		}
//
//		while (nr < n * 27)
//		{
//			if (nr % 9 == 0 and nr != 0)
//				cout << endl;
//			cout << 0 << " ";
//			nr++;
//		}
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//vector<long long> fib = { 1, 1 };
//int binary(int x)
//{
//	int l = 0;
//	int r = fib.size() - 1;
//	int m = (l + r) / 2;
//	while (l <= r)
//	{
//		m = (l + r) / 2;
//		if (fib[m] == x)
//			return m;
//		if (fib[m] < x)
//			l = m + 1;
//		else
//			r = m - 1;
//	}
//	return 0;
//}
//int main()
//{
//	int c;
//	cin >> c;
//	if (c == 1)
//	{
//		while (fib[fib.size() - 1] + fib[fib.size() - 2] < 2147483647)
//			fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
//		fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
//		int n, m;
//		cin >> n >> m;
//		int nr = 0;
//		for (int i = 0; i < n * m; i++)
//		{
//			int x;
//			cin >> x;
//			if(binary(x)) nr++;
//		}
//		cout << nr;
//	}
//	else
//	{
//
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//vector<int> prime;
//int alkdiv(int nr, int k)
//{
//	int nr1 = 0;
//	for (int i = 0; i < prime.size(); i++)
//	{
//		if (nr % prime[i] == 0)
//		{
//			nr1++;
//			if (nr1 == k)
//				return prime[i];
//		}
//	}
//	return 1;
//}
//int main()
//{
//	ofstream cout("cufar.out");
//	ifstream cin("cufar.in");
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int c;
//	cin >> c;
//	if (c == 1)
//	{
//		vector<int> ciur(1000001);
//		for (int i = 2; i <= 1000000; i++)
//			if (ciur[i] == 0)
//			{
//				prime.push_back(i);
//				for (int j = 2 * i; j <= 1000000; j += i)
//					ciur[j] = 1;
//			}
//		int n;
//		cin >> n;
//		while (n--)
//		{
//			int nr, k;
//			cin >> nr >> k;
//			cout << alkdiv(nr, k);
//		}
//	}
//	else
//	{
//		vector<int> ciur(1000001);
//		ciur[0] = 1;
//		ciur[1] = 1;
//		for (int i = 2; i <= 1000000; i++)
//			if (ciur[i] == 0)
//			{
//				prime.push_back(i);
//				for (int j = 2 * i; j <= 1000000; j += i)
//					ciur[j] = 1;
//			}
//		int n;
//		cin >> n;
//		int suma = 0;
//		while (n--)
//		{
//			int nr, k;
//			cin >> nr >> k;
//			suma += alkdiv(nr, k);
//		}
//		cout << suma;
//	}
//}
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() 
//  {
//	ifstream fin("exponent.in");
//	ofstream fout("exponent.out");
//	int n, k, a = 0, d;
//	fin >> n >> k;
//	for (int i = 1; i <= n; ++i) 
//	{
//		d = i;
//		while (d % k == 0) 
//		{
//			a++;
//			d /= k;
//		}
//	}
//	fout << a;
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//using namespace std;
//int main() 
//{
//	ifstream cin("numere.in");
//	ofstream fout("numere.out");
//	int n;
//	cin >> n;
//	vector<int> v(n * n);
//	for (int i = 0; i < n * n; i++)
//	{
//		int x;
//		cin >> x;
//		v[x]++;
//	}
//	for (int i = 1; i <= n * n; i++)
//	{
//		if (v[i] == 0)
//		{
//			cout << i << " ";
//			while (i < v.size() and v[i] == 0)
//				i++;
//			if (i == v.size())
//				cout << i;
//			else
//				cout << i - 1;
//			return 0;
//		}
//	}
//}
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//using namespace std;
//struct Cell
//{
//	int l, c;
//};
//int n;
//vector< vector < int >> v;
//Cell poz = { 0, 0 };
//void L()
//{
//	cout << 1;
//	while (v[poz.l][poz.c] != -2 and (poz.l != n and poz.c != n))
//	{
//		poz.l--;
//		if (poz.l == 0)
//			poz.l = n;
//	}
//}
//void R()
//{
//	cout << 2;
//	while (v[poz.l][poz.c] != -2 and (poz.l != n and poz.c != n))
//	{
//		poz.l++;
//		if (poz.l == n + 1)
//			poz.l = 1;
//	}
//}
//void U()
//{
//	cout << 3;
//	while (v[poz.l][poz.c] != -2 and (poz.l != n and poz.c != n))
//	{
//		poz.c--;
//		if (poz.c == 0)
//			poz.c = n;
//	}
//}
//void D()
//{
//	cout << 4;
//	while (v[poz.l][poz.c] != -2 and (poz.l != n and poz.c != n))
//	{
//		poz.c++;
//		if (poz.c == n + 1)
//			poz.c = 1;
//	}
//}
//void cer1()
//{
//	cin >> n;
//	v.resize(n + 2, vector<int>(n + 2));
//	for (int i = 1; i <= n; i++)
//		v[i][n + 1] = v[i][0] = v[n + 1][i] = v[0][i] = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		int x;
//		cin >> x;
//		v[i][x] = -2;
//	}
//	string s;
//	cin >> s;
//	while (s.size() and (poz.l != n and poz.c != n))
//	{
//		switch (s[0])
//		{
//		case 'L':
//			L();
//			break;
//		case 'R':
//			R();
//			break;
//		case 'D':
//			D();
//			break;
//		case 'U':
//			U();
//			break;
//		}
//		s.erase(s.begin());
//	}
//}
//int main()
//{
//	int c;
//	cin >> c;
//	if (c == 1)
//	{
//		int q;
//		cin >> q;
//		while (q--)
//			cer1();
//	}
//}
//#include<iostream>
//using namespace std;
//int NrXDivImp(int a[], int st, int dr, int x)
//{
//	if (st == dr)
//	{
//		if (a[st] == x)
//			return 1;
//		return 0;
//	}
//	else
//	{
//		int m = (st + dr) / 2;
//		int s1 = NrXDivImp(a, st, m, x);
//		int s2 = NrXDivImp(a, m + 1, dr, x);
//		return s1 + s2;
//	}
//}
//int main()
//{
//	int a[] = {2, 5, 1, 5, 3, 5, 5, 5, 7, 6 };
//	cout << NrXDivImp(a, 9, 10, 5);
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int NrXDivImp(vector<int> v, int st, int dr)
//{
//	if (st == dr)
//	{
//		if (v[st] % 2 == 1)
//			return 1;
//		return 0;
//	}
//	else
//	{
//		int m = (st + dr) / 2;
//		int s1 = NrXDivImp(v, st, m);
//		int s2 = NrXDivImp(v, m + 1, dr);
//		return s1 + s2;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v(n + 1);
//	for (int i = 1; i <= n; i++)
//		cin >> v[i];
//	if (NrXDivImp(v, 1, n) == 0)
//		cout << "NU";
//	else cout << "DA";
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int MaxDivImp(vector<int> v, int st, int dr)
//{
//	if (st == dr)
//		return v[st];
//	else
//	{
//		int m = (st + dr) / 2;
//		int s1 = MaxDivImp(v, st, m);
//		int s2 = MaxDivImp(v, m + 1, dr);
//		if (s1 > s2)
//			return s1;
//		else
//			return s2;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v(n + 1);
//	for (int i = 1; i <= n; i++)
//		cin >> v[i];
//	cout << MaxDivImp(v, 1, n);
//}
//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//vector<vector<int>> v;
//int n;
//struct Cell
//{
//	int x, y;
//};
//bool verif(Cell a, Cell b, bool dir)
//{
//	switch (dir)
//	{
//	case 0:
//		for (int j = a.y; j <= b.y; j++)
//			if (v[b.x][j] == 1)
//			{
//				//cout << "asd ";
//				return 0;
//			}
//		return 1;
//		break;
//	case 1:
//		for (int i = a.x; i <= b.x; i++)
//			if (v[i][b.y] == 1)
//			{
//				//cout << "dsa ";
//				return 0;
//			}
//		return 1;
//		break;
//	default:
//		return 1;
//		break;
//	}
//}
//int dei(Cell a, Cell b)
//{
//	int s1, s2;
//	s1 = s2 = 0;
//	int s = abs(b.x - a.x + 1) * abs(b.y - a.y + 1);
//	if (b.y + 1 < n and verif(a, { b.x, b.y + 1 }, 1))
//		s1 = dei(a, { b.x, b.y + 1 });
//	if (b.x + 1 < n and verif(a, { b.x + 1, b.y }, 0))
//		s2 = dei(a, { b.x + 1, b.y });
//	return max(s, max(s1, s2));
//}
//int main()
//{
//	ifstream cin("hambar.in");
//	ofstream cout("hambar.out");
//	cin.tie(0);
//	ios::sync_with_stdio(0);
//	int m;
//	cin >> n >> m;
//	v.resize(n, vector<int>(n, 0));
//	while (m--)
//	{
//		int x1, x2;
//		cin >> x1 >> x2;
//		x1--, x2--;
//		v[x1][x2]++;
//	}
//	int maxim = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if(v[i][j] == 0)
//			{
//				int de = dei({ i, j }, { i, j });
//				if (maxim < de)
//					maxim = de;//, cout << i << " " << j << " " << maxim << endl;
//			}
//		}
//	}
//	cout << maxim;
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<stack>
//using namespace std;
//#define MOD 666013
//typedef long long ll;
//int main()
//{
//	ifstream cin("changemin.in");
//	ofstream cout("changemin.out");
//	stack<ll> s;
//	vector<ll> v;
//	int c, n;
//	cin >> c >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	ll cnt = 0;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		while (s.size() and s.top() >= v[i])
//			s.pop();
//		s.push(v[i]);
//		cnt += s.size();
//	}
//	if(c==1)
//		cout << cnt;
//	else
//	{
//		stack<ll> s;
//		ll sumcoef = 0, sum = 0, scor = 0;
//		for (int i = n - 1; i >= 0; i--)
//		{	
//			while (s.size() and v[i] < s.top())
//			{
//				sumcoef = (sumcoef - sum) % MOD;
//				sum = (sum - s.top()) % MOD;
//				s.pop();
//			}
//			s.push(v[i]);
//			cnt -= s.size();
//			sum = (sum + v[i]) % MOD;
//			sumcoef = (sumcoef + sum) % MOD;
//			scor = (scor + sum * cnt + sumcoef) % MOD;
//		}
//		cout << scor;
//	}
//}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<fstream>
//using namespace std;
//#define MOD 111181111
//bool check_mountain(vector<int> v)
//{
//	int n = v.size();
//	int pos = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (v[i] == n)
//		{
//			pos = i;
//			break;
//		}
//	}
//	if (pos == 1 or pos == n) 
//		return false;
//	for (int i = 1; i <= pos; i++) 
//		if (v[i - 1] >= v[i]) 
//			return false;
//	for (int i = pos + 1; i < n; i++) 
//		if (v[i - 1] <= v[i])
//			return false;
//	return true;
//}
//vector<int> get_vec(vector<pair<int, int>> p) 
//{
//	vector<int> v;
//	for (int i = 0; i < (int)p.size(); i++) 
//		if (p[i].first != 0) 
//			v.push_back(p[i].first);
//	for (int i = p.size() - 1; i >= 0; i--)
//		if (p[i].second != 0) 
//			v.push_back(p[i].second);
//	return v;
//}
//
//int main()
//{
//	ifstream cin("munte.in");
//	ofstream cout("munte.out");
//	int n, c;
//	cin >> c >> n;
//	int full_pairs = n / 2, partial_pairs = (n + 1) / 2;
//	vector<pair<int, int>> pairs(partial_pairs + 1);
//	vector<int> found(n + 1, 0);
//	for (int i = 1; i <= n; i++)
//	{
//		int x;
//		cin >> x;
//		if (i > partial_pairs)
//			pairs[full_pairs + 1 - (i - partial_pairs)].second = x;
//		else
//			pairs[i].first = x;
//	}
//	for (int i = 1; i <= full_pairs; i++) 
//	{
//		if (pairs[i].first > pairs[i].second) 
//		{
//			swap(pairs[i].first, pairs[i].second);
//		}
//	}
//	sort(pairs.begin() + 1, pairs.begin() + 1 + full_pairs);
//	int ans = 2;
//	if (check_mountain(get_vec(pairs))) 
//	{
//		for (int i = 2; i <= full_pairs; i++) 
//		{
//			if (pairs[i].first > pairs[i - 1].second) 
//			{
//				ans = (ans * 2) % MOD;
//			}
//		}
//	}
//	else
//		ans = 0;
//	if (c == 1)
//		if (ans)
//			cout << "DA";
//		else
//			cout << "NU";
//	else
//		cout << ans;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//pair <int, int> d[2][11][1001][2];
//#define MOD 1000000007
//void join(pair <int, int >& s1, pair <int, int > s2, bool inc) 
//{
//	if (inc)
//		s2.first++;
//	if (s2.first < s1.first)
//		s1 = s2;
//	else if (s2.first == s1.first)
//		s1 = { s1.first , 
//			(s1.second + s2.second) % MOD };
//}
//
//pair <int, int > solve(int n, int steps, int sum, vector <int > v) 
//{
//	for (int i = 0; i < 2; i++) 
//	{
//		for (int j = 0; j <= steps; j++) 
//		{
//			for (int k = 0; k <= sum; k++) 
//			{
//				d[i][j][k][0] = d[i][j][k][1] = { INT_MAX , 0 };
//			}
//		}
//	}
//	d[0][0][0][0] = { 0 , 1 };
//	for (int i = 1; i <= n; i++) 
//	{
//		for (int j = 0; j <= steps; j++) 
//		{
//			for (int k = 0; k <= sum; k++) 
//			{
//				d[i & 1][j][k][0] = d[i & 1][j][k][1] = { INT_MAX , 0 };
//				join(d[i & 1][j][k][0], d[(i - 1) & 1][j][k][0], 0);
//				join(d[i & 1][j][k][0], d[(i - 1) & 1][j][k][1], 0);
//				if (k >= v[i]) {
//					join(d[i & 1][j][k][1],	d[(i - 1) & 1][j][k - v[i]][1], 1);
//					if (j > 0) {
//						join(d[i & 1][j][k][1],	d[(i - 1) & 1][j - 1][k - v[i]][1], 1);
//						join(d[i & 1][j][k][1],	d[(i - 1) & 1][j - 1][k - v[i]][0], 1);
//					}
//				}
//			}
//		}
//	}
//	pair <int, int > ans = { INT_MAX , 0 };
//	for (int j = 0; j <= steps; j++) 
//	{
//		for (int bit = 0; bit < 2; bit++) 
//		{
//			if (d[n & 1][j][sum][bit].first < ans.first) 
//				ans = d[n & 1][j][sum][bit];
//			else if (d[n & 1][j][sum][bit].first == ans.first)
//				ans.second = (ans.second + d[n & 1][j][sum][bit].second) % MOD;
//		}
//	}
//	if (ans.first == INT_MAX)
//		return { 0 , 0 };
//	return ans;
//}
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, k, s;
//		cin >> n >> k >> s;
//		vector<int> v(n + 1);
//		for (int i = 1; i <= n; i++)
//			cin >> v[i];
//		pair<int, int> ans = solve(n, s, k, v);
//		cout << ans.first << " " << ans.second << endl;
//	}
//}
//#include<iostream> //5:25
//#include<fstream>
//#include<vector>
//#include<stack>
//using namespace std;
//int main()
//{
//	ifstream cin("scara.in");
//	ofstream cout("scara.out");
//	stack<int> s;
//	int n;
//	cin >> n;
//	vector<int> v(n + 1, -1);
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		s.push(x);
//	}
//	v[0] = s.top();
//	s.pop();
//	int i = 0;
//	v[n] = -2;
//	while (true)
//	{
//		i = 0;
//		while (v[i] != -1)
//		{
//			i++;
//			if (v[i] == -2)
//			{
//				for (int i = 0; i < v.size() - 1; i++)
//					cout << v[i] << " ";
//				return 0;
//			}
//			//cout << i << " ";
//		}
//		v[i] = s.top();
//		s.pop();
//		for (int j = 0; j < i; j++)
//		{
//			s.push(v[j]);
//			v[j] = -1;
//		}
//	}
//}
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<queue>
//using namespace std; //2:25 ramas
//struct Cell
//{
//	int l, c;
//};
//struct Portals
//{
//	int x, y;
//};
//struct Matrix
//{
//	int val = 0;
//	bool Portal = 0, Door = 0;
//};
//int t;
//int LeeWithoutPortals(Cell start, Cell stop, vector< vector < Matrix >> v)
//{
//	Cell crt;
//	queue<Cell> Q;
//	v[start.l][start.c].val = 0;
//	Q.push(start);
//	vector<int> l = { 0, -1, 0, 1, 0 }, c = { 0, 0, 1, 0, -1 };
//	int val;
//	while (!Q.empty())
//	{
//		crt = Q.front();
//		Q.pop();
//		val = v[crt.l][crt.c].val;
//		for (int i = 1; i <= 4; i++)
//		{
//			if (v[crt.l + l[i]][crt.c + c[i]].val != -1)
//			{
//				if (val + 1 < v[crt.l + l[i]][crt.c + c[i]].val or v[crt.l + l[i]][crt.c + c[i]].val == 0)
//				{
//					if (v[crt.l + l[i]][crt.c + c[i]].Door == 1)
//					{
//						Q.push({ crt.l + l[i], crt.c + c[i] });
//						v[crt.l + l[i]][crt.c + c[i]].val = val + 1 + t;
//					}
//					else if (v[crt.l + l[i]][crt.c + c[i]].Portal == 1);
//					else
//					{
//						Q.push({ crt.l + l[i], crt.c + c[i] });
//						v[crt.l + l[i]][crt.c + c[i]].val = val + 1;
//					}
//				}
//			}
//		}
//	}
//	return v[stop.l][stop.c].val;
//}
//int main()
//{
//	ifstream cin("walle.in");
//	ofstream cout("walle.out");
//	int n, m, t;
//	cin >> n >> m >> t;
//	vector< vector < Matrix >> v, v1;
//	v.resize(n + 2);
//	for (int i = 0; i < n + 2; i++)
//		v[i].resize(m + 2);
//	for (int i = 0; i < n + 2; i++)
//		v[i][0].val = v[i][m + 1].val = -1;
//	for (int i = 0; i < m + 2; i++)
//		v[0][i].val = v[n + 1][i].val = -1;
//	vector < Portals > portal;
//	Cell start = { 0, 0 }, stop = { 0 ,0 }, crt;
//	for (int i = 1; i <= n; i++)
//	{
//		string s;
//		cin >> s;
//		for (int j = 0; j < s.size(); j++)
//		{
//			switch (s[j])
//			{
//			case '.':
//				v[i][j + 1].val = 0;
//				break;
//			case '#':
//				v[i][j + 1].val = -1;
//				break;
//			case '+':
//				v[i][j + 1].val = 0;
//				v[i][j + 1].Door = 1;
//				break;
//			case 'P':
//				v[i][j + 1].val = 0;
//				v[i][j + 1].Portal = 1;
//				portal.push_back({ i, j + 1 });
//				break;
//			case 'W':
//				v[i][j + 1].val = 0;
//				start.l = i;
//				start.c = j + 1;
//				break;
//			case 'E':
//				v[i][j + 1].val = 0;
//				stop.l = i;
//				stop.c = j + 1;
//				break;
//			}
//		}
//	}
//	v1 = v;
//	int min = LeeWithoutPortals(start, stop, v1);
//	/*for(int i=0;i<portal.size();i++)
//	{
//		Cell start1 = start;
//		Cell stop1;
//		v = v1;
//		queue<Cell> Q;
//		v[start1.l][start1.c].val = 0;
//		Q.push(start1);
//		vector<int> l = { 0, -1, 0, 1, 0 }, c = { 0, 0, 1, 0, -1 };
//		int val;
//		stop1.l = portal[i].x;
//		stop1.c = portal[i].y;
//		while (!Q.empty() and v[stop1.l][stop1.c].val == 0)
//		{
//			crt = Q.front();
//			Q.pop();
//			val = v[crt.l][crt.c].val;
//			for (int i = 1; i <= 4; i++)
//				if (v[crt.l + l[i]][crt.c + c[i]].val == 0)
//				{
//					Q.push({ crt.l + l[i], crt.c + c[i] });
//					v[crt.l + l[i]][crt.c + c[i]].val = val + 1;
//					if (v[crt.l + l[i]][crt.c + c[i]].Door == 1)
//						v[crt.l + l[i]][crt.c + c[i]].val += t;
//				}
//		}
//	}*/
//	cout << min << " ";
//}
//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_map>
//#include<iterator>
//using namespace std;
//struct stru
//{
//	char letter;
//	bool isfirst;
//	int value;
//};
//struct stru1
//{
//	int ap;
//	bool isfirst;
//};
//long long transform(string s, unordered_map<char, int> map)
//{
//	long long number = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		number = number * 10 + map.find(s[i])->second;
//		//cout << map.find(s[i])->second << " " << s[i] << endl;
//	}
//	return number;
//}
//#include<fstream>
//int main()
//{
//	ifstream cin("artifact.in");
//	ofstream cout("artifact.out");
//	int n, m;
//	cin >> n >> m;
//	vector<string> st(n), dr(m);
//	string s;
//	int i = 0;
//	vector<stru1> v('z' - 'a' + 1);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> st[i];
//		v[st[i][0] - 'A'].isfirst = 1;
//		for (int j = 0; j < st[i].size(); j++)
//		{
//			v[st[i][j] - 'A'].ap++;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> dr[i];
//		v[dr[i][0] - 'A'].isfirst = 1;
//		for (int j = 0; j < st[i].size(); j++)
//		{
//			v[dr[i][j] - 'A'].ap++;
//		}
//	}
//	unordered_map<char, int>::iterator it;
//	unordered_map<char, int> map;
//	for (int i = 0; i < 'z' - 'a'; i++)
//	{
//		if (v[i].ap != 0)
//		{
//			map[i + 'A'] = v[i].isfirst;
//		}
//	}
//	map[(char)255]++;
//	int nr = 0;
//	bool ok = 1;
//	while (ok)
//	{
//		long long sumleft = 0, sumright = 0;
//		for (int i = 0; i < st.size(); i++)
//			sumleft += transform(st[i], map);
//		for (int i = 0; i < dr.size(); i++)
//			sumright += transform(dr[i], map);
//		//cout << sumleft << " " << sumright << endl;
//		if (sumleft == sumright)
//			nr++;
//		it = map.begin();
//		map[it->first]++;
//		while (it->second >= 10)
//		{
//			if (it->first == (char)255)
//			{
//				ok = 0;
//				break;
//			}
//			if (v[(int)(it->first - 'A')].isfirst)
//				map[it->first] = 1;
//			else
//				map[it->first] = 0;
//			it++;
//			if (it->first == (char)255)
//			{
//				ok = 0;
//				break;
//			}
//			map[it->first]++;
//		}
//		//cin.get();
//	}
//	cout << nr;
//}
