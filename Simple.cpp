//
// Created by Jessica
//

#include "Simple.h"

namespace Gaming{

    Simple::SIMPLE_ID = 'S';

    Simple::Simple(const Game &g, const Position &p, double energy) {

    }

    Simple::~Simple(){

    }

    void Simple::print(std::ostream &os) {

        os << SIMPLE_ID << __id;
    }

    ActionType Simple::takeTurn(const Surroundings &s){


    }
}