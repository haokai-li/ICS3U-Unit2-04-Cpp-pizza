// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate the total cost of pizza

#include <iostream>
#include <iomanip>

int main() {
  // This function calculate the total cost of pizza

  const float LABOR = 0.75;
  const float RENT = 1;
  const float COST_PER_INCH = 0.5;
  const float HST = 1.13;
  float sub_total;
  float diameter;
  float total;

  // input
  std::cout << "Enter diameter of the pizza you would like(inch): "
  << std::endl;
  std::cin >> diameter;

  // process
  sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
  total = sub_total * HST;

  // putput
  std::cout << "" << std::endl;
  std::cout << "The cost for a " << diameter
  << " inch pizza is $ " << std::fixed
  << std::setprecision(2) << std::setfill('0') << total << std::endl;
  std::cout << "\nDone" << std::endl;
}
