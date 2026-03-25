#pragma once
// student_info.h
#pragma once
// student_info.h

#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Student_info {
	string name;
	double midterm, final;
	vector<double> homework;

};

// 함수 원형 정의
bool compare(const Student_info&, const Student_info&); //이름 비교
istream& read_hw(istream&, Student_info&); // 한 학생의 정보 읽기
istream& read_hw(istream&, vector<double>&); // 모든 과제 점수 읽기

#endif // !GUARD_Student_info_h
#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Student_info {
	string name;
	double midterm, final;
	vector<double> homework;

};

// 함수 원형 정의
bool compare(const Student_info&, const Student_info&); //이름 비교
istream& read_hw(istream&, Student_info&); // 한 학생의 정보 읽기
istream& read_hw(istream&, vector<double>&); // 모든 과제 점수 읽기

#endif // !GUARD_Student_info_h
