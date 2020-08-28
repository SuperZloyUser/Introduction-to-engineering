#ifndef FUNCS_H
#define FUNCS_H

#include <QString>
//#include <QMainWindow>

/**
    Функция, шифрующая строку алгоритмом Цезаря
    @param strIn исодная строка
    @param u сдвиг для шифра
    @return зашифрованная строка
*/
QString alg(QString strIn, int u);

/**
    Функция, проверяющая строку на палиндром
    @param strIn - проверяемая строка
    @return Является ли введённая строка палиндромом
*/
bool palindrom (QString strIn);

/**
    Функция, считающая количество гласных в строке
    @param strIn исодная строка
    @return колчество гласных в данной строке
*/
int countGlas(QString strIn);

/**
    Функция, считающая количество согласных в строке
    @param strIn исодная строка
    @return колчество согласных в данной строке
*/
int countSogl(QString strIn);

/**
    Функция, считающая количество букв в строке
    @param strIn исходная строка
    @return количество букв в данной строке
*/
int countLetters(QString strIn);

/**
    Функция, считающая количество латинских букв "А" в строке
    @param strIn исодная строка
    @return колчество латинских букв "А" в данной строке
*/
int countOfLetterA(QString strIn);

/**
    Функция, считающая количество латинских букв "Z" в строке
    @param strIn исодная строка
    @return колчество латинских букв "Z" в данной строке
*/
int countOfLetterZ(QString strIn);

/**
    Функция, округляющая число до k знаков после запятой
    @param strIn проверяемая строка
    @param u количество знаков после запятой
    @return Округлённое число типа данных QString
*/
QString okrugNK(QString strIn, int u);

#endif // FUNCS_H
