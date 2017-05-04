#ifndef GAMEASSET_H
#define GAMEASSET_H

#include <iostream>
#include <glm/glm.hpp>
#include <GL/gl.h>
#include "BoundingBox.h"

class GameAsset {
 public:
	GameAsset();
  virtual void Draw(GLuint) = 0;
  void scaleModel(GLfloat x, GLfloat y, GLfloat z);
  void setModelColour(GLfloat r, GLfloat g, GLfloat b);
  void translateModel(GLfloat x, GLfloat y, GLfloat z);
  glm::mat4 getModelMat();
  glm::vec3 getModelColour();
  BoundingBox getbbox();

 private:
  glm::mat4 model = glm::mat4(1.0f);
  glm::vec3 model_colour = glm::vec3(1.0f, 1.0f, 1.0f);
  BoundingBox bbox;

};

#endif
