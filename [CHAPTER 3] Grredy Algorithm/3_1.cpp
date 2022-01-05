// 3_1.cpp
//[예제3-1] 거스름돈

#include <bits/stdc++.h>

int n = 1260;
int cnt; //초기화 값은 자동으로 0을 가지고있음

int coinTypes[4] = {500, 100, 50, 10};

int main(void)
{
    for (int i = 0; i < 4; ++i)
    {
        cnt += n / coinTypes[i];
        n %= coinTypes[i];
    }
    std::cout << cnt << std::endl;
}
