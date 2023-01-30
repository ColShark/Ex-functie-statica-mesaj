#include <iostream>

class AfisareMesaj
{
public:
	static void Mesaj()
	{
		std::cout << "Aceasta este functia declarata static." << std::endl;
	}
};

int main()
{
	AfisareMesaj::Mesaj();

	system("pause");
}