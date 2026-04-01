#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 단어들을 입력받아 벡터에 저장하는 함수
vector<string> readWords() {
    vector<string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    cout << "단어들을 입력하세요 (Ctrl+D로 종료):" << endl;
    vector<string> words = readWords();

    // 총 단어 개수 출력
    cout << "총 단어 개수: " << words.size() << endl;

    // 각 단어의 등장 횟수 계산 (map 대신 벡터 사용)
    vector<string> uniqueWords;
    vector<int> counts;

    for (const auto& w : words) {
        bool found = false;
        for (size_t i = 0; i < uniqueWords.size(); i++) {
            if (uniqueWords[i] == w) {
                counts[i]++;
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueWords.push_back(w);
            counts.push_back(1);
        }
    }

    cout << "\n각 단어의 등장 횟수:" << endl;
    for (size_t i = 0; i < uniqueWords.size(); i++) {
        cout << uniqueWords[i] << " : " << counts[i] << endl;
    }

    return 0;
}