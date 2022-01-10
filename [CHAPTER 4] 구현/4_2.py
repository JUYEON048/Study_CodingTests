// 4_2.py
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
H = int(input())

cnt = 0
for h in range(H + 1):
  for m in rnage(60):
    for s in range(60):
    if '3' in str(h) + str(m) + std(s):
      cnt += 1

print(cnt)


