/*
 * GarbageTruck.cpp
 *
 *  Created on: 20/04/2016
 *      Author: User
 */


#include "GarbageTruck.h"


unsigned int GarbageTruck::TruckCounter = 0;


GarbageTruck::GarbageTruck(unsigned int capacity) {
	this->ID = ++TruckCounter;
	this->capacity = capacity;
	this->carrying = 0;
}


unsigned int GarbageTruck::getCapacity() const {
	return capacity;
}

unsigned int GarbageTruck::getCarrying() const {
	return carrying;
}

unsigned int GarbageTruck::getID() const {
	return ID;
}

bool GarbageTruck::addCarrying(unsigned int quantity) {

	if (carrying + quantity > capacity)
		return false;

	carrying += quantity;
	return true;
}


Route GarbageTruck::unload() {
	// TODO THROW
	if (routes.empty()) ;

	carrying = 0;
	Route r = routes.front();
	routes.pop();

	return r;
}

void GarbageTruck::addPickingRoute(Route route) {
	routes.push(route);
}