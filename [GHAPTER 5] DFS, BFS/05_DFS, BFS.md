## **[CHAPTER 5] 구현**
<br/>

- **탐색**(Search)이란 많은 양의 데이터 중에서 원하는 데이터를 찾는 과정을 말한다.
- 대표적인 그래프 탐색 알괼즘으로는 **DFS**와 **BFS**가 있다.
- 코딩테스트에서 매우 자주 등장하는 유형.

<br/>

### [1] **스택 자료구조**
- 먼저 들어 온 데이터가 나중에 나가는 형식(선입후출)의 자료구조.
- 입구와 출구가 동일한 형태.

<br/>

### [2] **큐 자료구조**
- 먼저 들어 온 데이터가 먼저 나가는 형식(선입선출)의 자료구조.
- 큐는 입구와 출구가 모두 뚫려 있는 터널과 같은 형태로 시각화 할 수있다.

<br/>

### [3] **재귀 함수**
- 재귀 함수(Recursive Function)란 자기 자신을 다시 호출하는 함수를 의미.
- 재귀 함수를 잘 활용하면 복잡한 알고리즘을 간결하게 작성 가능.
- 단, 오히려 다른 사람이 이해하기 어려운 형태의 코드가 될 수 있으므로 신중하게 사용해야 한다.
- 모든 재휘 함수는 반복문을 이용하여 동일한 기능을 구현할 수 있다.
- 재귀 함수가 반복문보다 유리한 경우도 있고 불리한 경우도 있다.
- 컴퓨터가 함수를 연속적으로 호출하면, 컴퓨터 메모리 내부의 스택 프레임에 쌓인다.
- 스택을 사용해야 할 때 구현상 스택 라이브러리 대신에 재귀 함수를 이용하는 경우가 많다.

<br/>

### [4] **DFS(Depth-First Search)**
- DFS는 깊이 우선 탐색이라고 부르며 그래프에서 깊은 부분을 우선적으로 탐색하는 알고리즘이다.
- DFS는 스택 자료구조(혹은 재귀 함수)를 이용하며, 구체적인 동작 과정은 다음과 같다. <br/>
  1. 탐색 시작 노드를 스택에 삽입하고 방문 처리를 한다.
  2. 스택의 최상단 노드에 방문하지 않은 인접한 노드가 하나라도 있으면 그 노드를 스택에 넣고 방문 처리한다. 방문하지 않은 인접 노드가 없으면 스택에서  최상단 노드를 꺼낸다.
  3. 더 이상 2번의 과정을 수행할 수 없을 때 까지 반복한다.
- 주로 방문기준은 번호가 낮은 인접 노드 부터 하는 경우 많음. 


<br/>

### [5] **BFS(Breadth-First Search)**
- BFS는 너비 우선 탐색이라고도 부르며, 그래프에서 가까운 노드부터 우선적으로 탐색하는 알고리즘이다.
- BFS는 큐 자료구조를 이용하며, 구체적인 동작 과정은 다음과 같다.
  1. 탐색 시작 노드를 큐에 삽입하고 방문 처리를 한다.
  2. 큐에서 노드를 꺼낸 뒤에 해당 노드의 인접 노드 중에서 방문하지 않은 노드를 **모두** 큐에 삽입하고 방문 처리한다.
  3. 더 이상 2번의 과정을 수행할 수 없을 때 가지 반복한다.
- 주로 방문기준은 번호가 낮은 인접 노드 부터 하는 경우 많음. 
