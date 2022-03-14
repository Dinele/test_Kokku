#pragma once
#include "Grid.h"
//#include "Character.h"
#include "Types.h"
#include <vector>
#include <memory>


class Character
{
public:

    Character(Types::CharacterClass charcaterClass);
    ~Character();

    
    int Health;
    int BaseDamage;
    int DamageMultiplier;
    int PlayerIndex;
    //GridBox* currentBox;

    Character* target;
    Types::GridBox currentBox;
    
    //target = a {get; set;}

    bool IsDead;
    char Icon;

    

    bool TakeDamage(float amount);

    int getIndex(vector<Types::GridBox*> v, int index);

    void Die();

    void WalkTo(bool CanWalk);

    void StartTurn(Grid* battlefield);

    bool CheckCloseTargets(Grid* battlefield);

    void Attack(Character* target);


};

