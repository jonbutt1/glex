#include "GameWorld.h"

GameWorld::GameWorld (ApplicationMode mode) : asset_manager(std::make_shared<GameAssetManager>(mode)) {

 auto cube1=std::make_shared<CubeAsset>();
 auto cube2=std::make_shared<CubeAsset>();
 auto cube3=std::make_shared<CubeAsset>();
 asset_manager->AddAsset(cube1);
 asset_manager->AddAsset(cube2);
 asset_manager->AddAsset(cube3);
 cube1->translateModel(1.0f,0.0f,-5.0f);
  cube2->scaleModel(1.0f,3.0f,3.0f);
 cube2->translateModel(1.5f,0.0f,-8.0f);
 cube3->scaleModel(2.0f,2.0f,0.0f);
 cube3->setModelColour(1.0f,1.0f,0.0f);
 cube3->translateModel(-4.0f,0.0f,0.0f);
 cube1->setModelColour(1.0f,0.0f,0.0f);

int wallNum = 10;
for(int i=0;i<wallNum;i++){
	auto cube=std::make_shared<CubeAsset>();
	asset_manager->AddAsset(cube);
	cube->translateModel((wallNum+(2*i))*-1,0.0f,-3.0f);
}

int swallNum = 10;
for(int i=0;i<swallNum;i++){
	auto cube=std::make_shared<CubeAsset>();
	asset_manager->AddAsset(cube);
	cube->translateModel((swallNum+(2*i))*-1,0.0f,3.0f);
}
}

void GameWorld::Draw() {
  asset_manager->Draw();
}

