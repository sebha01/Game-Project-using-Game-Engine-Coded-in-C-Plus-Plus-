#ifndef VAO_CLASS_H
#define VAO_CLASS_H

#include "Config.h"
#include "../VBO/VBO.h"

class VAO
{
	public:
		GLuint ID;
		VAO();

		void Create();
		void LinkVBO(VBO VBO, GLuint layout);
		void Bind();
		void Unbind();
		void Delete();
};

#endif