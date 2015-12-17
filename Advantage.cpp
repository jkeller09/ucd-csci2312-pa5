//
// Created by Jessica
//

#include "Advantage.h"

namespace Gaming{

    Advantage::ADVANTAGE_ID = 'D';
    Advantage::ADVANTAGE_MULT_FACTOR = 2.0;

    Advantage::Advantage(const Game &g, const Position &p, double capacity) : Resource(g, p, _capacity){

        _capacity = ADVANTAGE_MULT_FACTOR;

    }

    Advantage::~Advantage(){

    }

    void Advantage::print(std::ostream os){

        os << ADVANTAGE_ID << _id;

    }

    double Advantage::getCapacity(){

        return _capacity;
    }

    double Advantage::consume(){

    }
}