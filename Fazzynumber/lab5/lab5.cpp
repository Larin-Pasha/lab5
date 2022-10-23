
/*
Завдання:
Реалізувати клас Fazzynumber для роботи з нечіткими числами, які
представляються трійками чисел (х – e1, х, х + e2). Для чисел А = (А - аi, А, А + аr) і В = (В - bi, В, В + br)
арифметичні операції виконуються по наступних формулах:
• додавання А + В = (А + В - аi - br, А + В, А + В + ar + br);
• вирахування А - В = (А - В - аi - br, А - В, А - В + ai + br);
• множення А * В = (A * B – B * ai – А * bi + ai * bi, А * В, A * B + B * ai + А * bi + ai * bi);
• обернене число А = (1 / (А + ar), 1/ А, 1 / (А – аi)), А > 0;
• ділення А / В = ((A - ai) / (В + bi), А / В, (А + аr) / (В - bi)), В > 0;
*/


#include"../Fazzynumber/Fazzynumber.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Fazzynumber();
	Fazzynumber one(13, 4, 5);
	Fazzynumber two;
	Fazzynumber three;
	//one = one.Init(12, 2, 4);
	//two = two.Init(15, 3, 6);
	//one = one.Read();
	//two = two.Read();
	three = one;
	one.toString();
	two.toString();
	Fazzynumber c;
	c.result(c = one + two);
	c.Display();
	c.result(c = one - two);
	c.Display();
	c.result(c = one * two);
	c.Display();
	c.result(c = one ^ two);
	c.Display_error1(three);
	c.result(c = one / two);
	c.Display_error2(two);
	/*one.result(one.sum(two));
	one.Display();
	one = three;
	one.result(one.subtract(two));
	one.Display();
	one = three;
	one.result(one.multiplication(two));
	one.Display();
	one = three;
	one.result(one.inverse(one));
	one.Display_error1(three);
	one = three;
	one.result(one.division(two));
	one.Display_error2(two);*/
	system("pause");
	return 0;

}