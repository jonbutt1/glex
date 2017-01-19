#include "GameWorld.h"

GameWorld::GameWorld (ApplicationMode mode) : asset_manager(std::make_shared<GameAssetManager>(mode)) {

 auto cube1=std::make_shared<CubeAsset>(0.0f,0.0f,0.0f);
 auto cube2=std::make_shared<CubeAsset>(-5.0f,0.0f,0.0f);
 auto cube3=std::make_shared<CubeAsset>(3.0f,0.0f,0.0f);
 asset_manager->AddAsset(cube1);
 asset_manager->AddAsset(cube2);
 asset_manager->AddAsset(cube3);
 cube2->scaleModel(1.0f,3.0f,3.0f);
 cube3->scaleModel(2.0f,2.0f,0.0f);
 cube3->setModelColour(1.0f,1.0f,0.0f);
 cube1->setModelColour(1.0f,0.0f,0.0f);
}

void GameWorld::Draw() {
  asset_manager->Draw();
}
