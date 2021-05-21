ElectropaintOSX

ElectropaintOSX is an OS X screensaver module port of Kent Rosenkoetter's 
clone of SGI's Electropaint screensaver "the most mesmerizing screensaver 
ever written".

Kent's page can be found here:

http://legolas.homelinux.org/~kent/electropaint/
https://web.archive.org/web/20041210033146/http://legolas.homelinux.org/~kent/electropaint/

The OS X port by Douglas McInnes lives here:

http://www.lloydslounge.org/electropaint/
https://web.archive.org/web/20110222022854/http://www.lloydslounge.org/electropaint/

This port only wraps Kent's OpenGL code in a screensaver module using
Objective-C++.  The source is released under the General Public License. 
Please see the included gpl.txt for the full license text.

For the 0.2 version, Modifications for antialiasing, VBL, parameter tweak 
has been done by Vincent Fiano <ynniv-ep@ynniv.com>.  Thanks Vincent!

Version 0.3 is a universal binary, currently raising the minimum system
requirements to 10.3.9. Changes by Alexander von Below <Alex@vonBelow.Com>

Version 0.3.1 is a universal binary, currently raising the minimum system
requirements to 10.5. It supports 64-bit and Garbage Collection under 10.6.
Changes by Thomas Vo§en <info@crimsonmagic.net>.

Version 0.3.2 has been build against the 10.8 SDK. It is compatible with
Mac OS X 10.8, raising the minimum system requirements to 10.8.0. No
changes in code. Build by Thomas Vo§en <info@crimsonmagic.net>.

Version 0.3.3 includes normal and HIPDI icons used in the system
preferences panel. Thanks to Peter Leonard for kindly supplying the image
files.

Version 0.3.4 fixes a warning during build under Mac OS X 10.10.  Thanks to 
Douglas Carmichael for sending the bug report.

Version 0.3.5 is notarised and some autorelease initializer have been changed.

Version 0.3.6 is a minor update for BigSur (MacOSX 11) and M1 macs.

Copyright (C) 2004 Kent Rosenkoetter, Douglas McInnes

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
