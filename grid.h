/**
 * Declares a class representing a 2d grid of cells.
 * Rich documentation for the api and behaviour the Grid class can be found in grid.cpp.
 *
 * The test suites provide granular BDD style (Behaviour Driven Development) test cases
 * which will help further understand the specification you need to code to.
 *
 * @author 960444
 * @date March, 2020
 */
#pragma once

// Add the minimal number of includes you need in order to declare the class.
// #include ...

/**
 * A Cell is a char limited to two named values for Cell::DEAD and Cell::ALIVE.
 */
enum Cell : char {
    DEAD  = ' ',
    ALIVE = '#'
};

/**
 * Declare the structure of the Grid class for representing a 2d grid of cells.
 */
class Grid {
    // How to draw an owl:
    //      Step 1. Draw a circle.
    //      Step 2. Draw the rest of the owl.
  private:
    //member variables
    unsigned int width;
    unsigned int height;
    unsigned int total_cells;
    unsigned int alive_cells;
    unsigned int dead_cells;

  public:
    //construction & destruction
    Grid();
    explicit Grid(const unsigned int square_size);
    Grid(const unsigned int _width, const unsigned int _height);
    //~Grid();

    //member functions
    unsigned int get_width() const;
    unsigned int get_height() const;
    unsigned int get_total_cells() const;
    unsigned int get_alive_cells() const;
    unsigned int get_dead_cells() const;
    void resize(const unsigned int square_size); 
    void resize(const unsigned int new_width, const unsigned int new_height);

};
