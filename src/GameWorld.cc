#include "GameWorld.h"

GameWorld::GameWorld (ApplicationMode mode) : asset_manager(std::make_shared<GameAssetManager>(mode)) {
  asset_manager->AddAsset(std::make_shared<CubeAsset>());
  asset_manager->translateModel(2.0f,1.0f,0.0f);
}

void GameWorld::Draw() {
  asset_manager->Draw();
}
