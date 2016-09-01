//
//  main.cpp
//  Book Exercise 3.14
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book Exercise 3.14 - Shirley Jackson's Lottery
//

#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main() {
    // Title
    cout << "Let's Play The Lottery \n";
    
    // Data and Initialization
    int lottery_digit_1 = 0;
    int lottery_digit_2 = 0;
    int lottery_digit_3 = 0;
    int pick_digit_1 = 0;
    int pick_digit_2 = 0;
    int pick_digit_3 = 0;
    srand(time(0)); // seed random
    
    // I
    cout << "Enter your lottery pick (three digits): ";
    cin >> pick_digit_1 >> pick_digit_2 >> pick_digit_3;
    
    // P
    
    // set each lottery digit by random number
    lottery_digit_1 = rand() % 10;
    lottery_digit_2 = rand() % 10;
    lottery_digit_3 = rand() % 10;
    
    // O
    cout << "The lottery numbers are " << lottery_digit_1  << lottery_digit_2 << lottery_digit_3 << endl;
    
    cout << "Pick numbers are " << pick_digit_1  << pick_digit_2 << pick_digit_3 << endl;
    
    if (pick_digit_1 == lottery_digit_1 &&
        pick_digit_2 == lottery_digit_2 &&
        pick_digit_3 == lottery_digit_3) {
        cout << "Weeee've got a winner! <blink>$10,000!!!</blink>" << endl;
    } else if ((pick_digit_1 == lottery_digit_1 || pick_digit_1 == lottery_digit_2 || pick_digit_1 == lottery_digit_3) &&
               (pick_digit_2 == lottery_digit_1 || pick_digit_2 == lottery_digit_2 || pick_digit_2 == lottery_digit_3) &&
               (pick_digit_3 == lottery_digit_1 || pick_digit_3 == lottery_digit_2 || pick_digit_3 == lottery_digit_3)
               ) {
        cout << "All numbers matched, non-ordered, you win <blink>$3,000!!!</blink>" << endl;
        
    } else if ((pick_digit_1 == lottery_digit_1 || pick_digit_1 == lottery_digit_2 || pick_digit_1 == lottery_digit_3) ||
               (pick_digit_2 == lottery_digit_1 || pick_digit_2 == lottery_digit_2 || pick_digit_2 == lottery_digit_3) ||
               (pick_digit_3 == lottery_digit_1 || pick_digit_3 == lottery_digit_2 || pick_digit_3 == lottery_digit_3)
               ) {
        cout << "Matched one number, you win <blink>$1,000!!!</blink>" << endl;
    } else {
        cout << "You LOSE! You're such a loser. You sicken me." << endl;
    }
    
    return 0;
    
}
