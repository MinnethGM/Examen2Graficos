#pragma once
#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp" 

class SuperNave : public Modelo
{
public:
	SuperNave();
	float angulo;
	vec3 coordenadas;
	float direccionAngular = 0.001f;
	float velocidad = 0.0009f;
	void moverSuperNave(int direccion);
	void rotarNave(int direccionAngular);
};