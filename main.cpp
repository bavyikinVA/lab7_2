#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    while (1)
    {
        //меню
        int m = 0;
        cout<<"Действия: \n 1 - ввод с файла,\n 2 - ввод с клавиатуры,\n 0 - выход. \n\t";
        cin >> m;
        if((m != 1) && (m != 2))
        {
            break;
        }
        system("cls");
 
    if (m == 1)
        {
            ifstream fin;
            fin.open("ITFCPP.txt");
 
        if (!fin.is_open())
            {
                cout<< "Ошибка открытия файла" <<endl;
            }
        else
            {
            string str;//переменная для текста
            int fsize = str.size();
            
            с=0ж
            while (!fin.eof()) 
            {
                fin.get(str[c]);
                c++;
            }
                  
            int ans = 0; //СУММА ЧИСЕЛ ИЗ СТРОКИ
            int cur = 0; 
            bool flag = false;
            for (int i = 0; i < fsize; i++)
            {
                if (str[i] >= '0' && str[i] <= '9') 
                {
                    cur *= 10;
                    cur += str[i] - '0';
                }
                else 
                {
                    if (str[i] == '-') 
                    {
                    flag = true;
                    continue;
                    }
                if (flag)
                {                                       
                    cur *= -1;
                }
                ans += cur;
                cur = 0;
                flag = false;
                }
            }   
                if (flag) 
                {
                    cur *= -1;
                }
                ans += cur;
                cout << ans << "\n";
            }
            fin.close();
        }
 
 
    if (m == 2)
        {
        string str;
        cout << "Введите строку символов:" << endl;
        cin.ignore(2, '\n');
        getline(cin, str, '\n');
        int fsize=str.size();
 
            int ans = 0; //СУММА ЧИСЕЛ ИЗ СТРОКИ
            int cur = 0; 
            bool flag = false;
            for (int i = 0; i < fsize; i++)
            {
                if (str[i] >= '0' && str[i] <= '9') 
                {
                    cur *= 10;
                    cur += str[i] - '0';
                }
                else 
                {
                    if (str[i] == '-') 
                    {
                        flag = true;
                        continue;
                    }
                    if (flag)
                    {                                       
                    cur *= -1;
                    }
                    ans += cur;
                    cur = 0;
                    flag = false;
                }
            }   
                if (flag) 
                {
                    cur *= -1;
                }
                ans += cur;
                cout << ans << "\n";
        }
    }
system("pause");
return 0;
}
