// 8_3.cpp
// bottom - top
#include <bits/stdc++.h>

using namespace std;

// Memoization
long long d[100];
// long long 자료형을 쓰면 99번째 피보나치를 구하고자할 때 오버플로우 발생 *주의* 

int main(void)
{
  d[1] = 1;
  d[2] = 2;
  int n = 50;

  for (int i =3; i <= n; i++)
  {
    d[i] = d[i-1] + d[i-2];
  }
  cout << d[n] << '\n';
}