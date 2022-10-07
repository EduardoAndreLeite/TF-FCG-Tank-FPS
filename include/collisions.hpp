#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/type_ptr.hpp>
#pragma once
enum EixoPlano {
    X = 1,
    Y = 2,
    Z = 3,
};

bool collisionPlano(EixoPlano eixo, float planePos, glm::vec4 pos);
bool CollisionTankCoelho(glm::vec4 Playerpos, glm::vec3 player_size, glm::vec4 bbox_min_bunny, glm::vec4 bbox_max_bunny);
bool CollisionTankPredio(glm::vec4 Playerpos, glm::vec3 player_size, glm::vec4 bbox_min_building, glm::vec4 bbox_max_building);
bool CollisionProjetilCoelho(glm::vec4 bbox_min_bunny, glm::vec4 bbox_max_bunny, glm::vec4 Projectilepos);
