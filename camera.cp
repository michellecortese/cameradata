/*
 *  Camera.cp
 *  Camera
 *
 *  Created by Michelle Cortese on 2013-09-16.
 *  Copyright (c) 2013 Michelle Cortese. All rights reserved.
 *
 */

#include <iostream>
#include <cstring>
#include "Camera.h"
#include "CameraPriv.h"

using namespace std;
void printCamera( struct CameraInside camera );

struct CameraInside
{
    int filmNumberMM;
    int shotNumber;
    int shutterSpeed;
    float aperture;
    bool filmWinder;
    bool shutterState;
    bool lightIn;
    bool filmIn;
    std::string bodyType;
    std::string lensType;
};

int main( )
{
    struct CameraInside cam1;
    
    cam1.filmNumberMM = 35;
    cam1.shotNumber = 1;
    cam1.shutterSpeed = 60;
    cam1.aperture = 1.8;
    cam1.filmWinder = false;
    cam1.shutterState = true;
    cam1.lightIn = true;
    cam1.filmIn = true;
    cam1.bodyType = "Yashica FX-2";
    cam1.lensType = "Yashica DSB 50mm 1:1.9";
    
    printCamera( cam1 );
    
    return 0;
}

void printCamera( struct CameraInside camera )
{
    cout << "Film Millimetre : " << camera.filmNumberMM <<endl;
    cout << "Shot Number : " << camera.shotNumber <<endl;
    cout << "Shutter Speed : " << camera.shutterSpeed <<endl;
    cout << "Aperture : " << camera.aperture <<endl;
    cout << "Winder in Use : " << camera.filmWinder <<endl;
    cout << "Shutter is Open : " << camera.shutterState <<endl;
    cout << "Light is Inside Camera : " << camera.lightIn <<endl;
    cout << "Film is Loaded : " << camera.filmIn <<endl;
    cout << "Camera Body : " << camera.bodyType <<endl;
    cout << "Lens : " << camera.lensType <<endl;
}
