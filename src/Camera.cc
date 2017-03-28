#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Camera.h"

Camera::Camera(){
/*x_pos=0.0f;
y_pos=0.0f;
z_pos=5.0f;
cameraPosition = glm::vec3(x_pos, y_pos, z_pos);
cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
viewMatrix=glm::lookAt(cameraPosition,cameraTarget,glm::vec3(0.0f,1.0f,0.0f));*/
viewMatrix=glm::mat4();
}

glm::mat4 Camera::getView(){
return viewMatrix;
}
/*
* Translates the view matrix to move the camera.
*/
void Camera::translateCamera(GLfloat x, GLfloat y, GLfloat z){

viewMatrix = glm::translate(this->viewMatrix, glm::vec3(x, y, z));

}
