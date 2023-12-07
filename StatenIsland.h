#ifndef STATENISLAND_H
#define STATENISLAND_H

#include <iostream>
using namespace std;


#include "Borough.h"

class StatenIsland : public Borough {

private:

    int crimeDirectory[9][2];

    enum crimeTypes{
        violent = 1,
        murder = 2,
        forcible_rape = 3,
        robbery = 4,
        aggravated_assault = 5,
        property = 6,
        burglary = 7,
        larceny = 8,
        motor_vehicle_theft = 9,

    };

    int crime [9][2] {
                    {1,1746},
                    {2,11},
                    {3,81},
                    {4,289},
                    {5,1365},
                    {6,5435},
                    {7,303},
                    {8,4613},
                    {9,519},
                    };




public:

    StatenIsland():Borough(7181, 2022, "Staten Island"){

        for(int i=0; i<9; i++)
        {
            for(int j= 0; j<2; j++)
            {
                crimeDirectory[i][j] = crime[i][j];
            }
        }


    }

    QString highestCrime(){
        QString output;

        int temp_x;
        int temp_y;


        for(int i = 0; i< 9; i++)
        {
            for(int k = i+1; k< 9; k++)
            {
                if( crimeDirectory[i][1] < crimeDirectory[k][1] )
                {
                    temp_x = crimeDirectory[i][0];
                    temp_y =crimeDirectory[i][1];
                    crimeDirectory[i][0] = crimeDirectory[k][0];
                    crimeDirectory[i][1] = crimeDirectory[k][1];
                    crimeDirectory[k][0] = temp_x;
                    crimeDirectory[k][1] = temp_y;

                }
            }
        }


        for(int i = 0; i< 9; i++){
            for(int k = 0; k< 2; k++){
                std::cout << crimeDirectory[i][k] <<" ";
            }
            cout<<endl;
        }

        int index1 = crimeDirectory[0][0];
        int index2 = crimeDirectory[1][0];
        int index3 = crimeDirectory[2][0];

        output += "<b>The most commited crimes in Staten Island are:</b><br>"; // print top three crime


        output += "<b>1. </b>" + printTop3(index1) + "<br>";
        output += "<b>2. </b>" + printTop3(index2) + "<br>";
        output += "<b>3. </b>" + printTop3(index3) + "<br>";

        return output;

    }

    string printTop3(int index){

        switch (index) {
        case 1:
            return "Violent";
            break;
        case 2:
            return "Murder";
            break;
        case 3:
            return "Forcible Rape";
            break;
        case 4:
            return "Robbery";
            break;
        case 5:
            return "Aggravated Assault";
            break;
        case 6:
            return "Propert Crime";
            break;
        case 7:
            return "Burglary";
            break;
        case 8:
            return "Larceny";
            break;
        case 9:
            return "Motor Vehicle Theft";
            break;
        }

        return 0;
    }

};
#endif // STATENISLAND_H
