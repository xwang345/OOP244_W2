//
// Created by Xiaochen Wang on 2017-05-27.
//

// TODO: include the necessary headers
#include <iostream>
#include "Kingdom.h"
// TODO: the sict namespace
using namespace sict;
using namespace std;

// TODO:definition for display(...)
namespace sict {

    void display(Kingdom &kingdom) {
        cout << kingdom.m_name << ", " << "population " << kingdom.m_population << endl;
    }

    void display(Kingdom kingdom[], int count){
        int i;
        int result = 0;
        cout << "------------------------------" << endl;
        cout << "Kingdoms of SICT" << endl;
        cout << "------------------------------" << endl;
        for(i=0; i<count; i++){
            cout << i+1 << "." << kingdom[i].m_name << ", " << "population " << kingdom[i].m_population <<endl;
            result += kingdom[i].m_population;
        }
        cout << "------------------------------" << endl;
        cout << "Total population of SICT: " << result << endl;
        cout << "------------------------------" << endl;
    }
}

