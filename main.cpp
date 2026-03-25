#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cout << "First name ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Midterm + Final grades : ";
	double midterm, final;
	cin >> midterm >> final;

	cout << " enter all hw grades, then E0F: ";
	vector<double> homework;

	//new 함수 read+hw

	//종합 점수를 계산에 생성
	double final_grade = 0;
	streamsize prec = cout.precision();
	cout << "Final grade: " << setprecision(3) <<
		final_grade << setprecision(prec) << endl;
	return 0;
}