// Задание 1.1 Объем и Площадь куба

#include <iostream>
#include <cmath>
using namespace std

int main()
{
  int lenght, volume, square;
  printf("Введи длину!!! >  "); 
  cin >> lenght; 
  volume = pow(lenght, 3);
  square = pow(lenght, 2)*6;
  cout << "Объем: " << volume << endl;
  cout << "Площадь поверхностей: " << square;

  return 0;
}

// Задание 1.2 Длина и площадь окружност

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int radius;
  printf("Введите Радиус > ");
  cin >> radius;
  cout << "Вот длина Окружности: "<< 3.14*2*radius << endl;
  cout << "Вот площадь Окружности: " << 3.14*pow(radius, 2);
  return 0;
}

// Задание 1.3 Даны два катета, посчитать гипотенузу

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int leg1, leg2;
  printf("Введите катеты: ");
  cin >> leg1 >> leg2;
  cout << sqrt(pow(leg1, 2)+pow(leg2, 2)) << "- Длина гипотенузы"; // Литералли теорема Пифагора
}

// Задание 1.4 Даны два числа. Найти среднее геометрическое

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int num1, num2;
  printf ("Введи свои числа > ");
  cin >> num1 >> num2;
  cout << (num1 + num2) / 2;
}

// Задание 2.1 Посчитать сумму цифр 4хзначного числа

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num; 
  printf("Введи своё четырехзначное число > ");
  cin >> num;
  if (num < 1000 || num > 9999){
    printf("Число не четырёхзначное!!!");
    return 1;
  }
  int num1 = num / 1000; 
  int num2 = (num / 100) % 10;
  int num3 = (num / 10) % 10; 
  int num4 = num % 10;
  cout << "Вот сумма цифр числа: " << num1 + num2 + num3 + num4;
}

// Задача 3.1	Дано двузначное число. Получить число, образованное при перестановке цифр заданного числа.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int num;
  printf("Введи свое Число > ");
  cin >> num;
  if (num <= 9 || num >= 100){
    printf("Число не двузначное.");
    return 1;
  }
  int num1 = num / 10, num2 = num % 10;
  cout << "Вот реверс числа: " << num2 << num1;
}

// Задача 3.2 В трехзначном числе зачеркнули первую цифру и приписали ее в конце. Найти полученное число

#include <iostream>

using namespace std;

int main()
{
  int num;
  printf("Введите трехзначное число > "); cin >> num;
  if ( num <= 99 || num >= 1000 ){
    printf("Число не трехзначное!!!");
    return 1;
  }
  int num1 = num / 100, num2 = (num / 10) % 10,num3 = num % 10;
  cout << "Вот итоговое число: " << num2 << num3 << num1;
}

// Задание 3.3. Дано трехзначное число. Первую и вторую цифру переместили в конец.
 
#include <iostream>
 
using namespace std;
 
int main(){   
   int num;
   printf("Введите Число: "); cin >> num;
   if( num <= 99 || num >= 1000){
     printf("Число не трехзначное!!!");
     return 1;
   }
   int num1 = num /100, num2 = (num / 10) % 10, num3 = num % 10;
   cout << "Итоговое число: " << num3 << num1 << num2;
}
  
// Задание 3.7. Дано трехзначное число. Найти произведение цифр.

#include <iostream>

using namespace std;

int main(){
  int num;
  printf("Число введи ежи > "); cin >> num;
  if (num <= 99 || num >= 1000){
    printf("да я твой рот ебал");
    return 0;
  } 
  int num1 = num / 100, num2 = (num / 10) % 10, num3 = num % 10;
  cout << "Итоговое число: " << num1 * num2 * num3; 
}

// Задание 3.8: Дано 3хзначное число. Переместили первую и третью цифру в конец. 

#include <iostream>

using namespace std;

int main(){
  int num;
  printf("Введите число > "); cin >> num;
  if( num <= 99 || num >= 1000 ){
    printf("бля");
    return 1;
  }
  int num1 = num / 100, num2 = (num / 10) % 10, num3 = num % 10;
  cout << "Итоговое число: "<< num2 << num1 << num3;
}

