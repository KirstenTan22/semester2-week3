#include <stdio.h>

/*
 * Example using different variable types
 */

int main( void ) {

    // define variables for the following data and print something useful about them in each case
    // choose appropriate variable names and data types considering also the range of values that are possible

    // 1. the hour hane of a clock
    int hour = 12;

    // 2. the total population of a country, eg. China has approximately 1.4billion people
    long population = 1400000000;

    // 3. the number of minutes between a given date/time and the current date/time, either earlier (negative) or in the future (positive)
    long minutes = 55;

    // 4. the mean temperature in Leeds over a one-year period
    float leedsTemperature = 12.5f;

    // 5. a precise GPS location to within 10cm distance
    double lattitude = 53.0004;
    double longitude = 0.11123;

    // 6. a calculation of pi to 12 decimal places 
    double pi = 3.141592653589;

    return 0;
}