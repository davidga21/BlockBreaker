
#pragma once

#include "Vector2D.h"

class Barra
{
	friend class Interaccion;
public:
	void mueve(float t);
	void dibuja();
	Barra();
	virtual ~Barra();
	void setVel(float vx, float vy);
private:
	float altura;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

};

