
#include "Student_info.h"

bool compare(const Student_info&, const Student_info& b); {
	return a.name < b.name;

}//이름 비교 


istream& read_hw(istream&, Student_info&); // 한 학생의 정보 읽기
istream& read_hw(istream&, vector<double>&); // 모든 과제 점수 읽기