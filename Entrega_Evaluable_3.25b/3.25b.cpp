#include <iostream>

int main() {
    int n;
    double e = 1; 
    double factorial = 1; //e es el valor total y factorial será el divisor, n será el contador de veces que sucedera
    std::cout << "Introduce la precision deseada para e\n";
	std::cin >> n;
    for (int i = 1; i <= n; i++) { //aunque en el apartado a he hecho el factorial empezando por el número más elevado, este metodo es más facil.
        factorial *= i;
        e += 1 / factorial;
    }
	std::cout << "El valor estimado de e es: " << e << std::endl;
	return 0;

}