// 8_2.cpp
// top-bottom
#include <bits/stdc++.h>

using namespace std;

// Memoization
long long d[100];

// 피보나치 함수를 재귀함수로 구현
// 탑다운 다이나믹 프로그래밍
long long fibo(int x)
{
  if(x==1 || x==2)
  {
    return 1;
  }

  if(d[x] != 0)
  // 이미 계산한 적 있는 문제라면 그대로 반환
  {
    return d[x];
  }

  // 아직 계산하지 않은 문제라면 점화식에 따라서 피보나치 결과 반환
  d[x] = fibo(x-1) + fibo(x-2);
  return d[x];
}


int main(void)
{
  cout << fibo(50) << '\n';
}