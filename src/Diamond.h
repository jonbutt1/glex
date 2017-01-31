#ifndef DIAMOND_H
#define DIAMOND_H

#include <vector>
#include <GL/gl.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>

#include "GameAsset.h"

class Diamond : public GameAsset {
 public:
  Diamond(GLfloat x, GLfloat y, GLfloat z);
  ~Diamond();
  virtual void Draw(GLuint);

 private:
  GLuint element_buffer_length;
  GLuint vertex_buffer_token, element_buffer_token;
};
#endif // CUBEASSET_H
