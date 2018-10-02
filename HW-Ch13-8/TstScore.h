/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Class declaration
 * 
 */

#ifndef TSTSCORE_H
#define TSTSCORE_H

class TstScore {

private:
    int score;
    int avg;

public:
    TstScore();
    ~TstScore();
    void setScor();
    int getAvg();

};

#endif /* TSTSCORE_H */

