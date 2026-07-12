#version 330 core

out vec4 FragColor;

//Inputs the colour from the vertex shader
in vec4 colour;

in vec2 texCoord;

uniform sampler2D tex0;

void main()
{
	//FragColor = vec4(colour);
	FragColor = texture(tex0, texCoord);
}