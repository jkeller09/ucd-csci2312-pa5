//
// Created by Jessica
//

#include "Resource.h"

namespace Gaming{

    Resource::RESOURCE_SPOIL_FACTOR = 1.2;

    Resource::Resource(const Game &g, const Position &p, double __capacity){

        __capacity = RESOURCE_SPOIL_FACTOR;
    }

    Resource::~Resource() {

    }

    double Resource::consume(){

    }

    void Resource::age() {

    }

    ActionType Resource::takeTurn(const Surroundings &s){

        return STAY;
    }

    Piece &Resource::operator*(Piece *other){

        return other.interact(this);
    }

    Piece &Resource::interact(Agent *other){

        other->addEnergy(this->getCapacity());

        this->finish();

        return this;
    }

    Piece &Resource::interact(Resource *other) {

        return other;
    }

}