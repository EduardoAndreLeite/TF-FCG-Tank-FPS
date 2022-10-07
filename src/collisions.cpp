// Headers da biblioteca GLM: cria��o de matrizes e vetores.
#include "collisions.hpp"


// Colisao com as paredes
bool collisionPlano(EixoPlano eixo, float planePos, glm::vec4 pos) {
    switch(eixo) {
        case EixoPlano::X:
            if(planePos >= 0) {
                return pos.x >= planePos;
            } else {
                return pos.x <= planePos;
            }
            break;
        case EixoPlano::Y:
            if(planePos >= 0) {
                return pos.y >= planePos;
            } else {
                return pos.y <= planePos;
            }
            break;
        case EixoPlano::Z:
            if(planePos >= 0) {
                return pos.z >= planePos;
            } else {
                return pos.z <= planePos;
            }
            break;
        }
}

// Fonte: https://developer.mozilla.org/en-US/docs/Games/Techniques/3D_collision_detection#point_vs._aabb
bool CollisionTankCoelho(glm::vec4 Playerpos, glm::vec3 player_size, glm::vec4 bbox_min_bunny, glm::vec4 bbox_max_bunny){

    glm::vec3 player_half_size = glm::vec3(player_size.x / 2, player_size.y / 2, player_size.z / 2);

    bool collision_x = (Playerpos.x + player_half_size.x >= bbox_min_bunny.x && bbox_max_bunny.x >= Playerpos.x);
    bool collision_y = (Playerpos.y + player_half_size.y >= bbox_min_bunny.y && bbox_max_bunny.y >= Playerpos.y);
    bool collision_z = (Playerpos.z + player_half_size.z >= bbox_min_bunny.z && bbox_max_bunny.z >= Playerpos.z);

    return collision_x && collision_y && collision_z;

}

// Fonte: https://developer.mozilla.org/en-US/docs/Games/Techniques/3D_collision_detection#point_vs._aabb
bool CollisionTankPredio(glm::vec4 Playerpos, glm::vec3 player_size, glm::vec4 bbox_min_building, glm::vec4 bbox_max_building){

    glm::vec3 player_half_size = glm::vec3(player_size.x / 2, player_size.y / 2, player_size.z / 2);

    bool collision_x = (Playerpos.x + player_half_size.x >= bbox_min_building.x && bbox_max_building.x >= Playerpos.x);
    bool collision_y = (Playerpos.y + player_half_size.y >= bbox_min_building.y && bbox_max_building.y >= Playerpos.y);
    bool collision_z = (Playerpos.z + player_half_size.z >= bbox_min_building.z && bbox_max_building.z >= Playerpos.z);

    return collision_x && collision_y && collision_z;

}





