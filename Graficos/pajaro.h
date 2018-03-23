#pragma once
#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp" 

class Pajaro : public Modelo
{
public:
	Pajaro();
	float angulo;
	vec3 coordenadas;
	float direccionAngular = 0.001f;
	float velocidad = 0.0005f;
	void moverPajaro(int direccion);
	void rotarPajaro(int direccionAngular);
};
