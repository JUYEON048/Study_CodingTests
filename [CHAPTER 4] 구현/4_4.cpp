// 4_4.cpp
// 게임개발

//Answer _ Python
/*

*/

//Answer _ c++
#include <iostream>

int n, m, x, y, direction;

int d[50][50]; // 방문여부
int arr[50][50]; //전체 맵 정보

int dx[] = {-1, 0, 1, 0}; // 북, 동, 남, 서 
int dy[] = {0, 1, 0, -1};

// 왼쪽으로 회전
void turn_left()
{
  direction -= 1;
  if (direction == -1) direction = 3;
}

int main(void)
{
  std::cin >> n >> m;
  std::cin >> x >> y >> direction;

  d[x][y] = 1; //현재 좌표 방문 처리

  // 전체 맵 정보 입력 받기
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      int x;
      std::cin >> x;
      arr[i][j] = x;
    }
  }

  // 시뮬레이션 시작
  int cnt = 1;
  int turn_time = 0;
  while (true)
  {
    turn_left();

    int nx = x + dx[direction];
    int ny = y + dy[direction];

    if (d[nx][ny] == 0 && arr[nx][ny] == 0)
    {
      // 회전한 후 정면에 가보지 않은 칸이 존재하는 경우
      d[nx][ny] = 1; //방문 처리(표시)
      x = nx;
      y = ny;
      cnt += 1; // 새로운 칸 방문 count
      turn_time = 0;
      continue;
    }
    else turn_time += 1;

    if(turn_time == 4)
    {
      // 네 방향 모두 갈 수 없는 경우
      nx = x - dx[direction];
      ny = y - dy[direction];

      if(arr[nx][ny] == 0)
      {
        // 뒤로 갈 수 있다면 이동
        x = nx;
        y = ny;
      }
      else break; // 뒤가 바다로 막힘
      turn_time = 0;
    }
  }
  std::cout << cnt << '\n';
}



