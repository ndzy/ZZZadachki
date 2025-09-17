// Задание 1

//#include <iostream>
//#include <cmath>
//int main(){
//  using namespace std;
//  int a, b, c;
//  printf("Введите коэффиценты квадратного уравнения: \n");
//  cin >> a >> b >> c;
//  int D = pow (-b, 2) - 4 * a * c;
//  int x1 = (-b + sqrt(D))/2*a, x2 = (-b - sqrt(D))/2*a;
//  if ( D > 0 ){
//    cout << "Корни квадратного уравнения: " << x1 << "; " << x2; 
//  } else {
//    printf("Дискриминант Меньше Нуля. Корней нет!");
//  }
//}

// Задание 2.1

//#include <iostream> 
//
//int main(){
//
//    using namespace std;
//    
//    int num;
//
//    cin >> num;
//
//    if(num % 2 == 0){
//        printf("Четное число");
//
//    } else {
//        printf("Число нечетное");
//
//    }
//    return 0;
//}

// Задание 2.2

//#include <iostream>
//
//int main(){
//    using namespace std;
//
//    int a;
//
//    cin >> a;
//
//    if(a >= 0){
//        printf("Число положительное");
//    } else {
//        printf("Число отрицательное");
//    }
//    return 0;
//}

// Задание с Лабораторной

//#include <iostream>
//
//int main(){
//    
//    int num;
//    using namespace std;
//    cin >> num;
//    int num1 = num / 100, num2 = num / 10 % 10, num3 = num % 10;
//    
//    cout << num1 << num2 << num3 << endl;
//    cout << num2 << num3 << num1 << endl;
//    cout << num3 << num2 << num1 << endl;
//    cout << num1 << num3 << num2 << endl;
//    cout << num3 << num1 << num2 << endl;
//    cout << num2 << num1 << num3 << endl;
//
//    return 0;
//}

// Задание 2.3

//#include <iostream>
//
//int main(){
//    
//    using namespace std;
//    int a, b;
//    
//    cin >> a  >> b;
//
//    if(b % a == 0){
//        printf("Является делителем");
//    } else{
//        printf("Не является делителем");
//    }
//    return 0;
//}

// Задание 2.4

//#include <iostream>
//
//int main(){
//    
//    using namespace std;
//    
//    int V1, V2;
//    printf("Введите V1: ");
//    cin >> V1;
//    printf("Введите V2: ");
//    cin >> V2;
//    
//    double V11 = V1 / 3.6;
//
//    if (V11 < V2){
//        printf("Первая скорость больше");
//    } else if (V11 > V2){
//        printf("Вторая скорость больше");
//    } else if (V11 == V2){
//        printf("Скорости равны");
//    }
//    return 0;
//}
//

// Задание 2.5

//#include <iostream>
//
//int main(){
//    int year;
//    using namespace std;
//    cin >> year;
//
//    if ( year % 1000 == 0){
//        cout << year / 100;
//    } else if(year % 100 == 0){
//        cout << year / 100;
//    } else if(year % 10 == 0){
//        cout << year / 100;
//    } else {
//        cout << year / 100 + 1;
//    }
//
//    return 0;
//}

// Заддание 2.6
//
//#include <iostream>
//
//int main(){
//    using namespace std;
//
//    int num1, num2;
//    cin >> num1 >> num2;
//
//    if (num1 > num2){
//        cout << "Наименьшее число: " << num2; 
//    } else if(num1 < num2){
//        cout << "Наименьшее число: " << num1;
//    } else {
//        cout << "Числа Равны.";
//    }
//    return 0;
//}

// Задание 2.7

//#include <iostream>
//#include <cmath>
//
//int main(){
//    using namespace std;
//
//    int Rsquare, Rround;
//    printf("Введите радиус Квадрата: ");
//    cin >> Rsquare; 
//    printf("Введите радиус Окружности: ");    
//    cin >> Rround;
//
//    int Ssquare = pow(Rsquare, 2);
//    int Sround = M_PI * pow(Rround, 2);
//
//    if (Ssquare < Sround){
//        printf("Площадь Окружности Больше. \n");
//        cout << "Площадь Квадрата: "<< Ssquare << " Меньше площади Круга: " << Sround; 
//    } else if (Ssquare > Sround) {
//        printf("Площаь Квадрата Больше. \n");
//        cout << "Площадь Квадрата: "<< Ssquare << " Больше площади Круга:" <<  Sround;
//    } else {
//        printf("Площади Равны. \n");
//        cout << "Площадь Круга: " << Ssquare << " = " << "Площади Квадрата: " << Sround;
//    }
//    return 0;
//}

