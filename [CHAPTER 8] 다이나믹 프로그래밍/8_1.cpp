// 8_1.cpp
#include <bits/stdc++.h>

using namespace std;

//피보나치 함수를 재귀함수로 표현

int fibo(int x)
{
  if(x==1 || x==2)
  {
    return 1;
  }
  return fibo(x - 1) + fibo(x - 2);
}

int main(void)
{
  cout << fibo(4) << '\n';
}