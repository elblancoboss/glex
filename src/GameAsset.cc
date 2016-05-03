#include "GameAsset.h"

GameAsset::GameAsset(float positionX, float positionY, float positionZ)
{
	BBox = std::make_shared<BoundingBox>(positionX, positionY, positionZ);
}

glm::mat4 GameAsset::GetTranslationMatrix()
{
	return BBox->GetTranslationMatrix();
}