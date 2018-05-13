

#include "BarraMovil.h"
#include "glut.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Barra::Barra()
{
	altura=1.8f;
}

Barra::~Barra()
{

}

void Barra::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x,posicion.y,0);
	glColor3f(0.0f,1.0f,1.0f);
	glutSolidCube(2);
	glPopMatrix();

}

void Barra::mueve(float t)
{
	posicion=posicion+velocidad*t+aceleracion*(0.5f*t*t);
	velocidad=velocidad+aceleracion*t;
}
void Barra::setVel(float vx, float vy)
{
	velocidad.x=vx;
	velocidad.y=vy;
}

