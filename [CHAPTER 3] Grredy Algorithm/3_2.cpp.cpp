// 3_2.cpp 
// 큰 수의 법칙
#include <iostream>

int main() {
  int n, m , k;
  std::cin >> n >> m >> k;
  
  int N[n];
  for(int i=0; i<n; ++i)
  {
    std::cin >> N[i];
  }
} 


/*
[Answer]

#include <bits/stdc++.h>

using namespace std;

int n, m, k;
vector<int> v;

int main() {
    // N, M, K를 공백을 기준으로 구분하여 입력 받기
    cin >> n >> m >> k;

    // N개의 수를 공백을 기준으로 구분하여 입력 받기
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end()); // 입력 받은 수들 정렬하기
    // vector에서 v.begin() : 벡터의 시작 주소를 반환
    // vector에서 v.end() : 벡터의 마지막 주소를 반환
    // sort() : 오름차순 정렬


    int first = v[n - 1]; // 가장 큰 수
    int second = v[n - 2]; // 두 번째로 큰 수

    // 가장 큰 수가 더해지는 횟수 계산
    int cnt = (m / (k + 1)) * k;
    cnt += m % (k + 1);

    int result = 0;
    result += cnt * first; // 가장 큰 수 더하기
    result += (m - cnt) * second; // 두 번째로 큰 수 더하기

    cout << result << '\n'; // 최종 답안 출력
}
*/