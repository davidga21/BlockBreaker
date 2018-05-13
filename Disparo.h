
#pragma once

#include "Vector2D.h"

class Disparo  
{
	friend class Interaccion;
public:
	void mueve(float t);
	void dibuja();
	Disparo();
	virtual ~Disparo();
	void setPos(float ix,float iy);
private:
	float radio;
	Vector2D posicion;
	Vector2D origen;
	Vector2D velocidad;
	Vector2D aceleracion;
};
