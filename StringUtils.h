/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StringUtils.h
 * Author: petrstepanov
 *
 * Created on August 9, 2017, 9:40 PM
 */

#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <TString.h>

class StringUtils {
public:
    StringUtils();
    StringUtils(const StringUtils& orig);
    virtual ~StringUtils();
    static TString* stripFileName(TString* path);
    static TString* stripFileExtension(TString* path);

private:

};

#endif /* STRINGUTILS_H */

