// Homework_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include<time.h>

using namespace std;

/* Задание 1:
   Написать перегруженные функции(int, double, char) для выполнения следующих задач :
    Инициализация квадратной матрицы;
    Вывод матрицы на экран;
    Определение максимального и минимального элемента на главной диагонали матрицы;
    Сортировка элементов по возрастанию отдельно для каждой строки матрицы.*/

//void init(int arr[][6], int x, int y)            // Зто всё к заданию 1
//{
//    int i, j;                            
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            arr[i][j] = rand() % 100;
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void initd(double arrd[][6], int x, int y)            // Инициализация double
//{
//    int i, j;
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            arrd[i][j] = rand() % 100;
//            cout << arrd[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void initc(char arrc[][6], int x, int y)            // Зто всё к заданию 1
//{
//    int i, j;
//    for (int i = 0; i < x; i++)                  //В общем у меня чар будет заполнен числами, главное что функция рабочяя
//    {
//        for (int j = 0; j < y; j++)
//        {
//            arrc[i][j] = rand() % 100;
//            cout << arrc[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//int minim(int arr[][6], int x, int y)
//{
//    int Min = arr[0][0]; 
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Min > arr[i][j])
//                    Min = arr[i][j];
//            }
//        }
//    }
//    cout << endl << " Минимум по диагонали - " << Min;
//    return Min;
//}
//double minimd(double arrd[][6], int x, int y)
//{
//    int Min = arrd[0][0];
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Min > arrd[i][j])
//                    Min = arrd[i][j];
//            }
//        }
//    }
//    cout << endl << " Минимум по диагонали - " << Min;
//    return Min;
//}
//char minimc(char arrc[][6], int x, int y)
//{
//    int Min = arrc[0][0];
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Min > arrc[i][j])
//                    Min = arrc[i][j];
//            }
//        }
//    }
//    cout << endl << " Минимум по диагонали - " << Min;
//    return Min;
//}
//int maxim(int arr[][6], int x, int y)
//{
//    int Max = arr[0][0];
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Max < arr[i][j])
//                    Max = arr[i][j];
//            }
//        }
//    }
//    cout << endl << " Максимум по диагонали - " << Max;
//    return Max;
//}
//double maximd(double arrd[][6], int x, int y)
//{
//    int Max = arrd[0][0];
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Max < arrd[i][j])
//                    Max = arrd[i][j];
//            }
//        }
//    }
//    cout << endl << " Максимум по диагонали - " << Max;
//    return Max;
//}
//char maximc(char arrc[][6], int x, int y)
//{
//    int Max = arrc[0][0];
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Max < arrc[i][j])
//                    Max = arrc[i][j];
//            }
//        }
//    }
//    cout << endl << " Максимум по диагонали - " << Max;
//    return Max;
//}
//void swaping(int arr[][6], int x, int y)     //Сортровка
//{
//    cout << " Это ваш массив, отсортированый по возрастанию в каждой строке." << endl << endl;
//    for (int i = 0; i < x; i++)
//    {
//        for (int k = 0; k < 6; k++)
//        {
//            for (int j = 1; j < y; j++)
//            {
//                if (arr[i][j] < arr[i][j - 1])
//                    swap(arr[i][j], arr[i][j - 1]);
//            }
//        }
//    }
//    for (int i = 0; i < x; i++)                //вывод
//    {
//        for (int j = 0; j < y; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void swapingd(double arrd[][6], int x, int y)     //Сортровка
//{
//    cout << " Это ваш массив, отсортированый по возрастанию в каждой строке." << endl << endl;
//    for (int i = 0; i < x; i++)
//    {
//        for (int k = 0; k < 6; k++)
//        {
//            for (int j = 1; j < y; j++)
//            {
//                if (arrd[i][j] < arrd[i][j - 1])
//                    swap(arrd[i][j], arrd[i][j - 1]);
//            }
//        }
//    }
//    for (int i = 0; i < x; i++)                //вывод
//    {
//        for (int j = 0; j < y; j++)
//        {
//            cout << arrd[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void swapingc(char arrc[][6], int x, int y)     //Сортровка
//{
//    cout << " Это ваш массив, отсортированый по возрастанию в каждой строке." << endl << endl;
//    for (int i = 0; i < x; i++)
//    {
//        for (int k = 0; k < 6; k++)
//        {
//            for (int j = 1; j < y; j++)
//            {
//                if (arrc[i][j] < arrc[i][j - 1])
//                    swap(arrc[i][j], arrc[i][j - 1]);
//            }
//        }
//    }
//    for (int i = 0; i < x; i++)                //вывод
//    {
//        for (int j = 0; j < y; j++)
//        {
//            cout << arrc[i][j] << " ";
//        }
//        cout << endl;
//    }
//}   // Задание 1

