//
// Created by Jessica
//

#include "AggressiveAgentStrategy.h"

namespace Gaming{

    AggressiveAgentStrategy::DEFAULT_AGGRESSION_THRESHOLD = GAME::STARTING_AGENT_ENERGY * 0.75;

    AggressiveAgentStrategy::AggressiveAgentStrategy(double agentEnergy){

        __agentEnergy = agentEnergy;

    }

    AggressiveAgentStrategy::~AggressiveAgentStrategy() {

    }

    ActionType AggressiveAgentStrategy::operator()(const Surroundings &s){

        __agentEnergy = DEFAULT_AGGRESSION_THRESHOLD;
    }
}