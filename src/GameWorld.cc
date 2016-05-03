#include "GameWorld.h"

GameWorld::GameWorld (ApplicationMode mode) : asset_manager(std::make_shared<GameAssetManager>(mode)) {
  asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0,0.0,0.0));

asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0, 3.0 , 0.0));
		asset_manager->AddAsset(std::make_shared<CubeAsset>(0.0, 0.0 , 3.0));
}

void GameWorld::Draw() {
  asset_manager->Draw();
}
void GameWorld::UpdateCameraPosition(Input input_direction, int mouseX, int mouseY){

asset_manager->UpdateCameraPosition(input_direction,  mouseX,  mouseY);

}