//Задание 3:
//Измените программы из первого и второго задания с помощью шаблонов
//template <typename T>
//void init(T arr[][6], int x, int y)            // Зто всё к заданию 3
//{
//    int i, j;
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            arr[i][j] = rand() % 100;
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//template <typename T>
//T minim(T arr[][6], int x, int y)
//{
//    int Min = arr[0][0];
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Min > arr[i][j])
//                    Min = arr[i][j];
//            }
//        }
//    }
//    cout << endl << " Минимум по диагонали - " << Min;
//    return Min;
//}
//template <typename T>
//T maxim(T arr[][6], int x, int y)
//{
//    int Max = arr[0][0];
//    for (int i = 0; i < x; i++)
//    {
//        for (int j = 0; j < y; j++)
//        {
//            if (i == j)
//            {
//                if (Max < arr[i][j])
//                    Max = arr[i][j];
//            }
//        }
//    }
//    cout << endl << " Максимум по диагонали - " << Max;
//    return Max;
//}
//template <typename T>
//void swaping(T arr[][6], int x, int y)     //Сортровка
//{
//    cout << " Это ваш массив, отсортированый по возрастанию в каждой строке." << endl << endl;
//    for (int i = 0; i < x; i++)
//    {
//        for (int k = 0; k < 6; k++)
//        {
//            for (int j = 1; j < y; j++)
//            {
//                if (arr[i][j] < arr[i][j - 1])
//                    swap(arr[i][j], arr[i][j - 1]);
//            }
//        }
//    }
//    for (int i = 0; i < x; i++)                //вывод
//    {
//        for (int j = 0; j < y; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}   // Задание 3

