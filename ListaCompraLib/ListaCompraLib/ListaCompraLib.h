#pragma once
#include <iostream>

namespace ListaCompraLib {

	class Compras
	{
	public:
		static void Menu();
		static void Recetas(std::string listaCompra[], int cantidad[], int counter);
		static void RecetasFruta();
		static void RecetasVerdura();
		static void RecetasCarne();
		static void RecetasPescado();
		static void RecetasVarias();

	};


}