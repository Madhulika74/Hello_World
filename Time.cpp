/** 
 * @file time.h
 * @author Jan Doe
 * @version 1.0
 * 
 * @section LICENSE
 * 
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License as 
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version. 
 * 
 * @section DESCRIPTION
 * 
 * The Time class represents a moment of time.
 */

class Time {
public:
    /** 
     * @brief Constructor that sets the time to a given value.
     * 
     * @param timemillis A number of milliseconds 
     * passed since Jan 1, 1970.
     */
    Time(int timemillis); 

    /** 
     * @brief Get the current time.
     * 
     * @return A Time object set to the current time.
     */
    static Time now();
};
