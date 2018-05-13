#include "Mundo.h"
#include "glut.h"
#include <math.h>
#include "Interaccion.h"

void Mundo::rotarOjo()
{
	float dist=sqrt(x_ojo*x_ojo+z_ojo*z_ojo);
	float ang=atan2(z_ojo,x_ojo);
	ang+=0.05f;
	x_ojo=dist*cos(ang);
	z_ojo=dist*sin(ang);
}
void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	esfera.dibuja();
	esfera2.dibuja();
	caja.dibuja();
	barra.dibuja();
	disparo.dibuja();
	plataforma.dibuja();
	bonus.dibuja();

}

void Mundo::mueve()
{
	//barra.mueve(0.085f);
	esfera.mueve(0.025f);
	esfera2.mueve(0.025f);
	bonus.mueve(0.025f);
	disparo.mueve(0.025f);
	Interaccion::rebote(barra,caja);
	Interaccion::rebote(esfera,caja);
	Interaccion::rebote(esfera,plataforma);
	Interaccion::rebote(esfera, barra);
	Interaccion::rebote(esfera2,caja);
	Interaccion::rebote(esfera2,plataforma);
	Interaccion::rebote(esfera,esfera2);
	Interaccion::rebote(esfera2, barra);
}

void Mundo::inicializa()
{
	x_ojo=0;
	y_ojo=7.5;
	z_ojo=30;

	esfera.setColor(0,0,255);
	esfera.setRadio(1.5f);
	esfera.setPos(2,4);
	esfera.setVel(5,15); 

	esfera2.setRadio(2);
	esfera2.setPos(-2,4);
	esfera2.setVel(-5,15);	

	bonus.setPos(5.0f,5.0f);
	disparo.setPos(-5.0f,0.0f);
	plataforma.setPos(-5.0f,9.0f,5.0f,9.0f);

}

void Mundo::tecla(unsigned char key)
{

}
void Mundo::teclaEspecial(unsigned char key)
{
	switch(key)
	{
	case GLUT_KEY_LEFT:
		barra.mueve(0.085f);//con este co´digo se mueve solo cuandpo pulso las flechas pero tiene un pequeño fallo
		barra.setVel (-15.0f, 0.0f);
		break;
	case GLUT_KEY_RIGHT:
		barra.mueve(0.085f);
		barra.setVel (5.0f, 0.0f);
		break;
	}
}