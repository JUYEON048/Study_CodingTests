// 5_1.cpp
#include <iostream> 
#include <stack> 
//using namespace std; 

int main(void) 
{ 
  std::stack<int> s; 

  s.push(5);
  s.push(2);
  s.push(3);
  s.push(7);

  s.pop();

  s.push(1);
  s.push(4);

  s.pop();

  while(!s.empty())
  {
    std::cout << s.top()<< ' ';
    s.pop();
  }

}
