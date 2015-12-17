//
// Created by Jessica
//

#include "Food.h"

namespace Gaming{

    Food::FOOD_ID = 'F';

    Food::Food(const Game &g, const Position &p, double capacity) : Resource(g, p, capacity){


    }

    Food::~Food(){

    }

    void Food::print(std::ostream &os) {

        os << FOOD_ID << __id;

    }
}