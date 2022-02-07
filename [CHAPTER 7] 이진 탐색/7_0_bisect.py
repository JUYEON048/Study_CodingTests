from bisect import bisect_left, bisect_right


if __name__ == "__main__" :
  a = [1, 2, 4, 4, 8]
  x = 4

  print(bisect_left(a, x))
  print(bisect_right(a, x))
  print("-" * 5)

  x = 2
  print(bisect_left(a, x))
  print(bisect_right(a, x))
  print("-" * 5)

  x = 9
  print(bisect_left(a, x))
  print(bisect_right(a, x))

'''
2
4
-----
1
2
-----
5
5
'''
