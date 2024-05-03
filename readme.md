# Hypercubed QMK Userspace

This is my personal QMK userspace, a collection of keymaps and other QMK related files that I use for my keyboard(s).

## Layout

![Layout](./keyboard-layout.png)
[keyboard-layout-editor.com](http://www.keyboard-layout-editor.com/#/gists/e796a7a562043497ed079116fce5ce15)

## OS Support

As mentioned [here](https://docs.qmk.fm/#/feature_unicode), "there is no “standard” method of Unicode input across all operating systems, each of them require their own setup process on both the host and in the firmware".  However, in my testing `UNICODE_MODE_WINDOWS` works well on both Windows and MacOS.  In fact, I have found that `UNICODE_MODE_WINDOWS` works better on MacOS than on Windows.  To use `UNICODE_MODE_WINDOWS` on MacOS and Windows you must setup the OS host as described in the [QMK documentation](https://docs.qmk.fm/#/feature_unicode?id=input-modes) (see MacOS and Windows (HexNumpad)).  I have not tested on Linux at all.

> **Note:** Using the MacOS "Modifier Keys button" in the Keyboard System Preferences to swap modifier keys may not work as expected.

## License

Copyright 2024 J. Harshbarger @Hypercubed

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

