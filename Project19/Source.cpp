#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<cmath>

using namespace std;
ifstream infile;

int main()
{
	float v1;
	float v2;
	float a1;
	char opp;
	//ifstream infile;
	infile.open("calc.txt");
	if (!infile)
	{
		cout << "not found\n";
	}
	ofstream outfile;

	//cin >> v1 >> opp >> v2;
	while (infile>>v1>>opp>>v2)
	{
		
		
			switch (opp)
			{
			case '+': a1 = v1 + v2;
				break;
			case '-': a1 = v1 - v2;
				break;
			case '*':a1 = v1 * v2;
				break;
			case '/': a1 = v1 / v2;
				break;
			case '>': a1 = v1 > v2;
				break;
			case '<': a1 = v1 < v2;
				break;
			case'^': a1 = pow(v1, v2);
				break;
			case'%': a1 = fmod(v1, v2);
				break;
			case '=': a1 = v1 == v2;
	

			}
			cout << fixed << setprecision(2);
			cout << v1 <<" "<< opp <<" "<< v2 << " = " <<" " << a1 << endl;
			outfile << fixed << setprecision(2);
			outfile<< v1 << opp << v2 << '=' << a1 << endl;
		

	}
	//cout << v1 << opp << v2 << '=' << a1 << endl;
	infile.close();
	system("PAUSE");
	return 0;
}