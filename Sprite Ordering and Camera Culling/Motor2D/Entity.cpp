#include "j1App.h"
#include "Entity.h"
#include "j1EntityManager.h"
#include "j1Colliders.h"
#include "j1Render.h"
#include "j1Textures.h"
#include "Player.h"
#include "SDL/include/SDL_timer.h"
#include "j1Audio.h"

Entity::Entity(int x, int y, entitytype type) : position(x, y), original_pos(x, y),type(type){
}
bool Entity::Awake(pugi::xml_node& enemy)
{
	Awake(enemy);

	return true;
}
Entity::~Entity()
{
	if (collider != nullptr)
		collider->to_delete = true;
}
void Entity::Draw(SDL_Texture* sprites, float direction, float dt)
{
	if (collider != nullptr)
	{
		if (collider->type == COLLIDER_PLAYER ){
			collider->SetPos((int)position.x, (int)position.y);
		}
		if (collider->type == COLLIDER_WALL){
			collider->SetPos((int)position.x, (int)position.y);
		}
	}	
	if (animation != nullptr){		
		App->render->PushVector(order, sprites, position.x, position.y, &(animation->GetCurrentFrame(dt)), 0.2f);
	}	
	if (type == PROP){
		App->render->PushVector(order,sprites, position.x, position.y,NULL, 0.2);
	}
}
const Collider* Entity::GetCollider() const{
	return collider;
}
const entitytype Entity::GetType()const{
	return type;
}