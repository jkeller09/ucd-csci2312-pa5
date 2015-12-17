//
// Created by Jessica
//
#include <iostream>
#include <set>

#include "Game.h"
#include "Gaming.h"

namespace Gaming{

    Game::NUM_INIT_AGENT_FACTOR = 2;
    Game::NUM_INIT_RESOURCE_FACTOR = 2;
    Game::MIN_WIDTH = 3;
    Game::MIN_HEIGHT = 3;
    Game::STARTING_AGENT_ENERGY = 20;
    Game::STARTING_RESOURCE_CAPACITY = 10;


    __numInitAgents = (__width * __height) / NUM_INIT_AGENT_FACTOR;
    __numInitResources = (__width * __height) / NUM_INIT_RESOURCE_FACTOR;


    unsigned int numStrategic = __numInitAgents / 2;
    unsigned int numSimple = __numInitAgents - numStrategic;
    unsigned int numAdvantages = __numInitResources / 4;
    unsigned int numFoods = __numInitResources - numAdvantages;

    Gaming::PositionRandomizer(){

        std::default_random_engine gen;
        std::uniform_int_distribution<int> d(0, __width * __height);

// populate Strategic agents
        while (numStrategic > 0) {
            int i = d(gen); // random index in the grid vector
            if (__grid[i] == nullptr) { // is position empty
                Position pos(i / __width, i % __width);
                __grid[i] = new Strategic(*this, pos, Game::STARTING_AGENT_ENERGY);
                numStrategic --;
            }
        }
    }

    unsigned int Game::getWidth() const {

    }

    unsigned int Game::getHeight() const {

    }

    unsigned int Game::getNumPieces() const {

    }

    unsigned int Game::getNumAgents() const {

    }

    unsigned int Game::getNumSimple() const {
        unsigned int numAgents = 0;

        for (auto it = __grid.begin(); it != __grid.end(); ++it) {
            Agent *agent = dynamic_cast<Simple*>(*it);
            if (agent) numAgents ++;
        }

        return numAgents;
    }

    unsigned int Game::getNumStrategic() const {

    }

    unsigned int Game::getNumResources() const {

    }

    Status Game::getStatus() const {

    }

    unsigned int Game::getRound() const {

    }

    bool Game::addSimple(const Position & position){

    }

    bool Game::addSimple(unsigned x, unsigned y){

    }

    bool Game::addStrategic(const Position &position, Strategy *s = new DefaultAgentStrategy()){

    }

    bool Game::addStrategic(unsigned x, unsigned y, Strategy *s = new DefaultAgentStrategy()){

    }

    bool Game::addFood(const Position &position){

    }

    bool Game::addFood(unsigned x, unsigned y) {

    }

    bool Game::addAdvantage(const Position &position){

    }

    bool Game::addAdvantage(unsigned x, unsigned y){

    }

    Surroundings Game::getSurroundings(const Position &pos) const {

    }

    ActionType Game::reachSurroundings(const Position &from, const Position &to){

    }

    Position Game::randomPosition(const std::vector<int> &positions){

        return __posRandomizer(positions);
    }

    bool Game::isLegal(const ActionType &ac, const Position &pos) const {

    }

    Postion Game::move(const Position &pos, const ActionType &ac) const {

    }

    void Game::round(){

        std::set<int> iset;
        iset.insert(1);
        iset.insert(2);
        iset.insert(3);
        iset.insert(5);
        iset.insert(6);
        iset.insert(8);

        for (auto it = iset.begin(); it != iset.end(); ) {
            int elementToSearch = 6;
            std::cout << "Iterating through " << *it << ".";
            if (*it == 2) {
                std::cout << " Inserting 0." << std::endl;
                iset.insert(0);
                ++it;
            } else if (*it <= 3) {
                std::cout << std::endl;
                ++it;
            } else {
                std::cout << " Searching for " << elementToSearch << ". ";
                auto search = iset.find(elementToSearch);
                if (search != iset.end()) {
                    // Note: std::distance is the way to compare iterators but it requires bidirectional or random-access
                    // iterators to work in both directions (since they have to be mutually reachable by incrementing)
                    // these iterators are not implemented for std::set in the Standard Library, and implementing one
                    // is beyond the scope of this assignment, we resort to using the following hack to give us what we
                    // need.
                    int d = elementToSearch - *it;
                    std::cout << "Found " << elementToSearch << ". Distance from " << *it << " is " << d << ". Erasing." <<
                    std::endl;
                    if (d == 0) {
                        it = iset.erase(search); // if erasing the current element, erase returns an iterator to the next
                    } else {
                        iset.erase(search); // if erasing another element, we need to increment the iterator ourselves
                        ++it;
                    }
                } else {
                    std::cout << "No " << elementToSearch << " found." << std::endl;
                    ++it;
                }
            }
        }

        for (int i: iset) std::cout << i << std::endl;

        return 0;

    }

    void Game::play(bool verbose = false){

    }
}