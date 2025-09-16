### Суть задачи: доказать возможность существования шахматного хода. Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.

---
# Ладья:

```cpp
#include <iostream>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if (M1 == M2 || N1 == N2){ 
    printf("YES");
  } else {
    printf("NO");
  }
}
```

### Можно преобразовать как `M1 - M2 == 0`, `N1 - N2 == 0`, => условие можно заменить на `(M1 - M2) * (N1 - N2) == 0`:

```cpp
#include <iostream>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if ((M1 - M2) * (N1 - N2) == 0){ 
    printf("YES");
  } else {
    printf("NO");
  }
}
```

<img width="300" height="300" alt="изображение" src="https://github.com/user-attachments/assets/4b43749b-72c8-4b29-acd1-195d6ea53bb3" />


---
# Король:
### Есть закономерность, что координаты клеток после хода отличаются от координат клеток до хода `всего лишь на 1`.

```cpp
#include <iostream>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if (M1 - 1 == M2 || M1 == M2 || M1 + 1 == M2 && 
  N1 - 1 == N2 || N1 == N2 || N1 + 1 == N2){
    printf("YES");
  } else {
    printf("NO");
  }
}
```
### Запись можно упростить с помощью модуля `(функ. abs)`:

```cpp
#include <iostream>
#include <cmath>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if ( abs(M1 - M2) <= 1 && abs(N1 - N2) <= 1 ){
    printf("YES");
  } else {
    printf("NO");
  }
}
```
### Функция abs берет модуль от разности вертикальных и горизонтальных клеток хода короля, а так как модуль этой разности может быть равен `только 0 и 1`, т.к. только при таких значениях ход существует. 

<img width="300" height="300" alt="изображение" src="https://github.com/user-attachments/assets/7719b988-6a49-4397-8fd7-e560802a411c" />

---
# Слон:
### Есть закономерность, что `M1 - N1 == M2 - N2` для одной диагонали, и `M1 + N1 == M2 + N2` для другой. Таким образом:

```cpp
#include <iostream>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if ( M1 - N1 == M2 - N2 || M1 + N1 == M2 + N2 ){
    printf("YES");
  } else {
    printf("NO");
  }
}
```
### Для краткости, стоит записать через модуль `(функ. abs)`:

```cpp
#include <iostream>
#include <cmath>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if ( abs(M1 - M2) == abs(N1 - N2) ){
    printf("YES");
  } else {
    printf("NO");
  }
}
```

<img width="300" height="300" alt="изображение" src="https://github.com/user-attachments/assets/d85afb57-741c-4d18-8db9-45d0bf41e51a" />

---
# Ферзь:
### Так как варианты хода ферзя включают в себя варианты хода слона и ладьи, можно скомбинировать варианты:

```cpp
#include <iostream>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if (M1 - N1 == M2 - N2 || M1 + N1 == M2 + N2 && M1 == M2 || N1 == N2){
    printf("YES");
  } else {
    printf("NO");
  }
}
```
### Или проще, записать условие через модули:

```cpp
#include <iostream>
#include <cmath>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if ( abs(M1 - M2) == abs(N1 - N2) || (M1 - M2) * (N1 - N2) == 0){
    printf("YES");
  } else {
    printf("NO");
  }
}
```

<img width="300" height="300" alt="изображение" src="https://github.com/user-attachments/assets/5125208f-ef41-4736-8d31-df2730d10a5d" />

---
# Конь: 
### Если рассмотреть расстояние между точками координат,все ходы коня образуют квадрат со `стороной 5`. С учетом этого составим условие: 

```cpp
#include <iostream>
#include <cmath>
int main(){
  using namespace std;
  int M1, N1, M2, N2;          // M1, N1 - столбец, строка в начале. 
  cin >> M1 >> N1 >> M2 >> N2; // M2, N2 - столбец, строка в конце.
  if ( pow(M1 - M2, 2) + pow(N1 - N2, 2) == 5){
    printf("YES");
  } else {
    printf("NO");
  }
}
```

<img width="300" height="300" alt="изображение" src="https://github.com/user-attachments/assets/27598748-0b94-4117-906c-012c28444393" />


---
