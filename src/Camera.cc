#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Camera.h"

Camera::Camera(){
x_pos=0.0f;
y_pos=0.0f;
z_pos=2.0f;
cameraPosition = glm::vec3(x_pos, y_pos, z_pos);
cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
viewMatrix=glm::lookAt(cameraPosition,cameraTarget,glm::vec3(0.0f,1.0f,0.0f));
}

glm::mat4 Camera::getView(){
return viewMatrix;
}
/*
* Translates the view matrix to move the camera.
*/
void Camera::translateCamera(GLfloat x, GLfloat y, GLfloat z){

glm::mat4 translate;

translate[3][0]+=x;
translate[3][1]+=y;
translate[3][2]+=z;

viewMatrix*=translate;
}
