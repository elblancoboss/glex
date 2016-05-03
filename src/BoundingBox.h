#include <memory>
#include <iostream>

#include <glm/glm.hpp>
#include <glm/ext.hpp>

class BoundingBox{
	public:
		BoundingBox(float, float, float);
		glm::mat4 GetTranslationMatrix();

	private:
		float positionX;
		float positionY;
		float positionZ;

		glm::mat4 translate_matrix;

};