#pragma once
#ifndef FUNC_H
#define FUNC_H
const double PI = 3.1415926;

//���ε��ܳ�
double squareGirth(double l)
{
	return 4 * l;
}

//���ε����
double squareArea(double l)
{
	return l * l;
}

//Բ���ܳ�
double roundGirth(double r)
{
	return 2 * PI * r;
}

//Բ�����
double roundArea(double r)
{
	return PI * r * r;
}

//���庯������
typedef double ft(double);

#endif // !FUNC_H

