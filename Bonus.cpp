
#include "Bonus.h"
#include <stdlib.h>
#include "glut.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Bonus::Bonus()
{
	//movimiento gravitatorio
	//velocidad vertical inicial
	aceleracion.y=-9.8f;
	velocidad.y=5;
	lado=0.5f;
}

Bonus::~Bonus()
{

}

void Bonus::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x,posicion.y,0);
	glRotatef(30,1,1,1);
	glColor3f(	rand()/(float)RAND_MAX,
			rand()/(float)RAND_MAX,
			rand()/(float)RAND_MAX);//color aleatorio
    	glutSolidCube(lado);
	glPopMatrix();

}

void Bonus::mueve(float t)
{
	posicion=posicion+velocidad*t+aceleracion*(0.5f*t*t);
	velocidad=velocidad+aceleracion*t;
}
void Bonus::setPos(float ix,float iy)
{
	posicion.x=ix;
	posicion.y=iy;
}	