#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numbers;
    double value;

    cout << "실수를 입력하세요 (Ctrl+D로 종료):" << endl;

    // 입력받아 벡터에 저장
    while (cin >> value) {
        numbers.push_back(value);
    }

    // 합계 계산
    double sum = 0.0;
    for (double num : numbers) {
        sum += num;
    }

    // 평균 계산
    double average = 0.0;
    if (!numbers.empty()) {
        average = sum / numbers.size();
    }

    cout << "입력된 수의 개수: " << numbers.size() << endl;
    cout << "평균: " << average << endl;

    return 0;
}