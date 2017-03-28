#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


/*
* This changes the game asset size by multiplying the model matrix 
* by a new matrix with new scale values input into the parameter.
*/
void GameAsset::scaleModel(GLfloat x, GLfloat y, GLfloat z){
 glm::mat4 scaleMatrix;
 scaleMatrix[0][0]+=x;
 scaleMatrix[1][1]+=y;
 scaleMatrix[2][2]+=z;
 model*=scaleMatrix;
}

/*
* This changes the game asset colour by multiplying the default model 
* colour (white) by a new colour vector with an rgb parameter.
*/
void GameAsset::setModelColour(GLfloat r, GLfloat g, GLfloat b){
 glm::vec3 colourVector;
 colourVector[0]+=r;
 colourVector[1]+=g;
 colourVector[2]+=b;
 model_colour*=colourVector;
}

void GameAsset::translateModel(GLfloat x, GLfloat y, GLfloat z){

	model = glm::translate(this->model, glm::vec3(x, y, z));
}

glm::mat4 GameAsset::getModelMat(){
 return model;
}

glm::vec3 GameAsset::getModelColour(){
 return model_colour;
}
