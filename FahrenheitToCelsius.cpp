#include <fstream>
#include <string>
#include <iostream>

int main() {
  std::ifstream inputFile("FahrenheitTemperature.txt");
  std::ofstream outputFile("CelsiusTemperature.txt");
  std::string cityName;
  int temperatureF;

  if (inputFile.is_open() && outputFile.is_open()) {
  while (inputFile >> cityName >> temperatureF) {
  int temperatureC = (temperatureF - 32) * 5 / 9;
  outputFile << cityName << " " << temperatureC << "\n";
  }
  inputFile.close();
  outputFile.close();
  } else {
  std::cout << "Unable to open file";
  }
}


  return 0;