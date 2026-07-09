#include "VAO.h"

VAO::VAO()
{
}

void VAO::Create()
{
	glGenVertexArrays(1, &ID);
}

void VAO::LinkVBO(VBO VBO, GLuint layout)
{
	//Bind the VBO
	VBO.Bind();
	// Configure the Vertex Attribute so that OpenGL knows how to read the VBO
	glVertexAttribPointer(layout, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);

	//Enable the vertex attribute so that OpenGL
	glEnableVertexAttribArray(layout);
	//Unbind the VBO
	VBO.Unbind();
}

void VAO::Bind()
{
	// Make the VAO the current Vertex Array Object by binding it
	glBindVertexArray(ID);
}

void VAO::Unbind()
{
	// Bind both the VAO to 0 so that we don't accidentally modify the VAO
	glBindVertexArray(0);
}

void VAO::Delete()
{
	//Delete VAO object
	glDeleteVertexArrays(1, &ID);
}