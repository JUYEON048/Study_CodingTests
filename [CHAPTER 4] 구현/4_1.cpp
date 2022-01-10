// 4_1.cpp
// 상하좌우

/*
#include <iostream>
#include <list>

int main()
{
  int N;
  std::cin >> N;
  std::list<char> map(6);

  char m;
  for(int i = 0; i < N; ++i)
  {
    //std::cin >> map(i);
    //string을 받을때 list로 받아볼까했는데,
    //std::stringn을 활용해야하는 듯 하다.
  }
  // if R
  // else if L
  // else if U
  // else if D
  // ....
}
*/
 
/*
#include <iostream>

int n;
std::string plans;
int x = 1, y = 1;

int dx[4] = {0, 0, -1, 1}; // L, R, U, D -> 행 변화
int dy[4] = {-1, 1, 0, 0}; // L, R, U, D -> 열 변화
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main(void)
{
  std::cin >> n;
  std::cin.ignore(); // 버퍼 비우기
                // 정수형 받은 후, 문자열을 받을 때 버퍼 비우는 과정이 필요하다고 함.
  std::getline(std::cin, plans);

  for(char m : plans)
  {
    int nx = -1, ny = -1;
    for (char mt : moveTypes)
    {
      if(m == mt)
      {
        nx = x + dx ?? //  range for문 쓰면 더 복잡하네 -.-
      }
    }
  }

}
*/

// Answer
#include <iostream>

int n;
std::string plans;
int x = 1, y = 1;

int dx[4] = {0, 0, -1, 1}; // L, R, U, D -> 행 변화
int dy[4] = {-1, 1, 0, 0}; // L, R, U, D -> 열 변화
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main(void)
{
  std::cin >> n;
  std::cin.ignore(); // 버퍼 비우기
                // 정수형 받은 후, 문자열을 받을 때 버퍼 비우는 과정이 필요하다고 함.
  std::getline(std::cin, plans);

  for(int i = 0; i < plans.size(); i++)
  {
    char plan = plans[i];

    int nx = -1, ny = -1;
    for (int j = 0; j < 4; j++)
    {
      if (plan == moveTypes[j])
      {
        nx = x + dx[j];
        ny = y + dy[j];
        std::cout << plan << ", " << nx << ", " << ny << ", " << std::endl;
      }
    }
    if (nx < 1 || ny < 1 || nx > n || ny > n) continue;

    x = nx;
    y = ny;
    std::cout << plan << ", " << x << ", " << y << ", " << std::endl;

    //contiue문은 여기로 이동한다.
    //loop의 몸체 끝으로 점프
  }
  std::cout << x << ' ' << y << '\n';
  return 0;
}

/*
$ ./main
5
R R R U D D
R, 1, 2, 
R, 1, 2, 
R, 1, 3, 
R, 1, 3, 
R, 1, 4, 
R, 1, 4, 
U, 0, 4, 
D, 2, 4, 
D, 2, 4, 
D, 3, 4, 
D, 3, 4, 
3 4
*/
