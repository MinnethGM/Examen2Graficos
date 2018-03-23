#include "stdafx.h"
#include "supernave.h"

SuperNave::SuperNave()
{
	angulo = 90.0f;
	coordenadas = vec3(0.0f, 0.5f, 0.0f);
	transformaciones = mat4(1.0f);

}

void SuperNave::moverSuperNave(int direccion) {

	if (direccion == 1) {
		vec3 trasladar = vec3(1.0f * velocidad, 0.0f, 0.0f);
		transformaciones = translate(transformaciones, trasladar);
		coordenadas += trasladar;
	}
	else if (direccion == 0) {
		vec3 trasladar = vec3(-1.0f * velocidad, 0.0f,0.0f);
		transformaciones = translate(transformaciones, trasladar);
		coordenadas += trasladar;
	}
	else if (direccion == 3) {
		vec3 trasladar = vec3(0.0f, 1.0f * velocidad, 0.0f);
		transformaciones = translate(transformaciones, trasladar);
		coordenadas += trasladar;
	}
	else if (direccion == 4)
	{
		vec3 trasladar = vec3(0.0f, -1.0f * velocidad, 0.0f);
		transformaciones = translate(transformaciones, trasladar);
		coordenadas += trasladar;
	}

}

void SuperNave::rotarNave(int direccion) {
	float rotacion = direccionAngular;
	if (direccion == 1)
	{
		rotacion = -rotacion;
	}

	transformaciones = rotate(transformaciones, rotacion, vec3(0.0f, 0.0f, 1.0f));

	angulo += rotacion;
}