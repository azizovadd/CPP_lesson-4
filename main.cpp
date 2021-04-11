#include <iostream>

int main()
{
    
    // Задание 1. Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 (включительно), если да – вывести true, в противном случае – false;
    int number_1, number_2;
    std::cout<<"Task 1. Input first number: ";
    std::cin>>number_1;
    std::cout<<"Input second number: ";
    std::cin>>number_2;
    int summa=number_1+number_2;
    std::cout<<(((summa>=10) && (summa<=20))?"true":"false")<<"\n";
    
    //Задание 2. Написать программу, проверяющую, является ли некоторое число - натуральным простым. 
    int number_3;
    do {
        std::cout<<"Task 2. Input any positive number: ";
        std::cin>>number_3;
    }
    while (number_3<=1);
    int delitel;
    int chislo_deliteley=0;
    
    for (delitel=1;delitel<=number_3;delitel++)
    {
        if (number_3 % delitel == 0)
            chislo_deliteley++;
    }
        std::cout<<((chislo_deliteley<3)?"Number is prime":"Number is not prime")<<"\n";
    
    //Задание 3. Написать программу, выводящую на экран “истину”, если две целочисленные константы, объявленные в её начале либо равны десяти сами по себе, либо их сумма равна десяти.
    std::cout<<"Task 3. Check, if any number from first task or their sum equals 10: ";
    std::cout<<(((number_1==10)||(number_2==10)||(summa==10))?"true":"false")<<"\n";

    //Задание 4. Написать программу, которая определяет является ли год високосным. Каждый 4-й год является високосным, кроме каждого 100-го, при этом каждый 400-й – високосный.
    
    int year;
    
    do 
    {
        std::cout<<"Input any year: ";
        std::cin>>year;
    }
    while (year<1);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 ==0)
                std::cout<<"\nYear is leap";
            else std::cout<<"\nYear is not leap";
        }
        else std::cout<<"\nYear is leap";
    }
    else std::cout<<"\nYear is not leap";

    return 0;
}