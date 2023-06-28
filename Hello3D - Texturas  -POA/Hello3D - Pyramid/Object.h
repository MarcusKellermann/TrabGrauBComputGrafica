#pragma once

#include <vector>

#include <stb_image.h>

#include "Mesh.h"

using namespace std;

class Object
{
public:
	Object() {}

	void initialize(string filePath, string texNames[], Shader* shader, glm::vec3 position = glm::vec3(0.0f), glm::vec3 scale = glm::vec3(1), float angle = 0.0, glm::vec3 axis = glm::vec3(0.0, 0.0, 1.0));

	void update();
	void draw();
	void loadObj(string filePath, string texNames[]);

protected:
	void loadObj(string filePath);
	GLuint generateVAO(vector<GLfloat> vertbuffer, int& nVerts);

	GLuint loadTexture(string filePath);


	vector <Mesh> grupos;

	//Informações sobre as transformações a serem aplicadas no objeto
	glm::vec3 position;
	glm::vec3 scale;
	float angle;
	glm::vec3 axis;

	Shader* shader;
};

