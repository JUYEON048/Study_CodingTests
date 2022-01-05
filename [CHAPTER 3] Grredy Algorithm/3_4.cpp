// 3_4.cpp 
// 1이 될 때까지(Youtube 설명 있음)
#include <iostream>

int n,k;
int result;

int main() {
  std::cin >> n >> k;

  while (true)
  {
    int target = (n / k) * k;
    // 몫(n/k)에 k를 곱하면 나누어떨어지는 최대 수 -> target
    
    result += (n-target); // (n-target) : 1을 빼는 횟수
    n = target;

    std::cout << " target :" << target << ", result : " << result << std::endl;

    if (n<k) break;
    
    result += 1;
    n /= k;

    std::cout << " n :" << n << std::endl;
    std::cout << " -------------" << std::endl;
  }
  result = result + (n-1); 
  //위에 while문에서는 target이 0이 될때까지 while문이 수행됨.
  //따라서 1이되는게 목적이므로, n-1을해주는 것(마지막에 1을빼는 연산과정을 미포함)
  std::cout << result << std::endl;
} 


/*
[Answer]

#include <bits/stdc++.h>

using namespace std;

int n, k;
int result;

int main() {
    // N, K를 공백을 기준으로 구분하여 입력 받기
    cin >> n >> k;

    while (true) {
        // N이 K로 나누어 떨어지는 수가 될 때까지만 1씩 빼기
        int target = (n / k) * k;
        result += (n - target);
        n = target;
        // N이 K보다 작을 때 (더 이상 나눌 수 없을 때) 반복문 탈출
        if (n < k) break;
        // K로 나누기
        result += 1;
        n /= k;
    }

    // 마지막으로 남은 수에 대하여 1씩 빼기
    result += (n - 1);
    cout << result << '\n';
}

*/
