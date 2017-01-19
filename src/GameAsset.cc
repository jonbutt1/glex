#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>



void GameAsset::scaleModel(GLfloat x, GLfloat y, GLfloat z){
glm::mat4 scaleMatrix;
scaleMatrix[0][0]+=x;
scaleMatrix[1][1]+=y;
scaleMatrix[2][2]+=z;
model*=scaleMatrix;
}

glm::mat4 GameAsset::getModelMat(){
return model;
}
