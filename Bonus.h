
#pragma once

#include "Vector2D.h"
#include "ColorRGB.h"
class Bonus  
{
	friend class Interaccion;
public:
	void mueve(float t);
	void dibuja();
	void setPos(float ix,float iy);
	Bonus();
	virtual ~Bonus();
private:
	float lado;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

};

