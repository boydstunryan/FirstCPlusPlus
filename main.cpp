//
//  main.cpp
//  FirstCPlusPlus
//
//  Created by Boydstun, Ryan on 1/23/18.
//  Copyright © 2018 Boydstun, Ryan. All rights reserved.
//

#include <iostream>

using namespace std;

int main() //(int argc, const char * argv[])
{
    // insert code here...
    cout << "Hello, World!\n" << endl;
    string word;
    getline(cin, word);
  //  cin >> word;
    cout << "Hello " << word << endl;
    cout << (3 + 5 * 43) << endl;
    return 17;
}
