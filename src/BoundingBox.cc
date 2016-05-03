#include "BoundingBox.h"

BoundingBox::BoundingBox(float positionX, float positionY, float positionZ)
{
	this->positionX = positionX;
	this->positionY = positionY;
	this->positionZ = positionZ;

	std::cout << "Made BB" << std::endl;
}

glm::mat4 BoundingBox::GetTranslationMatrix()
{
	translate_matrix = glm::translate(glm::mat4(), glm::vec3(-positionX, positionY, positionZ));

	return translate_matrix;
}