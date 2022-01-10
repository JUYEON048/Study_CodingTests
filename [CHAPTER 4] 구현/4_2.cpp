// 4_2.cpp
/*
[문제]
시각) 정수 N이 입력되면 00시 00분 00초부터 N시 59분 59초까지의 모든 시각 중 3이 하나라도 포함되는 모든 경우의 수는 구하는 프로그램은?

[해결 아이디어]
- 가능한 모든 시각의 경우를 하나씩 모두 세서 풀 수 있다.
- 하루는 86,400 -> 모든 경우는 86,400가지
- 단순히 시각을 1씩 증가시키면서 count
- 이러한 유형은 "완전 탐색(Brute Forcing)" 문제 유형.
  >> 가능한 경우의 수를 모두 검사해보는 탐색 방법
*/

 
//Answer
#include <iostream>

int H, cnt;

// 특정 시각 안에 '3' 포함 여부
bool check1(int h, int m, int s)
{
  if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3
      || s /10 == 3 || s % 10 == 3)
      return true;
  
  return false;
}

// inline , noexept, etc...
bool check2(const int& h, const int& m, const int& s)
{
  if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3
      || s /10 == 3 || s % 10 == 3)
      return true;
  
  return false;
}

int main(void)
{
  std::cin >> H;
  for( int h = 0; h <= H; h++)
  {
    for(int m = 0; m < 60; m++)
    {
      for (int s = 0; s < 60; s ++)
      {
        //if (check1(h,m,s)) cnt++;
        if (check2(h,m,s)) cnt++;
      }
    }
  }
  std::cout << cnt << '\n';
  return 0;
}
