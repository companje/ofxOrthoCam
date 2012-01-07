/*
 *  OrthoCamera.h
 *  advanced3dExample
 *
 *  Created by Elliot Woods on 19/01/2011.
 *  renamed from OrthoCamera to ofxOrthoCam by Rick Companje
 *  Copyright 2011 Kimchi and Chips. All rights reserved.
 *
 */

// Ortho camera is a custom
// camera we've created in
// this example
//
// We inherit from ofCamera

#include "ofMain.h"

class ofxOrthoCam : public ofCamera {
public:
	ofxOrthoCam();	
	void begin(ofRectangle rect = ofGetWindowRect());
	float scale;
};
