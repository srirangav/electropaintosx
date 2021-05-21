/*
 * ElectropaintOSXView.mm
 * ElectropaintOSX
 *
 * http://www.lloydslounge.org/electropaintosx/
 *
 * Created by Douglas McInnes on 12/17/04.
 * Copyright (c) 2004, Kent RosenKoetter, Douglas McInnes. 
 * All rights reserved.
 *
 * ported from Kent Rosenkoetter's electropaint.cpp:
 * http://legolas.homelinux.org/~kent/electropaint/
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */ 

#import <ScreenSaver/ScreenSaver.h>

@interface ElectropaintView : ScreenSaverView {
   NSOpenGLView *glview;
};

- (void)initGL;
- (void)display;
- (void)reshape:(NSSize)size;

@end
