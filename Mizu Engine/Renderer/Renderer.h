#pragma once
#include "Config.h"

#include "Renderer/Colours.h"

class Renderer
{
	private:
		//2D Triangle vertices
		float Triangle2DVertices[9] = {
		-0.5f, -0.5f, 0.0f,
		 0.5f, -0.5f, 0.0f,
		 0.0f,  0.5f, 0.0f
		};

		//Reference containers for the vertex buffer object and vertex array object
		GLuint VAO = 0;
		GLuint VBO = 0;
		//Vertex and fragment shader objects
		GLuint vertexShader = 0;
		GLuint fragmentShader = 0;
		//Shader program object
		GLuint shaderProgram = 0;

public:
	//Constructor and Destructor
	Renderer();
	~Renderer();

	//2D

	//Triangle
	void setUp2DTriangle();
	void draw2DTriangle();
	void delete2DTriangleVariables();
};