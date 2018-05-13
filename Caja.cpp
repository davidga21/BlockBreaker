

#include "Caja.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Caja::Caja()
{
	suelo.setColor(0,0,0);
	suelo.setPos(-10.0f,0,10.0f,0);

	techo.setColor(0,100,0);
	techo.setPos(-10.0f,15.0f,10.0f,15.0f);
	
	pared_dcha.setColor(100, 0, 100);
	pared_dcha.setPos(-10.0f,0,-10.0f,15.0f);

	pared_izq.setColor(100, 0, 100);
	pared_izq.setPos(10.0f,0,10.0f,15.0f);

}

Caja::~Caja()
{

}

void Caja::dibuja()
{
	suelo.dibuja();
	techo.dibuja();
	pared_izq.dibuja();
	pared_dcha.dibuja();

}
