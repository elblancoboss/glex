#ifndef GAMEASSET_H
#define GAMEASSET_H

#include <iostream>
#include <memory>
#include <GL/gl.h>
#include "BoundingBox.h"

class GameAsset {
 public:
		GameAsset(float, float, float);
		
		virtual void Draw(GLuint) = 0;
 
		std::shared_ptr<BoundingBox> BBox;
		glm::mat4 GetTranslationMatrix();

};

#endif
