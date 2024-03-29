#include "Object.h"

#include "mesh.h"
#include "Material.h"
#include "Shader.h"


void Object::transform(const glm::mat4& m) {
	material->shader->setModelMatrix(m);
}