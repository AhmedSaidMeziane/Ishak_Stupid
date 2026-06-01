# Lost Signal - Survival Game

This is my first large C++ project.

The game is a survival game where the player is trapped on an island after a plane crash. The goal is to survive, collect resources, craft tools, build a radio, and send a signal for rescue.

## Project Structure

|--- main.cpp
|
|--- Data_game.h
|    -> Contains all game data such as structures, enums, inventory,
|       player information, locations, and resources.
|
|--- Explore.h
|    -> Contains exploration functions for each location and random events.
|
|--- run_game.h
|    -> Contains the main game loop, win/lose conditions,
|       time system, and sleep system.
|
|--- move_location.h
|    -> Allows the player to travel between different locations.
|
|--- Hunt.h
|    -> Contains hunting mechanics and hunting events.
|
|--- Eat_Drink.h
|    -> Handles food and water consumption.
|
|--- craft.h
|    -> Contains all crafting recipes and crafting logic.
|
|--- inventory_fullview.h
|    -> Displays the complete inventory.
|
|--- UI.h
|    -> Displays menus, player status, game information,
|       and user interface functions.
|
|--- input_output.h
|    -> Contains input validation and random number generation utilities.
|
|--- Actionbyplace.h
|    -> Generates random events depending on the current location.

## Features

* Multiple locations to explore.
* Random events system.
* Inventory management.
* Crafting system.
* Hunting system.
* Day and time progression.
* Health, hunger, water, and energy management.
* Win and lose conditions.
* Radio building mission.

## What I Learned

* Passing variables by reference.
* Organizing data using structures.
* Using enums in real projects.
* Splitting projects into multiple header files.
* Designing game systems.
* Creating menus and game loops.
* Managing inventories and resources.
* Writing larger programs compared to small exercises.

## Notes

This was my first attempt at building a project close to 1000 lines of code.

The main goal of this project was learning project organization, game logic, and improving my C++ programming skills.
