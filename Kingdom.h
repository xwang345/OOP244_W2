//
// Created by Xiaochen Wang on 2017-05-27.
//

#ifndef SICT_Kingdom_H_
#define SICT_Kingdom_H_
// TODO: sict namespace
namespace sict {
    // TODO: define the structure Kingdom in the sict namespace
    struct Kingdom{
        char m_name[32];
        int m_population;
    };
    // TODO: declare the function display(...),
    //         also in the sict namespace
    void display(Kingdom &kingdom);
    void display(Kingdom kingdom[], int count);
}
#endif
