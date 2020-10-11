#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, x1, x2, repart, ipart,disc;
	int t = 5;
		cout << endl << "please input a,b,c:";
		cin >> a >> b >> c;
		cout << "The equation ";
		if (fabs(a) <= 1E-6)
		{
			cout << "in not quadratic"; exit(0);
		}
		else { disc = b * b - 4*a*c;
		if (fabs(disc) <= 1E-6)
				{
				cout << "has two equal roots:" << -b / (2 * a);
				}
			else if (disc>1E-6)
					{
						x1 = (-b + sqrt(disc)) / (2 * a);
						x2 = (-b - sqrt(disc)) / (2 * a);
						cout << "has two distinct real roots :" << x1 t << "," << x2;
					}
			else
				{
					repart = -b / (2 * a);
					ipart = sqrt(disc) / (2 * a);
					cout << "haa two complex roots:";
					cout << endl << repart << "+" << ipart;
					cout << endl << repart << "-" << ipart;
				}
		     }
		system("pause");
	    return 0;
}