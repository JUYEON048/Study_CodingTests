// 4_3.cpp
/*
[문제]
왕실의 나이트) 8x8 좌표 평면상에서 나이트(체스 말)의 위치가 주어졌을 때 나이트가 이동할 수 있는 경우의 수를 출력하는 프로그램은?

[해결 아이디어]
- 요구사항대로  충실히 구현하면 되는 문제
- 나이트의 8가지 경로를 하나씩 확인하며 각 위치로 이동이 가능한지 확인
  >> 리스트를 이용하여ㅏ 8가지 방향에 대한 방향 벡터를 정의
*/


//Answer _ Python
/*
input_data = input()
row = int(intput_data[1])
column = int(ord(input_data[0])) - int(ord('a')) + 1
# ord() : 하나의 문자를 인자로 받고 해당 문자에 해당하는 유니코드 정수를 반환.

steps = [(-2, -1), (-1, -2), (1, -2), (2, -1), (2, 1), (1, 2), (-1, 2), (-2, 1)]

result = 0
for step in steps:
  next_row = row + step[0]
  next_column = column + step[1]

  if new_row >= 1 and next_row <= 8 and next_column >= 1 and next_column <= 8:
    result += 1

print(result)
*/

//Answer _ c++
#include <iostream>

std::string inputData;

int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main(void)
{
  std::cin >> inputData;
  int row = inputData[1] - '0';
  std::cout << "1) " << inputData[1] << '\n';
  std::cout << "2) " << row << '\n';
  int column = inputData[0] - 'a' + 1;
  std::cout << "3) " << inputData[0] << '\n';
  std::cout << "4) " << column << '\n';

  int result = 0;
  for (int i = 0; i < 8; i++)
  {
    int nextRow = row + dx[i];
    int nextColumn = column + dy[i];

    if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8)
    {
      result += 1;
    }
  }  
  std::cout << result << '\n';
  return 0;
}