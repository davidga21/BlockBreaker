#pragma once


#include "Vector2D.h"
#include "ColorRGB.h"

class Esfera  
{
	friend class Interaccion;
public:
	Esfera();
	virtual ~Esfera();
	
	void mueve(float t);
	void dibuja();

	void setColor( Byte r,Byte v, Byte a);
	void setRadio(float r);
	void setPos(float ix,float iy);
	void setVel(float vx, float vy);

private:
	ColorRGB color;
	float radio;

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
};


