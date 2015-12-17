//
// Created by Jessica
//

#include "Strategic.h"

namespace Gaming{

    Strategic::STRATEGIC_ID = 'T';

    Strategic::Strategic(const Game &g, const Position &p, double energy, Strategy *s) {

            __strategy = s;
    }

    Strategic::~Strategic(){

    }

    void Strategic::print(std::ostream &os){

        os << STRATEGIC_ID << __id;

    }

    ActionType Strategic::takeTurn(const Surroundings &s){

        return (s);
    }


}