// Задание 2.8

//#include <iostream>
//
//int main(){
//    using namespace std;
//
//    int num;
//    cin >> num;
//    int num1 = num / 10;
//    int num2 = num % 10;
//    if(num > 9 && num < 100w){
//       if((num1 + num2) % 2 == 0 ){
//           cout << num1 + num2 << " - Сумма четная.";
//       } else {
//           cout << num1 + num2 << " - Сумма нечетная.";
//       }    
//    } else {
//        printf("Число не двухзначное!");
//        return 1;
//    }
//    return 0;
//}

// Задание 2.9

// #include <iostream>

// int main(){
//     using namespace std; 
//     int num;
//     cin >> num;
//     if (num > 1 && num < 10){
//         printf("Число Однозначное.");
//     } else {
//         printf("Число НЕ Однозначное.");
//     }
//     return 0;
//}

// Задание 3.1

//#include <iostream>
//
//int main(){
//    using namespace std;
//
//    int n1, n2, n3;
//
//    cin >> n1 >> n2 >> n3;
//
//    if ( n1+n2>n3 && n2+n3>n1 && n1+n3>n2){
//        printf("Такой треугольник может существовать");
//    } else {
//        printf("Такого треугольника на Руси нет((");
//    }
//

// Заадание 3.2 

//#include <iostream>
//
//int main(){
//    using namespace std;
//
//    int num;
//    cin >> num;
//    if(num > 99 && num < 1000 && num % 2 == 0){
//        printf("Число трехзначное и четное.");
//    } else {
//        printf("Условия не выполняются(число не трехзначное/нечетное).");
//    }
//}

// Задание 3.3

//#include <iostream>
//
//int main(){
//    using namespace std;
//
//    int num;
//    cin >> num;
//
//    int num1 = num / 100, num2 = (num / 10) % 10, num3 = num % 10;
//    if(num > 99 && num < 1000){
//        if(num1 == num2 && num1 == num3 && num2 == num3){
//            cout << num << " - ";
//            printf("Все цифры Одинаковые.");
//        } else {
//            cout << num << " - ";
//            printf("Цифры в числе Разные.");
//        }
//    } else{
//        printf("Число не Трехзначное!!!");
//        return 1;
//    }
//}

// Задание 4.2 

//#include <iostream>   // Третья четверь - x < 0: y < 0
//int main(){
//  using namespace std;
//  int x, y;
//  cin >> x >> y;
//  if ( x < 0 and y < 0){
//    printf("Это, определенно, третья четверь!");
//  } else {
//    printf("Это не третья четверть.");
//  }
//}

// Задание 5.2

//#include <iostream>
//
//int main(){
//  using namespace std;
//  int n1, n2, n3;
//  cin >> n1 >> n2 >> n3;
//  if(n1 < n2 and n1 < n3){
//    cout << endl << n1;
//  } else if (n2 < n1 and n2 < n3){
//    cout << endl << n2;
//  } else if ( n3 < n1 and n3 < n2){
//    cout << endl <<n3;
//  } else if ( n1 == n2 and n3 < n1){
//    cout << endl << n3;
//  } else if ( n1 == n2 and n3 > n1){
//    cout << endl << n1;
//  } else if ( n2 == n3 and n1 < n2){
//    cout << endl << n1;
//  } else if ( n2 == n3 and n1 > n2){
//    cout << endl << n1;
//  }
//}

// Задание 6.2

#include <iostream>

int main(){
  using namespace std;
  char letter;
  cin >> letter;
  if ( letter >= 'A' and letter <= 'Z'){
    printf("Буква является латинской и заглавной.");
  } else {
    printf("Буква не соответствует условиям.");
  }
}