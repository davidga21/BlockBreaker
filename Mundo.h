#include "Caja.h"	
#include "BarraMovil.h"	
#include "Esfera.h"	
#include "Bonus.h"	
#include "Disparo.h"

class Mundo
{

	Disparo disparo;
	Esfera esfera;
	Esfera esfera2;
	Barra barra;
	Caja caja;
	Bonus bonus;
	Pared plataforma;
	float x_ojo;
	float y_ojo;
	float z_ojo;
public: 
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();
};
