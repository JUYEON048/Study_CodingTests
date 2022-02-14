#8_1.py

#피보나치 함수를 재귀함수로 표현

def fibo(x):
  if x == 1 or x == 2:
    #재귀 함수가 종료될수 있는 시점을 명시
    return 1

  return fibo(x - 1) + fibo(x - 2)

print(fibo(4))