#pragma once

#include "BarraMovil.h"
#include "Caja.h"
#include "Esfera.h"

class Interaccion  
{
public:
	static bool rebote(Esfera& e1, Esfera& e2);
	Interaccion();
	virtual ~Interaccion();	
	
	static bool rebote(Esfera& e, Pared p);
	static void rebote(Esfera& e, Caja c);
	static void rebote(Barra& b, Caja c);
	static void rebote(Esfera& e, Barra b);

};

