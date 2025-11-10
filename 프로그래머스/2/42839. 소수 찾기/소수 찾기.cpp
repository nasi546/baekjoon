#include <string>
#include <set>
#include <cmath>
#include <cstring>
using namespace std;

set<int> nums;    // 만들어진 모든 숫자(중복 제거)
bool used[7];     // 각 자릿수 사용 여부

// 소수 판별 함수
bool isPrime(int x) {
    if (x < 2) return false;          // 0, 1 제외

    int limit = (int)sqrt(x);         // √x까지만 검사
    for (int i = 2; i <= limit; i++) {
        if (x % i == 0) return false; // 나누어 떨어지면 소수 아님
    }
    return true;
}

// DFS로 가능한 모든 숫자 만들기
void dfs(const string &numbers, string cur) {
    // 현재까지 만든 문자열이 비어있지 않으면 숫자로 변환해서 set에 저장
    if (!cur.empty()) {
        int val = stoi(cur);
        nums.insert(val);
    }

    // 아직 사용하지 않은 인덱스를 하나씩 골라서 이어 붙이기
    for (int i = 0; i < (int)numbers.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            dfs(numbers, cur + numbers[i]);
            used[i] = false;   // 백트래킹
        }
    }
}

// Programmers에서 호출하는 함수
int solution(string numbers) {
    nums.clear();
    memset(used, 0, sizeof(used));

    dfs(numbers, "");

    int answer = 0;
    for (int x : nums) {
        if (isPrime(x)) answer++;
    }
    return answer;
}
