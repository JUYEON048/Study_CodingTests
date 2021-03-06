#값이 특정 범위에 속하는 데이터 개수 구하기
from bisect import bisect_left, bisect_right

def count_by_range(a, left_value, right_value):
  right_index = bisect_right(a, right_value)
  left_index = bisect_left(a, left_value)
  return right_index - left_index


if __name__ == "__main__" :

  a = [1, 2, 3, 3, 3, 3, 4, 4, 8, 9]

  #값이 4인 데이터 개수 출력
  print(count_by_range(a, 4, 4)) 

  # 값이 [-1, 3] 범위에 있는 데이터 개수 출력
  print(count_by_range(a, -1, 3)) 
  # 1, 2, 3, 3, 3, 3

  # 값이 [1, 3] 범위에 있는 데이터 개수 출력
  print(count_by_range(a, 1, 3)) 
  # 1, 2, 3, 3, 3, 3

  # 값이 [-1, 2] 범위에 있는 데이터 개수 출력
  print(count_by_range(a, -1, 2)) 
  # 1, 2
