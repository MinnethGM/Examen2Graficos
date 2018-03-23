#pragma once
#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp" 

class Casa : public Modelo
{
public:
	Casa();
	float angulo;
	vec3 coordenadas;
	float direccionAngular = 0.001f;
	float velocidad = 0.0009f;
	
};
