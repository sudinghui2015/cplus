/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sudinghui
 *
 * Created on 2017年6月8日, 上午1:04
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are tow more.";
    carrots = carrots + 2;
    cout << "How you have " << carrots << " carrots." << endl;
    return 0;
}

