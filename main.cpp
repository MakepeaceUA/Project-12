#include <iostream>
using namespace std;
#include <ctime>

// Задание 1
//int main()
//{
//    setlocale(0, "RUS");
//    int number;
//    int digit;
//    int input;

//    int Count_Digit;
//    int Count_Zero;

//    float Sum;
//    float Average;

//    Sum = 0;
//    Count_Digit = 0;
//    Count_Zero = 0;
//    cout << "Введите число:\n";
//    cin >> number;

//    cout << "1:Вывести количество цифр в числе.\n";
//    cout << "2:Вывести сумму цифр числа.\n";
//    cout << "3:Вывести среднее арифметическое цифр числа.\n";
//    cout << "4:Вывести количество нулей в числе.\n";
//    cin >> input;

//    while (number != 0)
//    {
//        digit = number % 10;
//        Sum += digit;
//        Count_Digit++;
//        Average = Sum / Count_Digit;

//       if (digit == 0)
//       {
//            Count_Zero++;
//        }

//        number /= 10;
//    }

//    switch (input) {
//    case 1:
//    {
//        cout << Count_Digit << "\n";
//        break;
//    }
//    case 2:
//    {
//        cout << Sum << "\n";
//        break;
//    }
//    case 3:
//    {
//        cout << Average << "\n";
//        break;
//    }
//    case 4:
//    {
//        cout << Count_Zero << "\n";
//        break;
//    }
//    default:
//        cout << "Ошибка.\n";
//    }
//}

// Задание 2
//int main()
//{
//    setlocale(0, "Rus");
//    int width;
//    int height;

//    cout << "Введите ширину клеток:\n";
//    cin >> width;
//    cout << "Введите высоту шахматной доски:\n";
//    cin >> height;

//    for (int h = 0; h < height; h++)
//    {
//        for (int i = 0; i < 8; i++)
//        {
//            if (i % 2 == 0)
//            {
//                for (int j = 0; j < width; j++)
//                {
//                    cout << "*";
//                }
//            }
//            else
//            {
//                for (int l = 0; l < width; l++)
//                {
//                    cout << "_";
//                }
//            }
//        }
//        cout << "\n";
//    }
//}

// Задание 4
//int main()
//{
//    for (int i = 0; i <= 9; i++)
//    {
//        cout << "A" << i;
//        cout << " B" << i;
//        cout << " C" << i;
//        cout << " D" << i;
//        cout << " E" << i;
//        cout << " F" << i;
//        cout << " G" << i;
//        cout << " H" << i;
//        cout << " I" << i;
//        cout << " J" << i << "\n\n";
//    }

//}