//void sredBall(int arr[],int n)    // Функция к заданию 3 по сортировке массивов. Задача про оценки
//{
//    float sr = 0;
//    for (int i = 0; i < n; i++)
//        sr += arr[i];
//    sr = sr / 10;
//    if (sr >= 10.7)
//        cout << endl << " Средний балл - " << sr << " степендия выходит.";
//    else
//        cout << endl << " Средний балл - " << sr << " степендия не выходит.";    
//}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //int const x = 6, y = 6;        // Зто всё к заданию 1
    //int arr[x][y];
    //int Min, Max;

    //init(arr,x,y);
    //minim(arr, x, y);    
    //maxim(arr, x, y);
    //cout << endl << endl;
    //swaping(arr, x, y);

    //double arrd[x][y];
    //cout << endl << endl;
    //initd(arrd, x, y);
    //minimd(arrd, x, y);
    //maximd(arrd, x, y);
    //cout << endl << endl;
    //swapingd(arrd, x, y);

    //char arrc[x][y];
    //cout << endl << endl;
    //initc(arrc, x, y);
    //minimc(arrc, x, y);
    //maximc(arrc, x, y);
    //cout << endl << endl;
    //swapingc(arrc, x, y);

    /*Сортировка массивов
        Домашнее задание
        Задание №1 :
    Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырьковой сортировки.*/

    /* int const x = 6;
     int arr[x];
     srand(time(0));
     for (int i = 0; i < x; i++)
     {
         arr[i] = rand() % 100;
         cout << arr[i] << endl;
     }
     for (int i = 0; i < x; i++)
     {
         for (int j = 0; j < x - 1; j++)
         {
             if (arr[j] > arr[j + 1])
                 swap(arr[j], arr[j + 1]);
         }
     }
     cout << endl << endl;
     for (int i = 0; i < x; i++)
     {
         cout << arr[i] << endl;
     }*/

     /*Задание №2.
         Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок.*/

         /* int const x = 6;
          int arr[x];
          srand(time(0));
          for (int i = 0; i < x; i++)
          {
              arr[i] = rand() % 100;
              cout << arr[i] << endl;
          }
          int tmp;
          for (int i = 0; i < 6; i++)
          {
              for (int j = 0; j < 6 - 1; j++)
              {
                  if (arr[j + 1] < arr[j])
                  {
                      tmp = arr[j + 1];
                      arr[j + 1] = arr[j];
                      arr[j] = tmp;
                  }

              }
          }
          cout << endl << endl;
          for (int i = 0; i < x; i++)
          {
              cout << arr[i] << endl;
          }*/

          /* Задание 3.
               Написать программу «успеваемость».Пользователь вводит 10 оценок студента.
               Реализовать меню для пользователя
                Вывод оценок(вывод содержимого массива)
                Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
                Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)*/

               /*int const n = 10;
               int arr[n];
               int peresdacha;
               int a = 0;
               float sr = 0;
               cout << " Введите оценки студента за его 10 работ." << endl;
               for (int i = 0; i < n; i++)
               {
                   cin >> arr[i];
                   cout << endl;
               }
               cout << "  Видим все его оценки ниже  "<< endl;
               for (int i = 0; i < n; i++)
               {
                   cout << "\t|\t" << arr[i] << "\t|\t" << endl;
               }
               while (a != 1)
               {
                   cout << " Данный студент пересдавал какие-либо работы ?\n 1) Да\n 0) Нет \n";
                   cin >> peresdacha;
                   if (peresdacha < 0 || peresdacha > 1)
                       cout << " Вы сделали недопустимый выбор. Попробуйте снова.";
                   else
                       a = 1;
               }
               if (peresdacha == 0)
                   sredBall(arr, n);
               else
                   while (peresdacha != 0)
                   {
                       cout << " Какую работу по счету он пересдавал?. Если больше ничего не исправлял, то нажмите 0." << endl;
                       cin >> peresdacha;
                       if (peresdacha == 0)
                           break;
                       if (peresdacha < 0 || peresdacha > 10)
                           cout << endl << " Вы ошиблись. Попробуйте снова";
                       else
                       {
                           cout << " На какую они справил?" << endl;
                           cin >> arr[peresdacha - 1];
                       }
                   }
               sredBall(arr, n);*/

               //Задание №4.
               //Необходимо отсортировать первые две трети массива в порядке возрастания, 
               //если среднее арифметическое всех элементов больше нуля; иначе - лишь первую треть.
               //Остальную часть массива не сортировать, а расположить в обратном порядке.

//    srand(time(0));
//    int const n = 10;
//    int arr[n];
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        arr[i] = rand();
//        cout << arr[i] << " ";
//        sum += arr[i];
//    }
//    cout << endl << endl;
//    if (sum / n > 0)                     //Первое условие
//    {
//        for (int i = 0; i <= (n / 3) * 2; i++)
//        {
//            for (int j = 0; j < (n / 3) * 2; j++)
//            {
//                if (arr[j] > arr[j + 1])
//                    swap(arr[j], arr[j + 1]);
//            }
//        }
//        for (int i = (n / 3) * 2 + 1; i < n - 1; i++)
//        {
//            for (int j = (n / 3) * 2 + 1; j < n - 1; j++)
//            {
//                if (arr[j] < arr[j + 1])
//                    swap(arr[j], arr[j + 1]);
//            }
//        }
//    }                              // Конец первого условия
//    if (sum / n < 0)               // Второе
//    {
//        for (int i = 0; i <= n / 3; i++)
//        {
//            for (int j = 0; j < n / 3; j++)
//            {
//                if (arr[j] > arr[j + 1])
//                    swap(arr[j], arr[j + 1]);
//            }
//        }
//        for (int i = n / 3 + 1; i < n - 1; i++)
//        {
//            for (int j = n / 3 + 1; j > n - 1; j++)
//            {
//                if (arr[j] < arr[j + 1])
//                    swap(arr[j], arr[j + 1]);
//            }
//        }
//    }                                    // Конец второго
//    for (int i = 0; i < n; i++)    
//        cout << arr[i] << " ";    
//}