#include "Complexity.h"
#include "Complexity.cpp"
int main()
{
	Complexity <double, 2> Numers;
	Numers.set_real(-13.5);
	Numers.set_image(-3);
	Numers.fill_buffer();
	Numers.fill_buffer();
	Complexity <double, 2> Copy_Numers = Numers;
	Complexity <double, 2> Numbers(-14, 22);
	Complexity <int, 2> Nums;
	std::cin >> Nums;
	Nums.fill_buffer();
	std::cout << Nums << "\n";
	print_buffer(Nums);
	print_buffer(Numers);
	++++Numers;
	std::cout << Numers << "\n";
	Numers++;
	std::cout << Numers << "\n";
	Numers--;
	std::cout << Numers << "\n";
	----Numers;
	std::cout << Numers << "\n";
	Numbers += Numers;
	std::cout << Numers << "\n";
	Numbers -= Copy_Numers;
	std::cout << Copy_Numers << "\n";
	Copy_Numers = Numbers * Numers;
	std::cout << Numbers << "\n";
	Copy_Numers = Numbers / Numers;
	std::cout << Numbers << "\n";
	Copy_Numers = Numbers + Numers;
	std::cout << Numbers << "\n";
	Copy_Numers = Numbers - Numers;
	std::cout << Numbers << "\n";
	Numers = Copy_Numers;
	if (Copy_Numers > Numbers)
		std::cout << Copy_Numers << "\n";
	else if (Numers < Numbers)
		std::cout << Copy_Numers << "\n";
	else if (Numers == Copy_Numers)
		std::cout << Numers << "\n";
	Copy_Numers.output_exp();
	Numbers.output_tr();
}
// Приведение типов, выведение аргументов шаблона из тела шаблона, частичнаи полная специализация класса и метода