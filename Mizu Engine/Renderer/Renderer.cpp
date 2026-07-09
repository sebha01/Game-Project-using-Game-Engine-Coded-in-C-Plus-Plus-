#include "Renderer.h"

Renderer::Renderer()
{	
}

Renderer::~Renderer()
{
}

void Renderer::setUp2DTriangle()
{
	VAO1.Create();
	VAO1.Bind();

	defaultShaderProgram = Shader("../../../Mizu Engine/Renderer/Shaders/defaultShader.vert", "../../../Mizu Engine/Renderer/Shaders/defaultShader.frag");
	VBO1 = VBO(Triangle2DVertices, sizeof(Triangle2DVertices));
	
	VAO1.LinkVBO(VBO1, 0);
	VAO1.Unbind();
	VBO1.Unbind();
}

void Renderer::draw2DTriangle()
{
	//Tell OpenGL which shader program to use
	defaultShaderProgram.Activate();
	//Bind VAO so OpenGL knows to use it 
	VAO1.Bind();
	//Draw the triangle using GL_TRIANGLES primitive
	glDrawArrays(GL_TRIANGLES, 0, 3);
}

void Renderer::delete2DTriangleVariables()
{
	//Delete all objects created when rendering the 2D triangle
	VAO1.Delete();
	VBO1.Delete();
	defaultShaderProgram.Delete();
}

void Renderer::setUpIndexBuffer2DTriangle()
{
	VAO1.Create();
	VAO1.Bind();

	defaultShaderProgram = Shader("../../../Mizu Engine/Renderer/Shaders/defaultShader.vert", "../../../Mizu Engine/Renderer/Shaders/defaultShader.frag");
	VBO1 = VBO(IndexBuffer2DTriVerts, sizeof(IndexBuffer2DTriVerts));
	EBO1 = EBO(IndexBufferIndices, sizeof(IndexBufferIndices));

	VAO1.LinkVBO(VBO1, 0);
	VAO1.Unbind();
	VBO1.Unbind();
	EBO1.Unbind();
}

void Renderer::drawIndexBuffer2DTriangle()
{
	//Tell OpenGL which shader program to use
	defaultShaderProgram.Activate();
	//Bind VAO so OpenGL knows to use it 
	VAO1.Bind();
	//Draw the triangle using GL_TRIANGLES primitive
	glDrawElements(GL_TRIANGLES, 9, GL_UNSIGNED_INT, 0);
}

void Renderer::deleteIndexBuffer2DTriangleVariables()
{
	VAO1.Delete();
	VBO1.Delete();
	EBO1.Delete();
}
